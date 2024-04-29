//student grade summary [task03]

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class student {
    public:
    string name;
    float grade;
};

int main() {
    vector<student> students;
    string name;
    float grade;
    char choice;
    
    do{
        cout<<"Enter Student Name : ";
        cin>>name;
        cout<<"Enter Grade : ";
        cin>>grade;
        cout<<endl;
        
        students.push_back({name, grade});
        
        cout<<"Do you want to enter another student? (Y/N) : ";
        cin>>choice; 
        cout<<endl;       
    } while (choice == 'y' || choice == 'Y');
    
    float sum = 0.0;
    float highest = students[0].grade;
    string toperName = students[0].name;
    float lowest = students[0]. grade;
    string loserName = students[0].name;
    
    for(auto stu : students){
        sum = sum + stu.grade;
        
        if(highest < stu.grade){
            highest = stu.grade;
            toperName = stu.name;
        }    
        if(lowest > stu.grade){
            lowest = stu.grade;
            loserName = stu.name;
        }
    }
    
    float avg = sum/students.size();
    
    cout<<"Average grade : "<<avg<<endl;
    cout<<"Highest grade : "<<highest<<"  ("<<toperName<<")"<<endl;
    cout<<"Lowest grade : "<<lowest<<"  ("<<loserName<<")"<<endl;

return 0;
}