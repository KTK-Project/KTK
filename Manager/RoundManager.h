#ifndef RoundManager_h__
#define RoundManager_h__

#include <vector>
#include <functional>
#include "KTK_Enum.h"

class RoundManager {

private:
	Stage m_currentStage;
	bool m_stageFinish;
	int m_roundsCount;
	bool m_roundFinish;
	std::vector<std::function<void ()>> m_functionsInReadyStage;
	std::vector<std::function<void ()>> m_functionsInJudgeStage;
	std::vector<std::function<void ()>> m_functionsInDrawCardStage;
	std::vector<std::function<void ()>> m_functionsInPlayCardStage;
	std::vector<std::function<void ()>> m_functionsInDiscardStage;
	std::vector<std::function<void ()>> m_functionsInRoundEndStage;

public:
	int getRoundsCount() const;

	void enterNextStage() const;

	void enterNextPlayerRounds() const;

	bool getStageFinish() const;

	void setStageFinish(const bool stageFinish) const;

	bool getRoundFinish() const;

	void setRoundFinish(const bool roundFinish) const;

	std::vector<std::function<void ()>>& getFunctionsInReadyStage() const;

	std::vector<std::function<void ()>>& getFunctionsInJudgeStage() const;

	std::vector<std::function<void ()>>& getFunctionsInDrawCardStage() const;

	std::vector<std::function<void ()>>& getFunctionsInPlayCardStage() const;

	std::vector<std::function<void ()>>& getFunctionsInDiscardStage() const;

	std::vector<std::function<void ()>>& getFunctionsInRoundEndStage() const;

private:
	void readyStage() const;

	void judgeStage() const;

	void drawCardStage() const;

	void playCardStage() const;

	void discardStage() const;

	void roundEndStage() const;
};
#endif // RoundManager_h__
