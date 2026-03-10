#include <iostream>
using namespace std;

// Prosedur untuk memasukkan data
void MasukkanData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float MenghitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

