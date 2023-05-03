/*
Binary search is an efficient algorithm that searches for a target value in a sorted array or list by repeatedly dividing the search interval in half. 
This algorithm can significantly reduce the search time compared to a linear search algorithm
*/

/*
Country	Population (millions)
China	1393
India	1366
USA	329
Indonesia	269
Pakistan	233
Brazil	211
Nigeria	206
Bangladesh	169
Russia	146
Mexico	129
*/
/*
new data set
Brazil	213.5 - 
Canada	37.6 - 
China	1400.0 - 
Egypt	100.4 - 
France	66.99 - 
Germany	83.1 - 
India	1366.0 - 
Indonesia	273.5 - 
Italy	60.4 - 
Japan	126.3 -
Mexico	130.2 - 
Nigeria	206.1 - 
Pakistan 220.9 - 
Russia	144.5 - 
South Korea	51.64 - 
Turkey	82.0 -
United Kingdom	66.65 - 
United States	328.2 - 
*/
#include <iostream>

using namespace std;
int main(){
    string countries[18] = {"Brazil", "Canada", "China", "Egypt","France","Germany","India","Indonesia","Italy","Japan","Mexico","Nigeria","Pakistan","Russia","South Korea","Turkey","United Kingdom","United States"};
    double population[18] = {213.5,37.6,1400.0,100.4,66.99,83.1 ,1366.0,273.5,60.4,126.3,130.2,206.1,220.9,144.5,51.64,82.0,66.65,328.2};
    string input = "";
    while(true){
        cout<<"Please insert the Country name"<<endl;
        cin >> input;
        if(!cin.fail()){
            break;
        }
    }
    unsigned char firstLetter = input.at(0);
    int count =-1; 
    if (firstLetter >= 97 &&firstLetter <= 101) {
        for(int x = 0; x< 5 ;x++){
            if(input == countries[x]){
                count = x;
                break;
            }
        }
    }
    if (firstLetter >= 102 &&firstLetter <= 108) {
        for(int x = 5; x< 11 ;x++){
            if(input == countries[x]){
                count = x;
                break;
            }
        }
    }
    if (firstLetter >= 109 &&firstLetter <= 122) {
        for(int x = 11; x< 18 ;x++){
            if(input == countries[x]){
                count = x;
                break;
            }
        }
    }
    if(count ==-1){
        cout<<"Invalid countries was inputted.";
        return 0;
    }
        cout<<"The population of "<<countries[count]<<" Is"<< population[count]<<endl;
    return 0;
}
/*
97     102    109           122 
abcdef ghijkl mnopqr stuvwxyz
*/