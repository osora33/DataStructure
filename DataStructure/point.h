#pragma once
#include "헤더.h"
#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point {
	int xpos;
	int ypos;
}Point;

//Point변수의 xpos, ypos 값 설정
void SetPointPos(Point* ppos, int xpos, int ypos);

//Point변수의 xpos, ypos 정보 출력
void showPointPos(Point* ppos);

//두 Point 변수의 비교
int PointComp(Point* pos1, Point* post2);

#endif