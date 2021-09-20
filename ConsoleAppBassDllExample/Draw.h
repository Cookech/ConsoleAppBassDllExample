
void drawCardsFace(int cardsNumber, int posX, int posY) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    HWND hwnd = GetConsoleWindow(); // дескриптор окна, используемый консолью
    HDC hdc = GetDC(hwnd);
    COORD position;

    POINT p;
    MoveToEx(hdc, posX, posY, &p);
    int height = 10;
    int wigth = 15;
    if (cardsNumber == 0) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // тело
        Ellipse(hdc, posX + 30, posY + 70, posX + 85, posY + 100);
        // голова
        Ellipse(hdc, posX + 20, posY + 50, posX + 60, posY + 80);
        // левое ухо
        MoveToEx(hdc, posX + 25, posY + 55, &p);
        LineTo(hdc, posX + 30, posY + 35);
        LineTo(hdc, posX + 40, posY + 55);
        FloodFill(hdc, posX + 30, posY + 50, RGB(255, 255, 255));

        // правое ухо
        MoveToEx(hdc, posX + 41, posY + 55, &p);
        LineTo(hdc, posX + 50, posY + 35);
        LineTo(hdc, posX + 55, posY + 56);
        FloodFill(hdc, posX + 48, posY + 45, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // глаза
        Ellipse(hdc, posX + 25, posY + 60, posX + 30, posY + 65);
        Ellipse(hdc, posX + 40, posY + 60, posX + 45, posY + 65);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // блики
        Ellipse(hdc, posX + 30, posY + 61, posX + 32, posY + 62);
        Ellipse(hdc, posX + 45, posY + 61, posX + 47, posY + 62);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // передние лапы
        MoveToEx(hdc, posX + 50, posY + 90, &p);
        LineTo(hdc, posX + 51, posY + 120);
        MoveToEx(hdc, posX + 38, posY + 90, &p);
        LineTo(hdc, posX + 34, posY + 118);
        // задние лапы
        MoveToEx(hdc, posX + 75, posY + 90, &p);
        LineTo(hdc, posX + 80, posY + 100);
        LineTo(hdc, posX + 75, posY + 120);
        MoveToEx(hdc, posX + 60, posY + 90, &p);
        LineTo(hdc, posX + 65, posY + 98);
        LineTo(hdc, posX + 60, posY + 118);
        // хвост
        MoveToEx(hdc, posX + 70, posY + 96, &p);
        LineTo(hdc, posX + 80, posY + 40);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 2) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // тело
        Ellipse(hdc, posX + 30, posY + 90, posX + 70, posY + 130);
        // голова
        Ellipse(hdc, posX + 50, posY + 50, posX + 90, posY + 80);
        // тело
        MoveToEx(hdc, posX + 75, posY + 80, &p);
        LineTo(hdc, posX + 80, posY + 90);
        LineTo(hdc, posX + 70, posY + 106);
        LineTo(hdc, posX + 50, posY + 106);
        LineTo(hdc, posX + 56, posY + 75);
        FloodFill(hdc, posX + 70, posY + 90, RGB(255, 255, 255));
        // левое ухо
        MoveToEx(hdc, posX + 55, posY + 55, &p);
        LineTo(hdc, posX + 60, posY + 35);
        LineTo(hdc, posX + 70, posY + 55);
        FloodFill(hdc, posX + 60, posY + 50, RGB(255, 255, 255));

        // правое ухо
        MoveToEx(hdc, posX + 71, posY + 55, &p);
        LineTo(hdc, posX + 80, posY + 35);
        LineTo(hdc, posX + 85, posY + 56);
        FloodFill(hdc, posX + 78, posY + 45, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // глаза
        Ellipse(hdc, posX + 55, posY + 60, posX + 60, posY + 65);
        Ellipse(hdc, posX + 70, posY + 60, posX + 75, posY + 65);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // блики
        Ellipse(hdc, posX + 53, posY + 61, posX + 55, posY + 62);
        Ellipse(hdc, posX + 68, posY + 61, posX + 70, posY + 62);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // лапы
        MoveToEx(hdc, posX + 73, posY + 90, &p);
        LineTo(hdc, posX + 74, posY + 124);

        // хвост
        MoveToEx(hdc, posX + 35, posY + 124, &p);
        LineTo(hdc, posX + 10, posY + 124);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 4) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // тело
        Ellipse(hdc, posX + 30, posY + 60, posX + 70, posY + 100);
        // голова
        Ellipse(hdc, posX + 50, posY + 90, posX + 90, posY + 130);
        // левое ухо
        MoveToEx(hdc, posX + 55, posY + 105, &p);
        LineTo(hdc, posX + 60, posY + 85);
        LineTo(hdc, posX + 70, posY + 105);
        FloodFill(hdc, posX + 60, posY + 100, RGB(255, 255, 255));

        // правое ухо
        MoveToEx(hdc, posX + 71, posY + 105, &p);
        LineTo(hdc, posX + 80, posY + 85);
        LineTo(hdc, posX + 85, posY + 106);
        FloodFill(hdc, posX + 78, posY + 95, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // глаза
        Ellipse(hdc, posX + 65, posY + 110, posX + 70, posY + 115);
        Ellipse(hdc, posX + 80, posY + 110, posX + 85, posY + 115);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // блики
        Ellipse(hdc, posX + 69, posY + 111, posX + 71, posY + 112);
        Ellipse(hdc, posX + 84, posY + 111, posX + 86, posY + 112);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // лапы
        MoveToEx(hdc, posX + 37, posY + 90, &p);
        LineTo(hdc, posX + 37, posY + 100);
        LineTo(hdc, posX + 27, posY + 105);
        LineTo(hdc, posX + 32, posY + 120);

        MoveToEx(hdc, posX + 45, posY + 90, &p);
        LineTo(hdc, posX + 50, posY + 120);

        // хвост
        MoveToEx(hdc, posX + 45, posY + 60, &p);
        LineTo(hdc, posX + 40, posY + 20);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 6) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // тело
        Ellipse(hdc, posX + 50, posY + 90, posX + 105, posY + 130);
        // голова
        Ellipse(hdc, posX + 20, posY + 90, posX + 60, posY + 130);
        // левое ухо
        MoveToEx(hdc, posX + 27, posY + 93, &p);
        LineTo(hdc, posX + 10, posY + 100);
        LineTo(hdc, posX + 20, posY + 105);
        FloodFill(hdc, posX + 15, posY + 100, RGB(255, 255, 255));

        // правое ухо
        MoveToEx(hdc, posX + 20, posY + 110, &p);
        LineTo(hdc, posX + 10, posY + 115);
        LineTo(hdc, posX + 25, posY + 124);
        FloodFill(hdc, posX + 15, posY + 115, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // глаза
        Ellipse(hdc, posX + 35, posY + 95, posX + 40, posY + 100);
        Ellipse(hdc, posX + 35, posY + 110, posX + 40, posY + 115);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // блики
        Ellipse(hdc, posX + 37, posY + 94, posX + 38, posY + 96);
        Ellipse(hdc, posX + 37, posY + 109, posX + 38, posY + 111);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // лапы

        MoveToEx(hdc, posX + 65, posY + 90, &p);
        LineTo(hdc, posX + 60, posY + 80);
        LineTo(hdc, posX + 70, posY + 60);

        MoveToEx(hdc, posX + 90, posY + 90, &p);
        LineTo(hdc, posX + 85, posY + 85);
        LineTo(hdc, posX + 90, posY + 80);
        LineTo(hdc, posX + 85, posY + 60);

        // хвост
        MoveToEx(hdc, posX + 90, posY + 120, &p);
        LineTo(hdc, posX + 110, posY + 120);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 8) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // тело
        Ellipse(hdc, posX + 50, posY + 90, posX + 105, posY + 130);
        // голова
        Ellipse(hdc, posX + 20, posY + 90, posX + 60, posY + 130);
        // левое ухо
        MoveToEx(hdc, posX + 23, posY + 97, &p);
        LineTo(hdc, posX + 30, posY + 80);
        LineTo(hdc, posX + 36, posY + 95);
        FloodFill(hdc, posX + 30, posY + 90, RGB(255, 255, 255));

        // правое ухо
        MoveToEx(hdc, posX + 37, posY + 97, &p);
        LineTo(hdc, posX + 48, posY + 80);
        LineTo(hdc, posX + 53, posY + 95);
        FloodFill(hdc, posX + 48, posY + 90, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        // глаза
        Rectangle(hdc, posX + 23, posY + 110, posX + 36, posY + 111);
        Rectangle(hdc, posX + 40, posY + 110, posX + 53, posY + 111);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        // хвост
        MoveToEx(hdc, posX + 100, posY + 95, &p);
        LineTo(hdc, posX + 110, posY + 105);
        LineTo(hdc, posX + 105, posY + 130);
        LineTo(hdc, posX + 60, posY + 130);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 10) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        // клубок пряжи
        Ellipse(hdc, posX + 30, posY + 40, posX + 90, posY + 100);


        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        FloodFill(hdc, posX + 48, posY + 50, RGB(255, 255, 255));

        MoveToEx(hdc, posX + 75, posY + 95, &p);
        LineTo(hdc, posX + 100, posY + 105);
        LineTo(hdc, posX + 100, posY + 115);
        LineTo(hdc, posX + 40, posY + 115);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(194, 253, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        MoveToEx(hdc, posX + 50, posY + 40, &p);
        LineTo(hdc, posX + 60, posY + 50);
        LineTo(hdc, posX + 60, posY + 90);

        MoveToEx(hdc, posX + 70, posY + 40, &p);
        LineTo(hdc, posX + 80, posY + 50);
        LineTo(hdc, posX + 80, posY + 90);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 12) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        // мыш
        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        MoveToEx(hdc, posX + 20, posY + 90, &p);
        LineTo(hdc, posX + 60, posY + 60);
        LineTo(hdc, posX + 90, posY + 90);
        LineTo(hdc, posX + 20, posY + 90);
        FloodFill(hdc, posX + 60, posY + 70, RGB(255, 255, 255));

        Ellipse(hdc, posX + 70, posY + 60, posX + 90, posY + 80);

        MoveToEx(hdc, posX + 20, posY + 90, &p);
        LineTo(hdc, posX + 20, posY + 110);
        LineTo(hdc, posX + 50, posY + 110);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        Ellipse(hdc, posX + 80, posY + 80, posX + 82, posY + 82);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 14) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        // рыбка
        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        MoveToEx(hdc, posX + 20, posY + 90, &p);
        LineTo(hdc, posX + 60, posY + 60);
        LineTo(hdc, posX + 90, posY + 90);
        LineTo(hdc, posX + 60, posY + 120);
        LineTo(hdc, posX + 20, posY + 90);
        FloodFill(hdc, posX + 60, posY + 70, RGB(255, 255, 255));

        MoveToEx(hdc, posX + 20, posY + 90, &p);
        LineTo(hdc, posX + 10, posY + 110);
        LineTo(hdc, posX + 20, posY + 90);
        LineTo(hdc, posX + 10, posY + 70);
        LineTo(hdc, posX + 20, posY + 90);

        DeleteObject(pen);
        DeleteObject(brush);

        pen = CreatePen(PS_SOLID, 8, RGB(0, 0, 0));
        brush = CreateSolidBrush(RGB(0, 0, 0));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        Ellipse(hdc, posX + 80, posY + 80, posX + 82, posY + 82);

        DeleteObject(pen);
        DeleteObject(brush);
    }
    if (cardsNumber == 16) {
        HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
        HBRUSH brush = CreateSolidBrush(RGB(63, 188, 242));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);
        LineTo(hdc, posX + wigth * 7.5, posY);
        LineTo(hdc, posX + wigth * 7.5, posY + height * 14.5);
        LineTo(hdc, posX, posY + height * 14.5);
        LineTo(hdc, posX, posY);
        FloodFill(hdc, posX + 2, posY + 2, RGB(255, 255, 255));

        DeleteObject(pen);
        DeleteObject(brush);

        // когтеточка
        pen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
        brush = CreateSolidBrush(RGB(255, 255, 255));
        SelectObject(hdc, pen);
        SelectObject(hdc, brush);

        Rectangle(hdc, posX + 50, posY + 20, posX + 60, posY + 120);
        Rectangle(hdc, posX + 20, posY + 115, posX + 90, posY + 120);
        Rectangle(hdc, posX + 50, posY + 20, posX + 90, posY + 25);
        Rectangle(hdc, posX + 20, posY + 50, posX + 50, posY + 55);

        DeleteObject(pen);
        DeleteObject(brush);


    }
}

