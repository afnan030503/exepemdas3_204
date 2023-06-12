#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class lingkaran:public bidangDatar{ 
public:
	virtual void input() {
		int r;
		cout << "masukkan jari-jari = ";
		cin >> r;
		setX(r);
	}
	virtual float Luas(int a) {
		return 3.14 * a * a;
	}
	virtual float keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class bujursangkar :public bidangDatar {
public:
	virtual void input() {
		int sisi;
		cout << "masukkan sisi = ";
		cin >> sisi;
		setX(sisi);
	}
	virtual float Luas(int a) {
		return a * a;
	}
	virtual float Keliling(int a) {
		return 4 * a;
	}

};

int main() {
	bidangDatar* obyek;

	cout << "\n lingkaran dibuat" << endl;
	obyek = new lingkaran;
	obyek->input();
	cout << "Luas lingkaran = " << obyek->Luas(obyek->getX());
	cout << "\n Keliling lingkaran = " << obyek->Keliling(obyek->getX());

	cout << "\n Bujur sangkar dibuat" << endl;
	obyek = new bujursangkar;
	obyek->input();
	cout << "Luas Bujursangkar = " << obyek->Luas(obyek->getX());
	cout << "\n Keliling Bujursangkar = " << obyek->Keliling(obyek->getX());

	delete obyek;
	
	return 0;

}