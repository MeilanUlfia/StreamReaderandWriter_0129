#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuh integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }

    catch (int a) {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integar maka block ini akan dieksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }

    return 0;
}