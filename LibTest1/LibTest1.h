
// LibTest1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLibTest1App: 
// �йش����ʵ�֣������ LibTest1.cpp
//

class CLibTest1App : public CWinApp
{
public:
	CLibTest1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CLibTest1App theApp;
