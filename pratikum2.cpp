#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float Rata_rata(float a, float b) //
{
    return (a + b) / 2;
}

string Status_lulus(float r)
{
    if (r >= 60)
    {
        if (r > 80)
        {
            return "Lulus Cumlaude";
        }
        else
        {
            return "Lulus Baik";
        }
    }
    else
    {
        return "Gagal";
    }
}

int main()
{
    // Bagian 1 : Random angka
    int x;
    srand(time(0));
    x = rand() % 10;

    if (x == 5)
    {
        x = x + 1;
        cout << "Nilai x sudah dikoreksi menjadi : " << x << endl;
    }

    cout << "Bilangan yang diberikan = " << x << endl;

    cout << endl;

    // Bagian 2 : Input nilai
    float nilBI, nilMT, rerata;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    // Hitung rata-rata
    rerata = Rata_rata(nilBI, nilMT);

    // Output status
    cout << "Status kelulusan = "
         << Status_lulus(rerata)
         << " , dengan nilai rerata = "
         << rerata << endl;

    return 0;

}




