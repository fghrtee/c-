#include<iostream>
using namespace std;
char Grade(int marks)
    {
        char grade;
        if(marks <= 100 && marks >= 90)
        {
            grade = 'A';
        }
         if(marks <= 91 && marks >= 80)
        {
            grade = 'A';
        }
         if(marks <= 81 && marks >= 70)
        {
            grade = 'B';
        }
        if(marks <= 71 && marks >= 60)
        {
            grade = 'C';
        }
        if(marks <= 61 && marks >= 50)
        {
            grade = 'D';
        }
        if(marks < 50)
        {
            grade = 'F';
        }
     return grade;   
    }
int main()
{
    
    float english,urdu,maths,physics;
    cout << "Enter marks in English: ";
    cin >> english;
    cout << "Enter marks in Urdu: ";
    cin >> urdu;
    cout << "Enter marks in Maths: ";
    cin >> maths;
    cout << "Enter marks in Physics: ";
    cin >> physics;
    float total = english + urdu + maths + physics;
    float avg = total/4;
    float per = (total/400)*100;

    cout << "\tREPORT CARD\n\nSUBJECTS\tMARKS\tGRADE\tAVERAGE\tTOTAL\tPERCENTAGE"; 
    cout << "\nENGLISH" <<"\t\t"<< english<<"\t"<< Grade(english);
    cout << "\nURDU" <<"\t\t"<< urdu<<"\t"<< Grade(urdu);
    cout << "\nMATHS" <<"\t\t"<< maths<<"\t"<< Grade(maths);
    cout << "\nPHYSICS" <<"\t\t"<< physics<<"\t"<< Grade(physics)<<"\t"<<avg<<"\t"<<total<<"\t"<<per;
    return 0;

}