#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    

    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1]){

        }
        else{
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}