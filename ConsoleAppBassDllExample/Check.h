#pragma once
int main();

void findIfromCoords(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size) {
    if (size == 18) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            *pi1 = 0;
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            *pi2 = 0;
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            *pi1 = 1;
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            *pi2 = 1;
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            *pi1 = 2;
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            *pi2 = 2;
        }
        if (userAns1X >= 46 && userAns1Y >= 1 && userAns1X <= 60 && userAns1Y <= 10) {
            *pi1 = 3;
        }
        if (userAns2X >= 46 && userAns2Y >= 1 && userAns2X <= 60 && userAns2Y <= 10) {
            *pi2 = 3;
        }
        if (userAns1X >= 61 && userAns1Y >= 1 && userAns1X <= 75 && userAns1Y <= 10) {
            *pi1 = 4;
        }
        if (userAns2X >= 61 && userAns2Y >= 1 && userAns2X <= 75 && userAns2Y <= 10) {
            *pi2 = 4;
        }
        if (userAns1X >= 76 && userAns1Y >= 1 && userAns1X <= 90 && userAns1Y <= 10) {
            *pi1 = 5;
        }
        if (userAns2X >= 76 && userAns2Y >= 1 && userAns2X <= 90 && userAns2Y <= 10) {
            *pi2 = 5;
        }
        if (userAns1X >= 76 && userAns1Y >= 11 && userAns1X <= 90 && userAns1Y <= 20) {
            *pi1 = 6;
        }
        if (userAns2X >= 76 && userAns2Y >= 11 && userAns2X <= 90 && userAns2Y <= 20) {
            *pi2 = 6;
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            *pi1 = 7;
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            *pi2 = 7;
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            *pi1 = 8;
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            *pi2 = 8;
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            *pi1 = 9;
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            *pi2 = 9;
        }
        if (userAns1X >= 46 && userAns1Y >= 11 && userAns1X <= 60 && userAns1Y <= 20) {
            *pi1 = 10;
        }
        if (userAns2X >= 46 && userAns2Y >= 11 && userAns2X <= 60 && userAns2Y <= 20) {
            *pi2 = 10;
        }
        if (userAns1X >= 61 && userAns1Y >= 11 && userAns1X <= 75 && userAns1Y <= 20) {
            *pi1 = 11;
        }
        if (userAns2X >= 61 && userAns2Y >= 11 && userAns2X <= 75 && userAns2Y <= 20) {
            *pi2 = 11;
        }
        if (userAns1X >= 76 && userAns1Y >= 21 && userAns1X <= 90 && userAns1Y <= 30) {
            *pi1 = 12;
        }
        if (userAns2X >= 76 && userAns2Y >= 21 && userAns2X <= 90 && userAns2Y <= 30) {
            *pi2 = 12;
        }
        if (userAns1X >= 1 && userAns1Y >= 21 && userAns1X <= 15 && userAns1Y <= 30) {
            *pi1 = 13;
        }
        if (userAns2X >= 1 && userAns2Y >= 21 && userAns2X <= 15 && userAns2Y <= 30) {
            *pi2 = 13;
        }
        if (userAns1X >= 16 && userAns1Y >= 21 && userAns1X <= 30 && userAns1Y <= 30) {
            *pi1 = 14;
        }
        if (userAns2X >= 16 && userAns2Y >= 21 && userAns2X <= 30 && userAns2Y <= 30) {
            *pi2 = 14;
        }
        if (userAns1X >= 31 && userAns1Y >= 21 && userAns1X <= 45 && userAns1Y <= 30) {
            *pi1 = 15;
        }
        if (userAns2X >= 31 && userAns2Y >= 21 && userAns2X <= 45 && userAns2Y <= 30) {
            *pi2 = 15;
        }
        if (userAns1X >= 46 && userAns1Y >= 21 && userAns1X <= 60 && userAns1Y <= 30) {
            *pi1 = 16;
        }
        if (userAns2X >= 46 && userAns2Y >= 21 && userAns2X <= 60 && userAns2Y <= 30) {
            *pi2 = 16;
        }
        if (userAns1X >= 61 && userAns1Y >= 21 && userAns1X <= 75 && userAns1Y <= 30) {
            *pi1 = 17;
        }
        if (userAns2X >= 61 && userAns2Y >= 21 && userAns2X <= 75 && userAns2Y <= 30) {
            *pi2 = 17;
        }
    }
    if (size == 12) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            *pi1 = 0;
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            *pi2 = 0;
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            *pi1 = 1;
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            *pi2 = 1;
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            *pi1 = 2;
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            *pi2 = 2;
        }
        if (userAns1X >= 46 && userAns1Y >= 1 && userAns1X <= 60 && userAns1Y <= 10) {
            *pi1 = 3;
        }
        if (userAns2X >= 46 && userAns2Y >= 1 && userAns2X <= 60 && userAns2Y <= 10) {
            *pi2 = 3;
        }
        if (userAns1X >= 46 && userAns1Y >= 11 && userAns1X <= 60 && userAns1Y <= 20) {
            *pi1 = 4;
        }
        if (userAns2X >= 46 && userAns2Y >= 11 && userAns2X <= 60 && userAns2Y <= 20) {
            *pi2 = 4;
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            *pi1 = 5;
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            *pi2 = 5;
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            *pi1 = 6;
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            *pi2 = 6;
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            *pi1 = 7;
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            *pi2 = 7;
        }
        if (userAns1X >= 46 && userAns1Y >= 21 && userAns1X <= 60 && userAns1Y <= 30) {
            *pi1 = 8;
        }
        if (userAns2X >= 46 && userAns2Y >= 21 && userAns2X <= 60 && userAns2Y <= 30) {
            *pi2 = 8;
        }
        if (userAns1X >= 1 && userAns1Y >= 21 && userAns1X <= 15 && userAns1Y <= 30) {
            *pi1 = 9;
        }
        if (userAns2X >= 1 && userAns2Y >= 21 && userAns2X <= 15 && userAns2Y <= 30) {
            *pi2 = 9;
        }
        if (userAns1X >= 16 && userAns1Y >= 21 && userAns1X <= 30 && userAns1Y <= 30) {
            *pi1 = 10;
        }
        if (userAns2X >= 16 && userAns2Y >= 21 && userAns2X <= 30 && userAns2Y <= 30) {
            *pi2 = 10;
        }
        if (userAns1X >= 31 && userAns1Y >= 21 && userAns1X <= 45 && userAns1Y <= 30) {
            *pi1 = 11;
        }
        if (userAns2X >= 31 && userAns2Y >= 21 && userAns2X <= 45 && userAns2Y <= 30) {
            *pi2 = 11;
        }
    }
    if (size == 6) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            *pi1 = 0;
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            *pi2 = 0;
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            *pi1 = 1;
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            *pi2 = 1;
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            *pi1 = 2;
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            *pi2 = 2;
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            *pi1 = 3;
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            *pi2 = 3;
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            *pi1 = 4;
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            *pi2 = 4;
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            *pi1 = 5;
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            *pi2 = 5;
        }
    }
}

