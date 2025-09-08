#include<iostream>
#include<string>
using namespace std;
//class defination  for lacture
class lecture
{

    public:
        //variable to store detail
        string lecturename;
        string subjectname;
        string courcename;
        int numberoflecture;

        lecture()
        {
            //constructor to give initial value
            lecturename="";
            subjectname="";
            courcename="";
            numberoflecture=0;
        }
        //function to take input from user
        void adddetail()
        {
            cout<<"\nEnter Lecturer Name:";
            getline(cin,lecturename);   //input with space
            cout<<"Enter Subject name:";
            getline(cin,subjectname);
            cout<<"Enter Cource Name:";
            getline(cin,courcename);
            cout<<"Enter Number of Lecture:";
            cin>>numberoflecture;
            cin.ignore();  //ignore the extra newline after integer input 
        }
        //function to display detail
        void showdetail()
        {
            cout<<"\n"<<"Lecturer:"<<lecturename;
            cout<<"\n"<<"Subject:"<<subjectname;
            cout<<"\n"<<"Cource:"<<courcename;
            cout<<"\n"<<"Lectures:"<<numberoflecture<<"\n";
        }
};
int main()
{
    int n;
    cout<<"How Many Lecture (Max 5):";
    cin>>n;
    cin.ignore();

    //If user enters more than 5, restrict to 5 and exit
    if(n>5)
    {
        n=5;
        cout<<"You can enter only 5 Lecture Detail.\n";
        return 0;
    }
    lecture lectures[5];   //Array of lecture object
    //input loop
    for(int i=0;i<n;i++)
    {
        if(n)
        {
            cout<<"-----Lecture-----"<<(i+1);
        }
        lectures[i].adddetail();
    }
    //out loop
    for(int i=0;i<n;i++)
    {
        lectures[i].showdetail();
    }
    return 0;
}