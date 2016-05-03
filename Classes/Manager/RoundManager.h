#ifndef RoundManager_h__
#define RoundManager_h__

#include <vector>
#include <functional>
#include "KTK_Enum.h"

class RoundManager {
public:
	RoundManager();

	void readyStage() const;
	void judgeStage() const;
	void drawCardStage() const;
	void playCardStage() const;
	void discardStage() const;
	void roundEndStage() const;

	int getRoundsCount() const;
	bool getStageFinish() const;
	void setStageFinish(bool stageFinish);
	bool getRoundFinish() const;
	void setRoundFinish(bool roundFinish);
	EStage getCurrentStage() const;

	void enterNextStage();
	void enterNextRound();

private:
	int m_roundsCount;
	bool m_stageFinish;
	bool m_roundFinish;
	EStage m_currentStage;
};
#endif // RoundManager_h__