void findIfromCoords(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size); // Check.h
void userAnserCheck(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* cardsNumbers, int size, int* pFlaf, int* pScore); // Check.h

void showCardsFace(int userAnsX, int userAnsY, int size, int* cardsNumbers) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    //position.X = userAnsX;
    //position.Y = userAnsY;
    //SetConsoleCursorPosition(h, position);
    int posXcopy = 0;
    int posYcopy = 0;
    int height = 10;
    int wigth = 15;
    if (size == 18) {
        if (userAnsX >= 1 && userAnsY >= 1 && userAnsX <= 15 && userAnsY <= 10) {
            posXcopy = 12;
            posYcopy = 25;
            //cout << cardsNumbers[0];
            drawCardsFace(cardsNumbers[0], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 1 && userAnsX <= 30 && userAnsY <= 10) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 25;
            //cout << cardsNumbers[1];
            drawCardsFace(cardsNumbers[1], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 1 && userAnsX <= 45 && userAnsY <= 10) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 25;
            //cout << cardsNumbers[2];
            drawCardsFace(cardsNumbers[2], posXcopy, posYcopy);
        }

        if (userAnsX >= 46 && userAnsY >= 1 && userAnsX <= 60 && userAnsY <= 10) {
            posXcopy = 46 + wigth * 7.7 * 2.82;
            posYcopy = 25;
            //cout << cardsNumbers[3];
            drawCardsFace(cardsNumbers[3], posXcopy, posYcopy);
        }

        if (userAnsX >= 61 && userAnsY >= 1 && userAnsX <= 75 && userAnsY <= 10) {
            posXcopy = 61 + wigth * 7.7 * 3.73;
            posYcopy = 25;
            //cout << cardsNumbers[4];
            drawCardsFace(cardsNumbers[4], posXcopy, posYcopy);
        }

        if (userAnsX >= 76 && userAnsY >= 1 && userAnsX <= 90 && userAnsY <= 10) {
            posXcopy = 76 + wigth * 7.7 * 4.64;
            posYcopy = 25;
            //cout << cardsNumbers[5];
            drawCardsFace(cardsNumbers[5], posXcopy, posYcopy);
        }

        if (userAnsX >= 76 && userAnsY >= 11 && userAnsX <= 90 && userAnsY <= 20) {
            posXcopy = 76 + wigth * 7.7 * 4.64;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[6];
            drawCardsFace(cardsNumbers[6], posXcopy, posYcopy);
        }

        if (userAnsX >= 1 && userAnsY >= 11 && userAnsX <= 15 && userAnsY <= 20) {
            posXcopy = 12;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[7];
            drawCardsFace(cardsNumbers[7], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 11 && userAnsX <= 30 && userAnsY <= 20) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[8];
            drawCardsFace(cardsNumbers[8], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 11 && userAnsX <= 45 && userAnsY <= 20) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[9];
            drawCardsFace(cardsNumbers[9], posXcopy, posYcopy);
        }

        if (userAnsX >= 46 && userAnsY >= 11 && userAnsX <= 60 && userAnsY <= 20) {
            posXcopy = 46 + wigth * 7.7 * 2.82;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[10];
            drawCardsFace(cardsNumbers[10], posXcopy, posYcopy);
        }
        if (userAnsX >= 61 && userAnsY >= 11 && userAnsX <= 75 && userAnsY <= 20) {
            posXcopy = 61 + wigth * 7.7 * 3.73;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[11];
            drawCardsFace(cardsNumbers[11], posXcopy, posYcopy);
        }

        if (userAnsX >= 76 && userAnsY >= 21 && userAnsX <= 90 && userAnsY <= 30) {
            posXcopy = 76 + wigth * 7.7 * 4.64;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[12];
            drawCardsFace(cardsNumbers[12], posXcopy, posYcopy);
        }

        if (userAnsX >= 1 && userAnsY >= 21 && userAnsX <= 15 && userAnsY <= 30) {
            posXcopy = 12;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[13];
            drawCardsFace(cardsNumbers[13], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 21 && userAnsX <= 30 && userAnsY <= 30) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[14];
            drawCardsFace(cardsNumbers[14], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 21 && userAnsX <= 45 && userAnsY <= 30) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[15];
            drawCardsFace(cardsNumbers[15], posXcopy, posYcopy);
        }

        if (userAnsX >= 46 && userAnsY >= 21 && userAnsX <= 60 && userAnsY <= 30) {
            posXcopy = 46 + wigth * 7.7 * 2.82;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[16];
            drawCardsFace(cardsNumbers[16], posXcopy, posYcopy);
        }

        if (userAnsX >= 61 && userAnsY >= 21 && userAnsX <= 75 && userAnsY <= 30) {
            posXcopy = 61 + wigth * 7.7 * 3.73;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[17];
            drawCardsFace(cardsNumbers[17], posXcopy, posYcopy);
        }
    }
    if (size == 12) {
        if (userAnsX >= 1 && userAnsY >= 1 && userAnsX <= 15 && userAnsY <= 10) {
            posXcopy = 12;
            posYcopy = 25;
            //cout << cardsNumbers[0];
            drawCardsFace(cardsNumbers[0], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 1 && userAnsX <= 30 && userAnsY <= 10) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 25;
            //cout << cardsNumbers[1];
            drawCardsFace(cardsNumbers[1], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 1 && userAnsX <= 45 && userAnsY <= 10) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 25;
            //cout << cardsNumbers[2];
            drawCardsFace(cardsNumbers[2], posXcopy, posYcopy);
        }

        if (userAnsX >= 46 && userAnsY >= 1 && userAnsX <= 60 && userAnsY <= 10) {
            posXcopy = 46 + wigth * 7.7 * 2.82;
            posYcopy = 25;
            //cout << cardsNumbers[3];
            drawCardsFace(cardsNumbers[3], posXcopy, posYcopy);
        }

        if (userAnsX >= 46 && userAnsY >= 11 && userAnsX <= 60 && userAnsY <= 20) {
            posXcopy = 46 + wigth * 7.7 * 2.82;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[4];
            drawCardsFace(cardsNumbers[4], posXcopy, posYcopy);
        }

        if (userAnsX >= 1 && userAnsY >= 11 && userAnsX <= 15 && userAnsY <= 20) {
            posXcopy = 12;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[5];
            drawCardsFace(cardsNumbers[5], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 11 && userAnsX <= 30 && userAnsY <= 20) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[6];
            drawCardsFace(cardsNumbers[6], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 11 && userAnsX <= 45 && userAnsY <= 20) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[7];
            drawCardsFace(cardsNumbers[7], posXcopy, posYcopy);
        }

        if (userAnsX >= 46 && userAnsY >= 21 && userAnsX <= 60 && userAnsY <= 30) {
            posXcopy = 46 + wigth * 7.7 * 2.82;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[8];
            drawCardsFace(cardsNumbers[8], posXcopy, posYcopy);
        }

        if (userAnsX >= 1 && userAnsY >= 21 && userAnsX <= 15 && userAnsY <= 30) {
            posXcopy = 12;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[9];
            drawCardsFace(cardsNumbers[9], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 21 && userAnsX <= 30 && userAnsY <= 30) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[10];
            drawCardsFace(cardsNumbers[10], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 21 && userAnsX <= 45 && userAnsY <= 30) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 21 + height * 17.2 * 1.87;
            //cout << cardsNumbers[11];
            drawCardsFace(cardsNumbers[11], posXcopy, posYcopy);
        }
    }
    if (size == 6) {
        if (userAnsX >= 1 && userAnsY >= 1 && userAnsX <= 15 && userAnsY <= 10) {
            posXcopy = 12;
            posYcopy = 25;
            //cout << cardsNumbers[0];
            drawCardsFace(cardsNumbers[0], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 1 && userAnsX <= 30 && userAnsY <= 10) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 25;
            //cout << cardsNumbers[1];
            drawCardsFace(cardsNumbers[1], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 1 && userAnsX <= 45 && userAnsY <= 10) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 25;
            //cout << cardsNumbers[2];
            drawCardsFace(cardsNumbers[2], posXcopy, posYcopy);
        }

        if (userAnsX >= 31 && userAnsY >= 11 && userAnsX <= 45 && userAnsY <= 20) {
            posXcopy = 31 + wigth * 7.7 * 1.91;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[3];
            drawCardsFace(cardsNumbers[3], posXcopy, posYcopy);
        }

        if (userAnsX >= 1 && userAnsY >= 11 && userAnsX <= 15 && userAnsY <= 20) {
            posXcopy = 12;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[4];
            drawCardsFace(cardsNumbers[4], posXcopy, posYcopy);
        }

        if (userAnsX >= 16 && userAnsY >= 11 && userAnsX <= 30 && userAnsY <= 20) {
            posXcopy = 16 + wigth * 7.7;
            posYcopy = 11 + height * 17.2;
            //cout << cardsNumbers[5];
            drawCardsFace(cardsNumbers[5], posXcopy, posYcopy);
        }

    }
}

