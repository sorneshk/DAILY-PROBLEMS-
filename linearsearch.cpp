#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout << "present";
            return 0;
        }
    }
    cout << "Not present";
}