#pragma once
#include "���.h"
#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point {
	int xpos;
	int ypos;
}Point;

//Point������ xpos, ypos �� ����
void SetPointPos(Point* ppos, int xpos, int ypos);

//Point������ xpos, ypos ���� ���
void showPointPos(Point* ppos);

//�� Point ������ ��
int PointComp(Point* pos1, Point* post2);

#endif