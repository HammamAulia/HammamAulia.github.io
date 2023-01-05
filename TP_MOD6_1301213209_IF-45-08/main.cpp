#include "DLL.h"

using namespace std;

int main()
{
    List L;
    adr p;
    createList_1301213209(L);
    int pilih;
    char cont;

    while (true) {
        pilih = selectMenu_1301213209();
        if (pilih == 1){
            int total, data;
            cout << "Jumlah data yang akan ditambahkan : "; cin >> total;
            for (int i = 0; i < total; i++){
                cout << "Masukan data baru : "; cin >> data;
                p = newElement_1301213209(data);
                insertFirst_1301213209(L, p);
            }
            cout << "Kembali ke menu utama? (Y/N) : "; cin >> cont;
            cout << endl;
            if (cont == 'Y' || cont == 'y'){
                continue;
            }else {
                break;
            }
        } else if (pilih == 2){
            ShowAllData_1301213209(L);
            cout << "Kembali ke menu utama? (Y/N) : "; cin >> cont;
            cout << endl;
            if (cont == 'Y' || cont == 'y'){
                continue;
            }else {
                break;
            }
        } else if (pilih == 3){
            IDMin_1301213209(L);
            cout << "Kembali ke menu utama? (Y/N) : "; cin >> cont;
            cout << endl;
            if (cont == 'Y' || cont == 'y'){
                continue;
            }else {
                break;
            }
        } else if (pilih == 0){
            break;
        } else {
            continue;
        }
    }
}
