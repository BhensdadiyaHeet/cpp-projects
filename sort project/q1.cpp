#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of element in array :" ;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cout << "Enter the element :";
        cin >> arr[i];
        cout << endl;
    }

    // Selection sort

     for (int i = 0; i<n-1; i++) {

        int minindex = i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }

        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
     }

     for (int a : arr){

        cout << a << " ";
     }


    return 0;
}