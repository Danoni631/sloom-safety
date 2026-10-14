/*
  I don't gonna give full source code
  The GDI Payloads, Bytebeats and other things on sloom source of UltraDasher repository
  https://github.com/UltraDasher965/My-New-Malwares/blob/main/sloom.cpp
*/

void EndPayload(HANDLE Payload)
{
    TerminateThread(Payload, 0);
    CloseHandle(Payload);
}

void InitPayloads()
{
    HANDLE Payload1 = CreateThread(0, 0, Window0, 0, 0, 0);
    Sleep(5000);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sound1, 0, 0, 0);
    Sleep(55000);
    HANDLE Payload2 = CreateThread(0, 0, window, 0, 0, 0);
    HANDLE GDIThread1 = CreateThread(0, 0, payload1, 0, 0, 0);
    Sleep(30000);
    HANDLE GDIThread2 = CreateThread(0, 0, icon, 0, 0, 0);
    Sleep(30000);
    HANDLE GDIThread3 = CreateThread(0, 0, payload2, 0, 0, 0);
    Sleep(60000);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sound2, 0, 0, 0);
    HANDLE GDIThread4A = CreateThread(0, 0, payload3, 0, 0, 0);
    HANDLE GDIThread4B = CreateThread(0, 0, payload3_2, 0, 0, 0);
    Sleep(60000);
    HANDLE GDIThread5A = CreateThread(0, 0, payload4, 0, 0, 0);
    HANDLE GDIThread5B = CreateThread(0, 0, payload4_2, 0, 0, 0);
    Sleep(60000);
    EndPayload(Payload1);
    EndPayload(Payload2);
    EndPayload(GDIThread1);
    EndPayload(GDIThread2);
    EndPayload(GDIThread3);
    EndPayload(GDIThread4A);
    EndPayload(GDIThread4B);
    EndPayload(GDIThread5A);
    EndPayload(GDIThread5B);
}

INT WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT)
{
    if (MessageBoxW(0, L"sloom?", L"sloom", MB_ICONWARNING | MB_YESNO) != IDNO) return 1;
    InitPayloads();
    MessageBox(0, L"sloom :D", L"sloom", MB_ICONERROR | MB_OK);
    return 0;
}
