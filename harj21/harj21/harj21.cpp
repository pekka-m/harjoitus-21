/*********************************************************************
Teht‰v‰: HARJOITUS 11
Tekij‰: Pekka Melgin
PVM: 19.11.2013
Kuvaus:
Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:

int KysyValinta(void);

-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)

double Summa(float luku1, int luku2);

-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
*********************************************************************/
#include <iostream> 
using namespace std; 

int KysyValinta();
double Summa(float luku1, int luku2);

int main() {
	int valinta;
	double summa;
	float luku1;
	int luku2;
	float tulos;

	cout << "Anna luku 1: ";
	cin >> luku1;

	cout << "Anna luku 2: ";
	cin >> luku2;

	valinta = KysyValinta();

	if (valinta == 1) {
		summa = Summa(luku1, luku2);
		cout << luku1
			<< " + "
			<< luku2
			<< " = "
			<< summa;

	}
	else if (valinta == 2) {
		tulos = luku1 - luku2;
		cout << luku1
			<< " - "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (valinta == 3) {
		tulos = luku1 * luku2;
		cout << luku1
			<< " * "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (valinta == 4) {
		tulos = float(luku1) / float(luku2);
		cout << luku1
			<< " / "
			<< luku2
			<< " = "
			<< tulos;
	}
	else if (valinta == 5) {
		tulos = luku1 - luku2;
		cout << luku1
			<< " - "
			<< luku2
			<< " = "
			<< tulos;
	}
	cout << endl;
}

int KysyValinta() {
	int valinta;
	cout << "VALIKKO"
		<< "\n1. Summa"
		<< "\n2. Erotus"
		<< "\n3. Tulo"
		<< "\n4. OsamaaraÑ"
		<< "\n5. Jakojaannos\n";
	cin >> valinta;
	return valinta;
}

double Summa(float luku1, int luku2) {
	float summa = luku1 + luku2;
	return summa;
}