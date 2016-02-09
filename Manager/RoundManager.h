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
	int getRoundsCount();

	void enterNextStage();

	void enterNextPlayerRounds();

	bool getStageFinish();

	void setStageFinish(bool stageFinish);

	bool getRoundFinish();

	void setRoundFinish(bool roundFinish);

	std::vector<std::function<void ()>>& getM_functionsInReadyStage();

	std::vector<std::function<void ()>>& getM_functionsInJudgeStage();

	std::vector<std::function<void ()>>& getM_functionsInDrawCardStage();

	std::vector<std::function<void ()>>& getM_functionsInPlayCardStage();

	std::vector<std::function<void ()>>& getM_functionsInDiscardStage();

	std::vector<std::function<void ()>>& getM_functionsInRoundEndStage();

private:
	void readyStage();

	void judgeStage();

	void drawCardStage();

	void playCardStage();

	void discardStage();

	void roundEndStage();
};
#endif // RoundManager_h__
