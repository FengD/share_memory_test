//the struct of the naviInfo

#ifndef NaviInfo_
#define NaviInfo_
struct NaviInfo{
	int iconType;
	int totalRetainDistance;
	int totalRetainTime;
	int currentStepRetainDistance;
	int currentStepRetainTime;
	char currentRoadName[120];
	char nextRoadName[120];
};
#endif
