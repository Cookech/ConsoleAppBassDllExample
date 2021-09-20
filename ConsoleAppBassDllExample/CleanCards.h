#pragma once
void cleanCards(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    // SetConsoleTextAttribute(h, (WORD)((15 << 4) | 15));
    COORD position;
    position.X = 1;
    position.Y = 1;
    SetConsoleCursorPosition(h, position);

    int height = 10;
    int wigth = 15;

    if (size == 18) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 46 && userAns1Y >= 1 && userAns1X <= 60 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 46 && userAns2Y >= 1 && userAns2X <= 60 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 61 && userAns1Y >= 1 && userAns1X <= 75 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 61 && userAns2Y >= 1 && userAns2X <= 75 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 76 && userAns1Y >= 1 && userAns1X <= 90 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 76 && userAns2Y >= 1 && userAns2X <= 90 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 76 && userAns1Y >= 11 && userAns1X <= 90 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 76 && userAns2Y >= 11 && userAns2X <= 90 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 46 && userAns1Y >= 11 && userAns1X <= 60 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 46 && userAns2Y >= 11 && userAns2X <= 60 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 61 && userAns1Y >= 11 && userAns1X <= 75 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 61 && userAns2Y >= 11 && userAns2X <= 75 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 76 && userAns1Y >= 21 && userAns1X <= 90 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 76 && userAns2Y >= 21 && userAns2X <= 90 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 1 && userAns1Y >= 21 && userAns1X <= 15 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 21 && userAns2X <= 15 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 21 && userAns1X <= 30 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 21 && userAns2X <= 30 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 21 && userAns1X <= 45 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 21 && userAns2X <= 45 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 46 && userAns1Y >= 21 && userAns1X <= 60 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 46 && userAns2Y >= 21 && userAns2X <= 60 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 61 && userAns1Y >= 21 && userAns1X <= 75 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 61 && userAns2Y >= 21 && userAns2X <= 75 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
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
        }
    }
    if (size == 12) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 46 && userAns1Y >= 1 && userAns1X <= 60 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 46 && userAns2Y >= 1 && userAns2X <= 60 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 46 && userAns1Y >= 11 && userAns1X <= 60 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 46 && userAns2Y >= 11 && userAns2X <= 60 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 46 && userAns1Y >= 21 && userAns1X <= 60 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 46 && userAns2Y >= 21 && userAns2X <= 60 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 1 && userAns1Y >= 21 && userAns1X <= 15 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 21 && userAns2X <= 15 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
                    }cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 21 && userAns1X <= 30 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 21 && userAns2X <= 30 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 21 && userAns1X <= 45 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 21 && userAns2X <= 45 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
    }
    if (size == 6) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
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
        }
    }
}

void deleteCards(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    // SetConsoleTextAttribute(h, (WORD)((15 << 4) | 15));
    COORD position;
    position.X = 1;
    position.Y = 1;
    SetConsoleCursorPosition(h, position);

    int height = 10;
    int wigth = 15;

    if (size == 18) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 46 && userAns1Y >= 1 && userAns1X <= 60 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 46 && userAns2Y >= 1 && userAns2X <= 60 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 61 && userAns1Y >= 1 && userAns1X <= 75 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 61 && userAns2Y >= 1 && userAns2X <= 75 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 76 && userAns1Y >= 1 && userAns1X <= 90 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 76 && userAns2Y >= 1 && userAns2X <= 90 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 76 && userAns1Y >= 11 && userAns1X <= 90 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 76 && userAns2Y >= 11 && userAns2X <= 90 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 46 && userAns1Y >= 11 && userAns1X <= 60 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 46 && userAns2Y >= 11 && userAns2X <= 60 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 61 && userAns1Y >= 11 && userAns1X <= 75 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 61 && userAns2Y >= 11 && userAns2X <= 75 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 76 && userAns1Y >= 21 && userAns1X <= 90 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 76 && userAns2Y >= 21 && userAns2X <= 90 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 76;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 1 && userAns1Y >= 21 && userAns1X <= 15 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 21 && userAns2X <= 15 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 21 && userAns1X <= 30 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 21 && userAns2X <= 30 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 21 && userAns1X <= 45 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 21 && userAns2X <= 45 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 46 && userAns1Y >= 21 && userAns1X <= 60 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 46 && userAns2Y >= 21 && userAns2X <= 60 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 61 && userAns1Y >= 21 && userAns1X <= 75 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 61 && userAns2Y >= 21 && userAns2X <= 75 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 61;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
    }
    if (size == 12) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 46 && userAns1Y >= 1 && userAns1X <= 60 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 46 && userAns2Y >= 1 && userAns2X <= 60 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 46 && userAns1Y >= 11 && userAns1X <= 60 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 46 && userAns2Y >= 11 && userAns2X <= 60 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 46 && userAns1Y >= 21 && userAns1X <= 60 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 46 && userAns2Y >= 21 && userAns2X <= 60 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 46;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 1 && userAns1Y >= 21 && userAns1X <= 15 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 21 && userAns2X <= 15 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 21 && userAns1X <= 30 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 21 && userAns2X <= 30 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 21 && userAns1X <= 45 && userAns1Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 21 && userAns2X <= 45 && userAns2Y <= 30) {
            position.Y = 21;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
    }
    if (size == 6) {
        if (userAns1X >= 1 && userAns1Y >= 1 && userAns1X <= 15 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 1 && userAns2X <= 15 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 1 && userAns1X <= 30 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 1 && userAns2X <= 30 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 1 && userAns1X <= 45 && userAns1Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 1 && userAns2X <= 45 && userAns2Y <= 10) {
            position.Y = 1;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 31 && userAns1Y >= 11 && userAns1X <= 45 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 31 && userAns2Y >= 11 && userAns2X <= 45 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 31;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 1 && userAns1Y >= 11 && userAns1X <= 15 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 1 && userAns2Y >= 11 && userAns2X <= 15 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 1;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns1X >= 16 && userAns1Y >= 11 && userAns1X <= 30 && userAns1Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
        if (userAns2X >= 16 && userAns2Y >= 11 && userAns2X <= 30 && userAns2Y <= 20) {
            position.Y = 11;
            position.X = 16;
            SetConsoleCursorPosition(h, position);
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < wigth; x++) {
                    cout << " ";
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
        }
    }
}
