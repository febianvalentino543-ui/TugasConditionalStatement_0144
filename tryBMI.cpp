#include <iostream>
using namespace std;

float MenghitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

string statusBMI(float BMI) {
    if (BMI < 18.5) {
        return "Berat badan kamu kurang. ";
    } else if (BMI < 25) {
        return "Berat badan kamu normal. ";
    } else if (BMI < 30) {
        return "Berat badan kamu berlebih. ";
    } else {
        return "kamu obesitas.";
    }
}

int main() {
    float berat, tinggi, BMI;
    string status;

    cout << endl;
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "masukkan berat badan (kg) : ";
    cin >> berat;
    cout << "masukkan tinggi badan (meter) : ";
    cin >> tinggi;

    BMI = MenghitungBMI(berat, tinggi);
    status = statusBMI(BMI);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << BMI << endl;
    cout << "Status : " << status << endl;
    cout << endl;

    return 0;
}