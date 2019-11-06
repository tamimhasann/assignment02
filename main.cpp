//TAMIM HASAN 1811590642
#include <iostream>
#include "unsortedtype.h"
#include "studentinfo.h"
#include <string>
using namespace std;

int main()
{
    cout << "\nLab 04 Task 02 Assignment 02" << endl;
    StudentInfo tamim1(15234,"Abdullah",2.6);
    StudentInfo tamim2(13732,"Muhammad",3.9);
    StudentInfo tamim3(13569,"Ali",1.2);
    StudentInfo tamim4(15467,"Saad",3.1);
    StudentInfo tamim5(16285,"Mahdi",3.1);
    StudentInfo tamim6(10000,"Not LISTED IN THIS ITEM SERIES",4.0);

    UnsortedType<StudentInfo> ListStudent;
    ListStudent.InsertItem(tamim1);
    ListStudent.InsertItem(tamim2);
    ListStudent.InsertItem(tamim3);
    ListStudent.InsertItem(tamim4);
    ListStudent.InsertItem(tamim5);
    StudentInfo TAMIMHASAN;
    TAMIMHASAN=tamim6;

    while(ListStudent.GetNextItem(TAMIMHASAN))
    {
        TAMIMHASAN.Display();
    }
    if(ListStudent.DeleteItem(tamim4))
    {
        cout<<"\nITEM DELETE ";
    }
    else
    {
        cout<<"\nItem not DELETE";
    }
    TAMIMHASAN=tamim3;
    if(ListStudent.RetrieveItem(TAMIMHASAN))
    {
        cout<<"\nItem found";
        TAMIMHASAN.Display();

    }
    else
    {
        cout<<"\nItem not Found";
    }
    ListStudent.ResetList();

    while(ListStudent.GetNextItem(TAMIMHASAN))
    {
        TAMIMHASAN.Display();
    }
    return 0;
}
