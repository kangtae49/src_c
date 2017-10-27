// WinStyle.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>


void chage_win(LPCTSTR s1, LPCTSTR s2)
{
	HWND hWnd = FindWindow(NULL, s1);
	DWORD dwStyle = (DWORD)GetWindowLong(hWnd, GWL_STYLE);
	dwStyle &= ~WS_DISABLED;
	SetWindowLong(hWnd, GWL_STYLE, dwStyle);

	HWND hWnd2 = FindWindow(NULL, s2);
	ShowWindow(hWnd2, SW_HIDE);

}


int wmain(int argc, WCHAR * argv[])
{
	
	if (argc != 3)
		return 0;
	LPCTSTR s1 = argv[1];
	LPCTSTR s2 = argv[2];

	chage_win(s1, s2);

    return 0;
}

