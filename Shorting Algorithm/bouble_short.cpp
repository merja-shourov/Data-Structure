#include<bits/stdc++.h>
using namespace std;

void bubbleShort( int arr[], int n){
    // int n = sizeof(arr)/sizeof(arr[0]);

    for( int i=0; i<n-1; i++ ){

        bool swapped = false;
        for( int j=0; j<n-i-1; j++ ){
            if( arr[j] > arr[j+1] ){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if( swapped == false ){
            break;
        }
    }
}

int main(void){
    int n;
    cin >> n;

    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    bubbleShort(arr, n);

    for( int i=0; i<n; i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}