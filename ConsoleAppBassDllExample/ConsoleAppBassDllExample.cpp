#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include <time.h>
#include "bass.h"
using namespace std;

#pragma comment(lib, "bass.lib")
#include "Menu.h"
#include "CleanCards.h"
#include "Draw.h"
#include "Check.h"

void cleanCards(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size); // CleanCards.h
void showCardsFace(int userAnsX, int userAnsY, int size, int* cardsNumbers); // Draw.h
void findIfromCoords(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size); // Check.h
void deleteCards(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* pi1, int* pi2, int size); // CleanCards.h
void userAnserCheck(int userAns1X, int userAns1Y, int userAns2X, int userAns2Y, int* cardsNumbers, int size, int* pFlaf, int* pScore); // Check.h
void mouseMove(int* cardsNumbers, int size); // Draw.h
void generateCarts(int cart_num, int* cardsNumbers); // Draw.h
void mouseMoveMenu(int* sizeP); // Menu.h
void menu(int* sizeP); // Menu.h

void shuffle(int* arr, int N)
{

	// реализация алгоритма перестановки
	for (int i = N - 1; i >= 1; i--)
	{
		int j = rand() % (i + 1);

		int tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
	}
}

int bass(int* flagBass) {
	if (*flagBass == 0) {
		string path = "C://1//023. Piece of Cake.mp3";

		if (HIWORD(BASS_GetVersion()) != BASSVERSION) {
			cout << "Ошибка версии BASS.";
			system("pause");
			return 1;
		}

		if (!BASS_Init(-1, 22050, NULL, 0, NULL)) {
			cout << "Не удалось инициализировать BASS.";
			system("pause");
			return 1;
		}

		HSAMPLE Sample;
		HCHANNEL Channel;
		Sample = BASS_SampleLoad(FALSE, path.c_str(), 0, 0, 2, BASS_SAMPLE_LOOP);


		Channel = BASS_SampleGetChannel(Sample, TRUE);

		BASS_ChannelPlay(Channel, TRUE);
		*flagBass = 1;
	}

}

int flagBass = 0;

int main()
{

	bass(&flagBass);
	

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(h, &info);
	system("title Memory");
	MoveWindow(GetConsoleWindow(), 0, 0, 1800, 900, true);
	srand(time(0));
	rand();

	int size = 18;
	int* sizeP = &size;

	menu(sizeP);

	int* cardsNumbers = new int[size];
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			cardsNumbers[i] = i;
		}
		else {
			cardsNumbers[i] = i - 1;
		}
		//cout << cardsNumbers[i] << ", ";
	}
	//cout << "\n";

	shuffle(cardsNumbers, size);

	for (int i = 0; i < size; i++) {
		//cout << cardsNumbers[i] << ", ";
	}

	generateCarts(size, cardsNumbers);
	mouseMove(cardsNumbers, size);
}