// CppAdventure.cpp : Defines the entry point for the console application.

#include<string>
#include <iostream>

using namespace std;

void testi_printti(std::string argumentti) {
	std::cout << argumentti;
}

class maailma {
	int ruudun_koko_x = 64;
	int ruudun_koko_y = 18;
	string lattia_layer[64][18];

	void tyhjenna_lattia() {
		for (int y = 0; y <= ruudun_koko_y - 1; y++) {
			for (int x = 0; x <= ruudun_koko_x - 1; x++) {
				lattia_layer[x][y] = "#";
			}
			cout << "\n";
		}
	}
};

void printtaa_qui() {
	int ruudun_koko_x = 64;
	int ruudun_koko_y = 18;

	string maailma_lattia[64][18];

	//Lattia
	for (int y = 0; y <= ruudun_koko_y - 1; y++) {
		for (int x = 0; x <= ruudun_koko_x - 1; x++) {
			maailma_lattia[x][y] = "#";
		}
		cout << "\n";
	}
	//Huone
	for (int y = 2; y <= 11; y++) {
		for (int x = 2; x <= 15; x++) {
			maailma_lattia[x][y] = ".";
		}
		cout << "\n";
	}
	//Huone2
	for (int y = 2; y <= 16; y++) {
		for (int x = 19; x <= 36; x++) {
			maailma_lattia[x][y] = ".";
		}
		cout << "\n";
	}
	//Piirto
	for (int y = 0; y <= ruudun_koko_y - 1; y++) {
		for (int x = 0; x <= ruudun_koko_x - 1; x++) {
			cout << maailma_lattia[x][y];
		}
		cout << "\n";
	}
}

int main()
{
	cout << "\nDerp\n\n";

	testi_printti("yolo\n\n");

	printtaa_qui();

	//return 0;
}