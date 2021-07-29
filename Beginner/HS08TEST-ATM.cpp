#include <iostream>
#include<iomanip>
using namespace std;


int main(){
	int X;
    cin>>X;
    double Y;
    cin>>Y;
    cout << fixed << setprecision(2);
    if((Y<X+0.5)||(X%5!=0)){
        cout << Y;
    }
    else{
        float result = Y-X-0.5;
        cout << result;
    }
}
