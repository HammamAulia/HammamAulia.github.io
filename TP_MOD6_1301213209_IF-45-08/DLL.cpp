#include "DLL.h"

void createList_1301213209(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

adr newElement_1301213209(infotype x){
    adr p = new ElmList;
    info(p) = x;
    next(p) = NULL;
    prev(p) = NULL;
}

void insertFirst_1301213209(List &L, adr p){
   if (first(L) != NULL && last(L) != NULL){
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
   } else {
        first(L) = p;
        last(L) = p;
   }
}

void ShowAllData_1301213209(List L){
    if (first(L) != NULL){
        adr p = first(L);
        while (p != NULL){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}

adr IDMin_1301213209(List L){
    adr q,p;
    q = first(L);
    p = first(L);
    while (q != NULL){
        if (info(q) < info(p)){
            p = q;
        }
        q = next(q);
    }
    cout << info(p) << endl;
}

int selectMenu_1301213209(){
    int x;
    cout << "==========MENU==========" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data terkecil" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukan menu : "; cin >> x;
    return x;
}
