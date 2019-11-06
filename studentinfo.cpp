#include<iostream>
#include "studentinfo.h"
using namespace std;
StudentInfo::StudentInfo()
{

}
StudentInfo:: StudentInfo(int sID,std::string sNAME,double sCGPA)
{
    this->sID=sID;
    this->sNAME=sNAME;
    this->sCGPA=sCGPA;
}
void StudentInfo::Display()
{
    cout<<" "<<sID<<",  "<<sNAME<<",  "<<sCGPA<<endl;
}
bool StudentInfo::operator==(StudentInfo a)
{
    return sID ==a.sID;
}
bool StudentInfo::operator!=(StudentInfo a)
{
    return sID!=a.sID;
}
