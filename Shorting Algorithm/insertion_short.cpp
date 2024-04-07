#include<bits/stdc++.h>
using namespace std;

// insertion short
void insertionShort(int arr[], int n ){

    for( int i=1; i<n; i++ ){
        int val = arr[i];

        int j= i-1;
        while (j >= 0 )
        {
            if( arr[j] > val ){
                swap(arr[j], arr[j+1]);
            }
            j--;
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

    insertionShort(arr, n);
    for( int i=0; i<n; i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}