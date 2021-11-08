#include <iostream>
#include <windows.h>

/*
 * Made by IlNevioIl on 08 November 2021
 */

int main()
{
    HW_PROFILE_INFO hwProfileInfo;
    GetCurrentHwProfile(&hwProfileInfo);
    std::cout << "HWID is: " << hwProfileInfo.szHwProfileGuid;

    return 0;
}