void mouseMoveFinal()
{
    int userAns1X = 0;
    int userAns1Y = 0;
    int userAns2X = 0;
    int userAns2Y = 0;
    int flag = 0;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // дескриптор окна
    COORD c; // переменная, отвечающая за координаты в консоли
    COORD info{ 100, 0 };
    COORD position;
    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE); // дескриптор окна для работы с мышкой
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки
    const int events_count = 256;
    INPUT_RECORD all_events[events_count]; // массив событий, произошедших в консоли
    DWORD read_event; // переменная, в которую запишется количество произошедших событий
    while (flag == 0)
    {
        ReadConsoleInput(hin, all_events, events_count, &read_event); // получить все события, произошедшие в консоли
        for (int i = 0; i < read_event; i++)
        { // пройтись по всем событиям
            c.X = all_events[i].Event.MouseEvent.dwMousePosition.X; // запомнить координаты мышки
            c.Y = all_events[i].Event.MouseEvent.dwMousePosition.Y;
            if (c.X >= 42 && c.Y >= 15 && c.X <= 67 && c.Y <= 25 &&
                all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                position.Y = 15;
                position.X = 42;
                SetConsoleCursorPosition(h, position);
                int height = 10;
                int wigth = 25;
                for (int y = 0; y < height; y++) {
                    for (int x = 0; x < wigth; x++) {
                        cout << " ";
                    }
                    position.Y++;
                    //cout << "\n";
                    SetConsoleCursorPosition(h, position);
                }
                main();
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
void final() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD info{ 100, 0 };
    COORD position;
    for (int a = 0; a < 100; a++) {
        for (int b = 0; b < 100; b++) {
            cout << " ";
        }
    }
    position.Y = 10;
    position.X = 50;
    SetConsoleCursorPosition(h, position);
    cout << "YOU WIN! ";
    position.Y = 15;
    position.X = 42;
    SetConsoleCursorPosition(h, position);
    int height = 10;
    int wigth = 25;
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
    position.Y = 20;
    position.X = 50;
    SetConsoleCursorPosition(h, position);
    cout << "Restart";
    mouseMoveFinal();
}

void userAnserCheck(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* cardsNumbers, int size, int* pFlaf, int* pScore) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD info{ 100, 0 };
    COORD position;
    SetConsoleCursorPosition(h, info);
    int i1 = 0;
    int* pi1 = &i1;
    int i2 = 0;
    int* pi2 = &i2;

    findIfromCoords(userAns1X, userAns1Y, userAns2X, userAns2Y, pi1, pi2, size);
    if (cardsNumbers[i1] == cardsNumbers[i2] && i1 != i2) {
        position.Y = 1;
        position.X = 100;
        SetConsoleCursorPosition(h, position);
        cout << "Great job! ";
        Sleep(500);
        deleteCards(userAns1X, userAns1Y, userAns2X, userAns2Y, pi1, pi2, size);
        *pScore += 2;
        position.Y = 0;
        position.X = 100;
        SetConsoleCursorPosition(h, position);
        cout << "Your score: " << *pScore << "\n";
        if (*pScore == size) {
            final();
        }
    }
    else if (cardsNumbers[i1] != cardsNumbers[i2]) {
        cout << "\n";
        position.Y = 1;
        position.X = 100;
        SetConsoleCursorPosition(h, position);
        cout << "Try again ";
        Sleep(500);
        cleanCards(userAns1X, userAns1Y, userAns2X, userAns2Y, pi1, pi2, size);
    }
    else if (i1 == i2) {
        *pFlaf = 1;
    }
}