void mouseMove(int* cardsNumbers, int size)
{
    int score = 0;
    int userAns1X = 0;
    int userAns1Y = 0;
    int userAns2X = 0;
    int userAns2Y = 0;

    int flag = 0;
    int* pFlaf = &flag;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // дескриптор окна
    COORD c; // переменная, отвечающая за координаты в консоли
    COORD position;

    position.Y = 0;
    position.X = 100;
    SetConsoleCursorPosition(h, position);
    cout << "Your score: " << score << "\n";
    int* pScore = &score;

    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE); // дескриптор окна для работы с мышкой
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки

    const int events_count = 256;
    INPUT_RECORD all_events[events_count]; // массив событий, произошедших в консоли
    DWORD read_event; // переменная, в которую запишется количество произошедших событий

    while (true)
    {
        ReadConsoleInput(hin, all_events, events_count, &read_event); // получить все события, произошедшие в консоли
        for (int i = 0; i < read_event; i++)
        { // пройтись по всем событиям
            c.X = all_events[i].Event.MouseEvent.dwMousePosition.X; // запомнить координаты мышки
            c.Y = all_events[i].Event.MouseEvent.dwMousePosition.Y;


            if (
                all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Sleep(54);
                SetConsoleCursorPosition(h, c); // установка координат в то место, где курсор

                if (flag == 0) {
                    userAns1X = c.X;
                    userAns1Y = c.Y;
                    flag = 1;
                    showCardsFace(userAns1X, userAns1Y, size, cardsNumbers);
                }
                else if (flag == 1) {
                    userAns2X = c.X;
                    userAns2Y = c.Y;
                    flag = 2;
                    showCardsFace(userAns2X, userAns2Y, size, cardsNumbers);
                    userAnserCheck(userAns1X, userAns1Y, userAns2X, userAns2Y, cardsNumbers, size, pFlaf, pScore);
                    flag = 0;
                }
            }
            COORD info{ 0, 0 };
            SetConsoleCursorPosition(h, info);
            cout << "Current cursor position:         ";
            SetConsoleCursorPosition(h, info);
            cout << "Current cursor position: " << c.X << " " << c.Y;
        }
    }
}

