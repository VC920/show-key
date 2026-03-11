#include <raylib.h>
#include <string>
#include <sstream>

int main()
{
    SetConfigFlags(FLAG_WINDOW_TRANSPARENT | FLAG_WINDOW_TOPMOST | FLAG_WINDOW_ALWAYS_RUN);
    InitWindow(600, 100, "key-show");
    SetTargetFPS(60);

    std::string key_buffer;
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLANK);
        
        int key_press = GetKeyPressed();
        if (key_press != 0)
        {
            // 特殊按键名称
            switch(key_press)
            {
                case KEY_SPACE: key_buffer = "SPACE"; break;
                case KEY_ENTER: key_buffer = "ENTER"; break;
                case KEY_BACKSPACE: key_buffer = "BACKSPACE"; break;
                case KEY_TAB: key_buffer = "TAB"; break;
                case KEY_LEFT: key_buffer = "LEFT"; break;
                case KEY_RIGHT: key_buffer = "RIGHT"; break;
                case KEY_UP: key_buffer = "UP"; break;
                case KEY_DOWN: key_buffer = "DOWN"; break;
                case KEY_DELETE: key_buffer = "DELETE"; break;
                case KEY_HOME: key_buffer = "HOME"; break;
                case KEY_END: key_buffer = "END"; break;
                case KEY_PAGE_UP: key_buffer = "PAGE UP"; break;
                case KEY_PAGE_DOWN: key_buffer = "PAGE DOWN"; break;
                case KEY_INSERT: key_buffer = "INSERT"; break;
                case KEY_LEFT_SHIFT: key_buffer = "LEFT SHIFT"; break;
                case KEY_RIGHT_SHIFT: key_buffer = "RIGHT SHIFT"; break;
                case KEY_LEFT_CONTROL: key_buffer = "LEFT CTRL"; break;
                case KEY_RIGHT_CONTROL: key_buffer = "RIGHT CTRL"; break;
                case KEY_LEFT_ALT: key_buffer = "LEFT ALT"; break;
                case KEY_RIGHT_ALT: key_buffer = "RIGHT ALT"; break;
                case KEY_LEFT_SUPER: key_buffer = "LEFT WIN"; break;
                case KEY_RIGHT_SUPER: key_buffer = "RIGHT WIN"; break;
                case KEY_CAPS_LOCK: key_buffer = "CAPS LOCK"; break;
                case KEY_NUM_LOCK: key_buffer = "NUM LOCK"; break;
                case KEY_SCROLL_LOCK: key_buffer = "SCROLL LOCK"; break;
                case KEY_F1: key_buffer = "F1"; break;
                case KEY_F2: key_buffer = "F2"; break;
                case KEY_F3: key_buffer = "F3"; break;
                case KEY_F4: key_buffer = "F4"; break;
                case KEY_F5: key_buffer = "F5"; break;
                case KEY_F6: key_buffer = "F6"; break;
                case KEY_F7: key_buffer = "F7"; break;
                case KEY_F8: key_buffer = "F8"; break;
                case KEY_F9: key_buffer = "F9"; break;
                case KEY_F10: key_buffer = "F10"; break;
                case KEY_F11: key_buffer = "F11"; break;
                case KEY_F12: key_buffer = "F12"; break;
                default: key_buffer = key_press; break;
            }
        }

        DrawText(key_buffer.c_str(), 0, 0, 80, GREEN);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}