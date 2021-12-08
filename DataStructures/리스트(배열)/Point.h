#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point {
	int xpos;
	int ypos;
}Point;

void setPointPos(Point* ppos, int xpos, int ypos);

void showPointPos(Point* ppos);

int pointComp(Point* pos1, Point* pos2);

#endif // !__POINT_H__
