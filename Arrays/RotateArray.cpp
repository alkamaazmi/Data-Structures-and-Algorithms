#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[],int start,int last){
    
    if(start>=last){
        return;
    }

    int temp=arr[start];
    arr[start]=arr[last];
    arr[last]=temp;

    return reverseArr(arr,start+1,last-1);
}
void rotateArr(int arr[], int d, int n){
    d=d%n;
   reverseArr(arr,0,d-1);
   reverseArr(arr,d,n-1);
   reverseArr(arr,0,n-1);
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }

	    rotateArr(arr, d,n);

	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
} 