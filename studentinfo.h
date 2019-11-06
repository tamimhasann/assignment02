#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include<string>

class StudentInfo{

    private:
        int sID;
        std::string sNAME;
        double sCGPA;
    public:
        StudentInfo();
        StudentInfo(int sID,std::string sNAME,double sCGPA);
        void Display();
        bool operator ==(StudentInfo a);
        bool operator !=(StudentInfo a);






};

#endif // STUDENTINFO_H_INCLUDED
