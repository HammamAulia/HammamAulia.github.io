#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct mobil {
    int IDfaktur;

};

typedef int infotype;
typedef struct ElmList *adr;

struct ElmList {
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301213209(List &L);
adr newElement_1301213209(infotype x);
void insertFirst_1301213209(List &L, adr p);
void ShowAllData_1301213209(List L);

adr IDMin_1301213209(List L);
int selectMenu_1301213209();

#endif // DLL_H_INCLUDED
