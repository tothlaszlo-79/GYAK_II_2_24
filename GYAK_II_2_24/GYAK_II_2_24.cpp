#include <iostream>
using namespace std;
const float pi = 3.1415;

int main()
{
	//2 feladat
	//char betu;
	//cout << " Adjon meg egy betut: ";
	//cin >> betu;
	//int i;
	//i = betu;
	//cout << "\nA betu kiirasa szamkent: " << i << " , karakterkent: " <<
	//	betu << endl;


	//3 feladat
/*	int r;
	cout << "Adja meg a kor sugarat: ";
	cin >> r;
	cout << "Az " << r << " sugaru kor kerulete: " << 2 * r * pi << endl;
	cout << "Az " << r << " sugaru kor terulete " << r * r * pi << endl;
	*/
	
	//4.feladat
	/*int szam;
	cout << "Adjon meg egy egesz szamot: ";
	cin >> szam;
	if (szam != 0) {
		if (szam % 2 == 0)
		{
			cout << "\nA szam paros" << endl;
		}
		else
		{
			cout << "\nA szam paratlan" << endl;
		}
	}
	else {
		cout << "A szam nem lehet nulla" << endl;
	}*/

	//5. feladat

	int szam;
	cout << "Adja meg a szemelyi szama elso szamat: ";
	cin >> szam;
	if (szam == 1 ||szam == 3)
	{
		cout << "On ferfi" << endl;
	}
	else {
		if (szam == 2 || szam == 4)
		{
			cout << "On no!" << endl;
		}
		else
		{
			cout << "Nem megfelelo szamot adott meg!" << endl;
		}
	}


	
	system("pause");
	return 0;

}
