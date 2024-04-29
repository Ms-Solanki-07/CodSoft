//Calculator task-02

#include<iostream>
#include<stdlib.h>
using namespace std;

void addition(){
    float a, b;
    cout<<"Enter the two number. "<<endl;
    cout<<"Fisrt number : ";
    cin>>a;
    cout<<"Second number : ";
    cin>>b;
    cout<<endl;
    
    cout<<"Sum : "<<a+b<<endl;
    cout<<endl;
    return;
}

void subtraction(){
    float a, b;
    cout<<"Enter the two number. "<<endl;
    cout<<"Fisrt number : ";
    cin>>a;
    cout<<"Second number : ";
    cin>>b;
    cout<<endl;
    
    cout<<"Subtraction : "<<a-b<<endl;
    cout<<endl;
    return;
}

void multiplication(){
    float a, b;
    cout<<"Enter the two number. "<<endl;
    cout<<"Fisrt number : ";
    cin>>a;
    cout<<"Second number : ";
    cin>>b;
    cout<<endl;
    
    cout<<"Multiplication : "<<a*b<<endl;
    cout<<endl;
    return;
}

void division(){
    float a, b;
    cout<<"Enter the two number. "<<endl;
    cout<<"Fisrt number : ";
    cin>>a;
    cout<<"Second number : ";
    cin>>b;
    cout<<endl;
    
    cout<<"Division : "<<a/b<<endl;
    cout<<endl;
    return;
}

int main () {

    int key;
    
    do{
        cout<<"------Calculator Menu------"<<endl;
        cout<<"Press 1. to Addition."<<endl;
        cout<<"Press 2. to Subtraction."<<endl;
        cout<<"Press 3. to Multiplication. "<<endl;
        cout<<"Press 4. to Division. "<<endl;
        cout<<"Press 0. to Exit."<<endl<<endl;;
        cout<<"Enter choice : ";
        cin>>key;
        cout<<endl;
        
        switch(key) {
            case 1: addition();
                    break;
                    
            case 2: subtraction();            
                    break;
                    
            case 3: multiplication();
                    break;
                    
            case 4: division();
                    break;
                    
            case 0: exit(0);
                    break;
                    
            default: cout<<"Invalid choice..!"<<endl<<endl;        
        }
        
    } while(1);    

    return 0;
}