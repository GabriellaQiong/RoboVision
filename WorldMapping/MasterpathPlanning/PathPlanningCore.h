#ifndef PATHPLANNINGCORE_H_INCLUDED
#define PATHPLANNINGCORE_H_INCLUDED

#include "MasterpathPlanning.h"


int PathPlanCore_CleanMap(struct Map * themap);
int PathPlanCore_AddObstacleRadious(struct Map * themap,unsigned int x,unsigned int y,unsigned int mem_ptr,unsigned int safety_radious);
int PathPlanCore_FindPath(struct Map * themap,struct Path * theroute,unsigned int x1,unsigned int y1,unsigned int start_direction,unsigned int oursize,unsigned int x2,unsigned int y2,unsigned int timelimit_ms);

#endif // PATHPLANNINGCORE_H_INCLUDED