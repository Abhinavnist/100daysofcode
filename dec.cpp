#include <iostream>
using namespace std;
int dectobin(int n){
    int ans=0, rem =0;
    int mul =1;
    while(n){
        //remainder nikalo
        rem = n % 2;
        //divide kro
        ans = mul * rem + ans;
        n = n/2;
        mul = mul*10;
        
    }
    return ans;
    
}

int bintodec(int n){
    int ans = 0;
    int mul = 1;
    int rem;

    while(n){
        rem = n % 10;
        ans = ans + rem * mul;
        n = n / 10;        // remove last digit
        mul = mul * 2;     // next power of 2
    }

    return ans;
}
int main(){

    int n;
    cout<<"enter the no. which you want to convert into binary????";
    cin>>n;
    cout<< bintodec(n);


}