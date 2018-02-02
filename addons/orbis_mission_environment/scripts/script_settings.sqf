// dev settings
#define LOG_MODE 0
#define DEV_MODE 0

// define unit scores
#define PLANE_SCORE 10
#define HELI_SCORE 5
#define TANK_SCORE 5
#define VEHICLE_SCORE 3
#define INF_SCORE 1

// point settings
#define POINT_MULTIPLIER 0.005 // 30 points / 10player / 10min
#define PLANE_POINT 100
#define HELI_POINT 50
#define TANK_POINT 50
#define VEHICLE_POINT 30
#define INF_POINT 5

#define RETURN_RATIO 0

// commander settings
orbis_mission_commanderList = [["basic", 1]];
orbis_misison_basicCommander = [1, 1, 1, 1, 1];
orbis_mission_commanderArray = [orbis_misison_basicCommander];

// other settings
#define LOCAL_MAX 96000 // 20inf * 80min
#define LOCAL_STD 18000 // 20inf * 15min
