#include<bits/stdc++.h>
using namespace std;

// selection short ,, O(n^2)

void selectionShort( int arr[], int n ){

    for( int i=0; i<n-1; i++ ){
        for( int j=i+1; j<n; j++ ){
            // if( arr[i] > arr[j] ){
            //     swap(arr[i], arr[j]);
            // }
        }
    }
}
int main(void){
    int n; cin >> n;

    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    selectionShort(arr, n);
    for( int i=0; i<n; i++ ){
        cout << arr[i] << endl;
    }

    return 0;
}