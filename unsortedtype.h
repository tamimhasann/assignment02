
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
const int TAMIM_HASAN = 5;
template <class T>
class UnsortedType{
    private:
        int length;
        int currentposition;
        T info[TAMIM_HASAN];
    public:
       UnsortedType();
       void MakeEmpty();
       void ResetList();
       int LengthIs();
       bool IsFull();
       bool InsertItem(T item);
       bool DeleteItem(T item);
       bool RetrieveItem(T &item);
       bool GetNextItem(T &item);

};
#include "unsortedtype.tpp"
#include "studentinfo.h"
#endif // UNSORTEDTYPE_H_INCLUDED
