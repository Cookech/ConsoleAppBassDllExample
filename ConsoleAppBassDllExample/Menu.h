#pragma once
void mouseMoveMenu(int* sizeP)
{
    int userAns1X = 0;
    int userAns1Y = 0;
    int userAns2X = 0;
    int userAns2Y = 0;

    int flag = 0;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // ���������� ����
    COORD c; // ����������, ���������� �� ���������� � �������

    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE); // ���������� ���� ��� ������ � ������
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // ��������� ������ ������������� �����

    const int events_count = 256;
    INPUT_RECORD all_events[events_count]; // ������ �������, ������������ � �������
    DWORD read_event; // ����������, � ������� ��������� ���������� ������������ �������

    while (flag == 0)
    {
        ReadConsoleInput(hin, all_events, events_count, &read_event); // �������� ��� �������, ������������ � �������
        for (int i = 0; i < read_event; i++)
        { // �������� �� ���� ��������
            c.X = all_events[i].Event.MouseEvent.dwMousePosition.X; // ��������� ���������� �����
            c.Y = all_events[i].Event.MouseEvent.dwMousePosition.Y;


            if (c.X >= 1 && c.Y >= 1 && c.X <= 25 && c.Y <= 10 &&
                all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // ���� ������ ����� ������ �����
                *sizeP = 6;
                flag++;
            }
            if (c.X >= 26 && c.Y >= 1 && c.X <= 50 && c.Y <= 10 &&
                all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // ���� ������ ����� ������ �����
                *sizeP = 12;
                flag++;
            }
            if (c.X >= 51 && c.Y >= 1 && c.X <= 75 && c.Y <= 10 &&
                all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // ���� ������ ����� ������ �����
                *sizeP = 18;
                flag++;
            }

            COORD info{ 0, 0 };
            SetConsoleCursorPosition(h, info);
            cout << "Current cursor position:         ";
            SetConsoleCursorPosition(h, info);
            cout << "Current cursor position: " << c.X << " " << c.Y;
        }
    }
}

void menu(int* sizeP) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    // SetConsoleTextAttribute(h, (WORD)((15 << 4) | 15));
    COORD position;
    position.X = 1;
    position.Y = 1;
    SetConsoleCursorPosition(h, position);

    int height = 10;
    int wigth = 25;

    for (int i = 0; i < 4; i++) {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < wigth; x++) {
                if (x == 0 && y == 0) {
                    cout << char(218);
                }
                else if (x == 0 && y == height - 1) {
                    cout << char(192);
                }
                else if (x == wigth - 1 && y == 0) {
                    cout << char(191);
                }
                else if (x == wigth - 1 && y == height - 1) {
                    cout << char(217);
                }
                else if (x == 0 || x == wigth - 1) {
                    cout << char(179);
                }
                else if (y == 0 || y == height - 1) {
                    cout << char(196);
                }
                else {
                    cout << " ";
                }
            }
            position.Y++;
            //cout << "\n";
            SetConsoleCursorPosition(h, position);
        }
        position.Y = 1;
        position.X = 1 + wigth * i;
        SetConsoleCursorPosition(h, position);
    }
    position.Y = height / 2 + 1;
    position.X = wigth / 6;
    SetConsoleCursorPosition(h, position);
    cout << "6 cards, 3 couples";

    position.X = wigth / 6 + wigth;
    SetConsoleCursorPosition(h, position);
    cout << "12 cards, 6 couples";

    position.X = wigth / 6 + wigth * 2;
    SetConsoleCursorPosition(h, position);
    cout << "18 cards, 9 couples";

    mouseMoveMenu(sizeP);
    system("cls");
    //Sleep(INFINITE);
}