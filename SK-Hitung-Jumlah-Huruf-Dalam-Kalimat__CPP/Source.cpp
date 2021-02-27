#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

struct kalimat {
	char s[500];
};

struct kalimat obj;
void hitungHuruf();

int main() {
	cout << "Enter any sentence" << endl;
	cin.getline(obj.s, 500);
	hitungHuruf();

	return 0;
}

void hitungHuruf() {
	int i;
	int karakter = 0; // letters

	for (i = 0; i < 500; i++) {
		if ((obj.s[i] >= 'a' && obj.s[i] <= 'z') || (obj.s[i] <= 'A' && obj.s[i] >= 'Z')) {
			karakter++;
		}
	}

	cout << "\n No of letters in the sentence are : " << karakter;
}