void generateCarts(int cart_num, int* cardsNumbers)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    // SetConsoleTextAttribute(h, (WORD)((15 << 4) | 15));
    COORD position;
    int height = 10;
    int wigth = 15;
    int string_cart = 1;
    int stolb_cart = 1;
    position.X = 1;
    position.Y = 1;
    SetConsoleCursorPosition(h, position);
    if (cart_num == 18) {

        for (int i = 0; i < cart_num; i++) {
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
                    /*else if (x == wigth / 2 && y == height / 2) {
                        cout << cardsNumbers[i];
                    } */
                    else {
                        cout << " ";
                    }
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
            if (string_cart > 6) {
                stolb_cart++;
                string_cart = 1;
            }
            if (string_cart < 6 && stolb_cart == 1) {
                position.Y = 1;
                position.X = 1 + wigth * string_cart;
                SetConsoleCursorPosition(h, position);
                string_cart++;
            }
            else if (string_cart < 6 && stolb_cart > 1) {
                if (string_cart == 1) {
                    position.Y = 1 + height * (stolb_cart - 1);
                    position.X = 1;
                    SetConsoleCursorPosition(h, position);
                    string_cart++;
                }
                else if (string_cart < 6) {
                    position.Y = 1 + height * (stolb_cart - 1);
                    position.X = 1 + wigth * (string_cart - 1);
                    SetConsoleCursorPosition(h, position);
                    string_cart++;
                }

            }
            else if (string_cart == 6) {
                position.Y = 1 + height * stolb_cart;
                position.X = 1 + wigth * (string_cart - 1);
                SetConsoleCursorPosition(h, position);
                string_cart = 1;
                stolb_cart++;
            }
        }
    }

    if (cart_num == 12) {

        for (int i = 0; i < cart_num; i++) {
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
                    /* else if (x == wigth / 2 && y == height / 2) {
                        cout << cardsNumbers[i];
                    } */
                    else {
                        cout << " ";
                    }
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
            if (string_cart > 4) {
                stolb_cart++;
                string_cart = 1;
            }
            if (string_cart < 4 && stolb_cart == 1) {
                position.Y = 1;
                position.X = 1 + wigth * string_cart;
                SetConsoleCursorPosition(h, position);
                string_cart++;
            }
            else if (string_cart < 4 && stolb_cart > 1) {
                if (string_cart == 1) {
                    position.Y = 1 + height * (stolb_cart - 1);
                    position.X = 1;
                    SetConsoleCursorPosition(h, position);
                    string_cart++;
                }
                else if (string_cart < 4) {
                    position.Y = 1 + height * (stolb_cart - 1);
                    position.X = 1 + wigth * (string_cart - 1);
                    SetConsoleCursorPosition(h, position);
                    string_cart++;
                }

            }
            else if (string_cart == 4) {
                position.Y = 1 + height * stolb_cart;
                position.X = 1 + wigth * (string_cart - 1);
                SetConsoleCursorPosition(h, position);
                string_cart = 1;
                stolb_cart++;
            }
        }
    }

    if (cart_num == 6) {
        //system("mode con cols=60 lines=25");

        for (int i = 0; i < cart_num; i++) {
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
                    /* else if (x == wigth / 2 && y == height / 2) {
                        cout << cardsNumbers[i];
                    } */
                    else {
                        cout << " ";
                    }
                }
                position.Y++;
                //cout << "\n";
                SetConsoleCursorPosition(h, position);
            }
            if (string_cart > 3) {
                stolb_cart++;
                string_cart = 1;
            }
            if (string_cart < 3 && stolb_cart == 1) {
                position.Y = 1;
                position.X = 1 + wigth * string_cart;
                SetConsoleCursorPosition(h, position);
                string_cart++;
            }
            else if (string_cart < 3 && stolb_cart > 1) {
                if (string_cart == 1) {
                    position.Y = 1 + height * (stolb_cart - 1);
                    position.X = 1;
                    SetConsoleCursorPosition(h, position);
                    string_cart++;
                }
                else if (string_cart < 3) {
                    position.Y = 1 + height * (stolb_cart - 1);
                    position.X = 1 + wigth * (string_cart - 1);
                    SetConsoleCursorPosition(h, position);
                    string_cart++;
                }

            }
            else if (string_cart == 3) {
                position.Y = 1 + height * stolb_cart;
                position.X = 1 + wigth * (string_cart - 1);
                SetConsoleCursorPosition(h, position);
                string_cart = 1;
                stolb_cart++;
            }
        }
    }

    //Sleep(INFINITE);
}