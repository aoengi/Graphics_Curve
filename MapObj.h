#pragma once
#include <afx.h>
#include "Afxtempl.h"
//��ʹ��CArray���������ͷ�ļ�
class MapObj :public CObject
{
public:
	int type;//����ͼ�ε�����
	CArray<CPoint, CPoint> points;//����ͼ�εĶ���
public:
	MapObj();
	~MapObj();
};

