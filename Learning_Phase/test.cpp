#include <iostream>
using namespace std;
int main(){

    cout<<"Pattern A"<<endl;
    for(int x = 0 ; x<6; x++){
        cout<<x+1;
    }
    cout<<endl;
    for(int x = 0; x<4; x++){
        cout<<"1     6";
        cout<<endl;
    }
    cout<<endl;
    for(int x = 0; x<6; x++){
        cout<<x+1;
    }
    cout<<endl;

    cout <<"Pattern B"<<endl;
    int spacer = 8;
    int value = 1;
    for(int y = 1; y<6; y++){
        for(int s = 0; s < spacer;s++){
            cout<<" ";
        }
        spacer -= 2;
        
        for(int x = 1; x <= value; x++){
            cout<<x<<" ";
        }

        value +=2;
        cout<<endl;
    }

    cout<<endl<<"Pattern B"<<endl;
    int v = 1;
    for(int x=0;x<=20;x++){
        if(x == 7||x == 13 ||x == 17 || x == 19){
            cout<<" ";
            for(int y = 1; y<=v; y++){
                cout<<y<<" ";
            }
            v+=2;
            cout<<endl;
        }   
        else if(x == 20){
            for(int y = 1; y <= v; y++){
                cout<<y<<" ";
            }
            v+=2;
            cout<<endl;
        }
        else{
            cout<<" ";
        }
    }
    
    return 0;

}
