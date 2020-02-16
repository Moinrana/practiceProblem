#include<iostream>
#include<string>
using namespace std;

main(){
    string A;
    string B;
    cout<<"Enter 1st string: ";
    cin>>A;
    cout<<"Enter 2nd string: ";
    cin>>B;
    int counter = 0;

    if(A.length() != B.length()){
        cout<<"-1";
        return -1;

    }
    else{
        for(int i = 0 ; i < A.length(); i++){
            if(A[i] != B[i]){
                char temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                counter++;
            }
        }
    }
    if(A==B){
        cout<<counter<<endl;
        return counter;
    }
    else{
        cout<<"-1"<<endl;
        return -1;
    }
}
