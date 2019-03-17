#include <windows.h>
LRESULT CALLBACK winproc(HWND,UINT,WPARAM,LPARAM);

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevinstance,
				   PSTR szCmdLine,int iCmdShow)
{
	char szeAppName[]="hi";
	HWND hwnd;
	MSG msg;
	WNDCLASS wndclass;
	wndclass.style         = CS_HREDRAW | CS_VREDRAW ;
    wndclass.lpfnWndProc   = winproc;
    wndclass.cbClsExtra    = 0 ;
    wndclass.cbWndExtra    = 0 ;
    wndclass.hInstance     = hInstance ;
    wndclass.hIcon         = LoadIcon (NULL, IDI_APPLICATION) ;
    wndclass.hCursor       = LoadCursor (NULL, IDC_ARROW) ;
    wndclass.hbrBackground = (HBRUSH) GetStockObject (WHITE_BRUSH) ;
    wndclass.lpszMenuName  = NULL ;
    wndclass.lpszClassName = szeAppName ;


	if(!RegisterClass(&wndclass))
	{
		MessageBox(NULL,"failed!","F",0);
		return 0;
	}
	hwnd=CreateWindow(szeAppName,                  // window class name
                          TEXT ("Is this a title"), // window caption
                          WS_OVERLAPPEDWINDOW,        // window style
						  500,//CW_USEDEFAULT,              // initial x position
                          200,//CW_USEDEFAULT,              // initial y position
                          500,//CW_USEDEFAULT,              // initial x size
                          300,//CW_USEDEFAULT,              // initial y size
                          NULL,                       // parent window handle
                          NULL,                       // window menu handle
                          hInstance,                  // program instance handle
                          NULL) ;                     // creation parameters

	ShowWindow(hwnd,iCmdShow);

	UpdateWindow(hwnd);
	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

LRESULT CALLBACK winproc(HWND hwnd,UINT message,WPARAM wParam,LPARAM lParam)
{
	if(message==WM_DESTROY)
	{
		PostQuitMessage(0);
		return 0;
	}
	else if(message==WM_PAINT)
	{
		HDC				hdc ;
		PAINTSTRUCT		ps ;
		RECT			rect ;
		hdc = BeginPaint (hwnd, &ps) ;
		GetClientRect (hwnd, &rect) ;
		DrawText ( 
			hdc, TEXT ("HelloÄãºÃ, Windows 98!fdjkfdjkfdjkfdjkfdjkfdjkfdjkfdjkfdjk"),
			-1, &rect,DT_SINGLELINE | DT_CENTER | DT_VCENTER) ;
		EndPaint (hwnd, &ps) ;
		return 0 ;
	}
	return DefWindowProc (hwnd, message, wParam, lParam) ;
}