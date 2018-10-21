#pragma once
typedef struct _vertex { //��� y ��ǥ�� ���� -y�� ����
	double x;
	double y;
	double z;
	double ax;
	double ay;
	double az;
	int dx;
	int dy;
}_vertex;
typedef struct _polygon {
	_vertex first;
	_vertex second;
	_vertex third;
}_polygon;
typedef struct _cube {
	_vertex p[8];
}_cube;