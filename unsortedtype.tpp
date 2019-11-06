
#include <iostream>
#include "unsortedtype.h"
using namespace std;
template <class T >
UnsortedType<T>::UnsortedType()
{
    length=0;
    currentposition=-1;
    cout<<endl;
}
template <class T>
void UnsortedType<T>::MakeEmpty()
{
    length=0;
    cout<<endl;
}
template <class T>
void UnsortedType<T>::ResetList()
{
    currentposition=-1;
    cout<<endl;
}
template <class T>
int UnsortedType<T>::LengthIs()
{
    return length;
    cout<<endl;
}
template <class T>
bool UnsortedType<T>::IsFull()
{
    return (length == TAMIM_HASAN);
    cout<<endl;
}
template <class T>
bool UnsortedType<T>::InsertItem(T item)
{
    if(!IsFull())
    {
        info[length] = item;
        length++;
        return true;

    }
    else
    {
        return false;
    }
}
template <class T>
bool UnsortedType<T>::DeleteItem(T item)
{
    int location =0;
    int flag = 0;
    while(location<length)
    {
        if(item == info[location])
        {
            flag =1;
            break;
        }
        location++;
    }
    if(flag == 1)
    {
        info[location]=info[length-1];
        length--;
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
bool UnsortedType<T>::RetrieveItem(T &item)
{
    int location =0;
    bool found;
    found = false;
    while(location < length && !found)
    {
        if(item == info[location])
        {
            found = true ;
            item =info[location];

        }
        location++;
    }
    return found;
}
template <class T>
bool UnsortedType<T>::GetNextItem(T &item)
{

    if(currentposition < length-1)
    {
        currentposition++;
        item = info[currentposition];
        return true;
    }
    else
    {
        return false;
    }
}
