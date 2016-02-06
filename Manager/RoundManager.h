#ifndef RoundManager_h__
#define RoundManager_h__


class RoundManager {

private:
	Stage m_currentStage;
	bool m_stageFinish;
	int m_roundsCount;
	bool m_roundFinish;
	vector<std::function<void ()>> m_functionsInReadyStage;
	vector<std::function<void ()>> m_functionsInJudgeStage;
	vector<std::function<void ()>> m_functionsInDrawCardStage;
	vector<std::function<void ()>> m_functionsInPlayCardStage;
	vector<std::function<void ()>> m_functionsInDiscardStage;
	vector<std::function<void ()>> m_functionsInRoundEndStage;

public:
	int getRoundsCount();

	void enterNextStage();

	void enterNextPlayerRounds();

	bool getStageFinish();

	void setStageFinish(bool stageFinish);

	bool getRoundFinish();

	void setRoundFinish(bool roundFinish);

	vector<std::function<void ()>>& getM_functionsInReadyStage();

	vector<std::function<void ()>>& getM_functionsInJudgeStage();

	vector<std::function<void ()>>& getM_functionsInDrawCardStage();

	vector<std::function<void ()>>& getM_functionsInPlayCardStage();

	vector<std::function<void ()>>& getM_functionsInDiscardStage();

	vector<std::function<void ()>>& getM_functionsInRoundEndStage();

private:
	void readyStage();

	void judgeStage();

	void drawCardStage();

	void playCardStage();

	void discardStage();

	void roundEndStage();
};
#endif // RoundManager_h__
