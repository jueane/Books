// Hide the window of wow.exe with type  "hide.exe"
// Then Show it with type "hide.exe s"
#include <windows.h>
int main( int argc,char *argv[])
{
    HWND hWnd;
//    hWnd=FindWindow(NULL,"hiii");
    hWnd=FindWindow(NULL,"c2");
    printf("%d",hWnd);
    if(argc>1&&*argv[1]=='s')
    {
                    printf("\nEntered IF Function!"); 
                    ShowWindow(hWnd,SW_SHOW);
                    return 0;
    }
    ShowWindow(hWnd,SW_HIDE);
    return 0; 
}
