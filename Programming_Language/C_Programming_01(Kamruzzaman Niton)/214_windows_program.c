/*This programme Not work properly*/
#include<windows.h>
LRESULT WINAPI MainWndProc( HWND, UINT, WPARAM, LPARAM);
HANDLE ghInstance;
int PASCAL WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    WNDCLASS wc;
    MSG msg;
    HWND hWnd;
    if( !hPrevInstance)
    {
        /****initialize WNDCLASS****/
        wc.lpszClassName = "SampleWinApp";
        wc.lpfnWndProc = MainWndProc;
        wc.style = CS_OWNDC | CS_VREDRAW | CS_HREDRAW;
        wc.hInstance = hInstance;
        wc.hIcon = LoadIcon( NULL, IDI_APPLICATION );
        wc.hCursor = LoadCursor( NULL, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)( COLOR_WINDOW+1);
        wc.cbClsExtra = 0;
        wc.cbWndExtra = 0;
        /****now register WNDCLASS****/
        RegisterClass ( &wc );
    }
    ghInstance = hInstance;
    /*create the window*/
    hWnd = CreateWindow( "SampleWinApp","Sample Windows Application",
                        WS_OVERLAPPEDWINDOW|WS_HSCROLL|WS_VSCROLL,
                        0,
                        0,
                        CW_USEDEFAULT,
                        CW_USEDEFAULT,
                        NULL,
                        NULL,
                        hInstance,
                        NULL );
    /*now show the window*/
    ShowWindow( hWnd, nCmdShow );
    /* windows message loop*/
    while( GetMessage( &msg, NULL, 0, 0))
    {
        TranslateMessage( &msg );
        DispatchMessage( &msg );
    }
    return msg.wParam;
}
/*callback function used by windows*/
LRESULT CALLBACK MainWndProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
    PAINTSTRUCT ps;
    HDC hDC;
    switch( msg )
    {
    case WM_PAINT:
        hDC = BeginPaint( hWnd, &ps );
        TextOut(hDC, 10, 10, "Hello, World!",13);
        EndPaint(hWnd, &ps);
        break;
    case WM_KEYDOWN:
        /************************************************/
        /*HERE WE WRUTE OUR CODE TO GET KEYBOARD INPUT*/
        /************************************************/
        break;
    case WM_DESTROY:
        PostQuitMessage( 0 );
        break;
    default:
        return( DefWindowProc(hWnd, msg, wParam, lParam));
    }
    return 0;
}
