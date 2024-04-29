#include<iostream>
#include<conio.h>
#include<vector>
#include<stdlib.h>
using namespace std;

class movie{
    public:
    int* seat;
    float cost;
    
    movie(float c){
        cost = c;
        seat = new int[25];
        for(int i=0; i<25; i++){
            seat[i] = 0;
        }
    }
    
    void seatAvaiable(){
        cout<<"Available Seats-"<<endl;
        cout<<"[# -> Already Booked]"<<endl;
        for(int i=0; i<25; i++){
            if(seat[i] == 1){
                cout<<"#"<<" ";
                if((i+1) % 5 == 0){
                    cout<<endl;
                }
            } else {
                cout<<i+1<<" ";
                if((i+1) % 5 == 0){
                    cout<<endl;
                }
            }
        }
        cout<<endl;
    }
    
    int s;
    vector<int> v;
    int num;
    int reaming = 25;
    void seatBook(){
        cout<<"How much do you want book the seat:";
        cin>>num;
        if(num <= reaming){
        v.clear();
        for(int i=0; i<num; i++){
        cout<<"Enter the seats Number: ";
            cin>>s;
            v.push_back(s);
        }
        cout<<endl;
        
        int f1 = 0;
        int f2 = 0;
        for(int i=0; i<num; i++){
            if(v[i]<1 || v[i]>25){
                f1=1;
                break;
            }
        }
        for(int i=0; i<num; i++){
            if(seat[v[i]-1] == 1){
                f2=1;
                break;
            }
        }
        
        if(f1 == 0){
            if(f2 == 1){
                cout<<"This seat is already booked"<<endl<<endl;
            } 
            if(f2 == 0){
                costing();
            }
        } else {
            cout<<"Invalid seat number..!"<<endl<<endl;
            return;
        }
        } else {
            cout<<"Seat are NOT available"<<endl<<endl;
        }
    }
    
    void costing(){
        cout<<"Total Amount "<<cost<<"*"<<num<<": "<<cost*num<<"/-"<<endl;
        cout<<"Do you want booking the seat (Y/N): ";
        char c;
        cin>>c;
        if(c == 'y' || c == 'Y'){
            cout<<"--------------------------------"<<endl;
            cout<<"Your seat successfully Booked..!"<<endl;
            cout<<"--------------------------------"<<endl<<endl;
            for(int i=0; i<num; i++){
                seat[v[i]-1] = 1;
                reaming--;
            }
        } else {
            cout<<endl;
            return;
        }
    }
    
};


int main(){
    int choice;
    movie m1(149);
    movie m2(189);
    movie m3(199);
    movie m4(249);
    do{ 
        clrscr();
        cout<<"---Movie Booking---"<<endl;
        cout<<"Press 1. The karela story [149/-]"<<endl;
        cout<<"Press 2. Money Heist [189/-]"<<endl;
        cout<<"Press 3. One Peace [199/-]"<<endl;
        cout<<"Press 4. xyz [249/-]"<<endl;
        cout<<"Press 0. to exit"<<endl<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        cout<<endl;
        
        switch(choice){
            case 1: m1.seatAvaiable();
                    m1.seatBook();
                    break;
            case 2: m2.seatAvaiable();
                    m2.seatBook();
                    break;        
            case 3: m3.seatAvaiable();
                    m3.seatBook();
                    break;
            case 4: m4.seatAvaiable();
                    m4.seatBook();
                    break;        
            case 0: 
                    exit(0);
                    break;
                    
            default: cout<<"--Invalid choice--"<<endl<<endl;
        }
        cout<<"--Press Enter--";
        cin.ignore();
        cin.get();
    } while (1);

    return 0;
}  