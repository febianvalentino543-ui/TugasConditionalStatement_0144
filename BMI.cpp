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

// Fungsi untuk menentukan status BMI
string statusBMI(float BMI) {
    if (BMI < 18.5)
        return "Berat Badan Kurang";
    else if (BMI < 25)
        return "Berat Badan Normal";
    else if (BMI < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main() {
    float berat, tinggi, BMI;
    string status;

    cout << endl;
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    // Memanggil prosedur input
    MasukkanData(berat, tinggi);

}