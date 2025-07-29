#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    int temp[3];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[d+i];                                                                                                                     
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    for(int i=0;i<n;i++){
    cout << arr[i];
    }
}