#include "platform/CCPlatformConfig.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
#include <jni.h>
#include <string>
#include <iconv.h>
#include <iostream>

class HStringConverter {
public:
	HStringConverter() :_buf(nullptr), _bufSize(0) {}

	~HStringConverter() {
		delete[] _buf;
		_buf = nullptr;
		_bufSize = 0;
	}

	char *convertString(const char * fromCode, const char * toCode, const char * source) {
		size_t retlen = 0;
		size_t inbytesleft = strlen(source);
		if (!strncmp(fromCode, "UTF-16LE", 8))
		{
			inbytesleft = wcslen((wchar_t *)source) * 2;
		}
		size_t outbytesleft = inbytesleft * 4 + 2;
		retlen = outbytesleft;

		char *tmp = resize(outbytesleft);

		char * inbuf = (char *)source;
		char * outbuf = (char *)tmp;

		iconv_t cd = iconv_open(toCode, fromCode);
		size_t errorNo = iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
		retlen -= outbytesleft;

		if (errorNo == -1) {
			memcpy(tmp, source, inbytesleft);
		}
		else {
			memset(tmp + retlen, 0, outbytesleft);
		}

		iconv_close(cd);

		return tmp;
	}
private:
	char *resize(int newSize) {
		if (_bufSize < newSize) {
			delete[] _buf;
			_bufSize = newSize;
			_buf = new char[newSize];
		}
		memset(_buf, 0, newSize);
		return _buf;
	}
	char    *_buf;
	size_t  _bufSize;
};

class GBK : public HStringConverter {
public:
	GBK(const char *gbk) :_gbk(gbk) { }
	char *toUtf8() {
		return convertString("GBK", "UTF-8", _gbk);
	}
	wchar_t *toUnicode() {
		return (wchar_t *)convertString("GBK", "UTF-16LE", _gbk);
	}
private:
	const char *_gbk;
};

class Unicode : public HStringConverter {
public:
	Unicode(const wchar_t *unicode) :_unicode(unicode) { }
	char *toGBK() {
		return convertString("UTF-16LE", "GBK", (const char*)_unicode);
	}
	char *toUtf8() {
		return convertString("UTF-16LE", "UTF-8", (const char*)_unicode);
	}
private:
	const wchar_t *_unicode;
};

class Utf8 : public HStringConverter {
public:
	Utf8(const char *utf8) :_utf8(utf8) {}
	wchar_t *toUnicode() {
		return (wchar_t *)convertString("UTF-8", "UTF-16LE", _utf8);
	}
	char *toGBK() {
		return convertString("UTF-8", "GBK", _utf8);
	}
private:
	const char *_utf8;
};

#endif
