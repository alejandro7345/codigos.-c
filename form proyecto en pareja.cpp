#include <windows.h>

const char *name = "MyForm";


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	
	
    switch (uMsg) {
        case WM_CREATE: {
            // Crear un Label
            CreateWindow("STATIC", "precione el boton", WS_VISIBLE | WS_CHILD,
                60, 40, 150, 20, hwnd, NULL, NULL, NULL);

            

            // Crear un Botón
            CreateWindow("BUTTON", "Aceptar", WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
                85, 100, 100, 50, hwnd, (HMENU)1, NULL, NULL);
            break;
        }

        case WM_COMMAND: {
            if (LOWORD(wParam) == 1) {
             

                MessageBox(hwnd,"gracias por precionar el boton", "jhihjk", MB_OKCANCEL | MB_DEFBUTTON2);
            }
            break;
        }

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}





int main() {
    
    HINSTANCE hInstance = GetModuleHandle(NULL);

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = name;

    RegisterClass(&wc);

   
   
 HWND hwnd = CreateWindowEx(0, name,  "Mi Formulario", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 400, 400,  NULL, NULL, hInstance, NULL);
 
 
 

    if (hwnd == NULL) {
        return 0;
    }
   
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);

  MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

