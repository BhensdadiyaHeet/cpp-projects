// insertion sort

#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the number of array :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element :";
        cin >> arr[i];
        cout << endl;
    }

   for (int i = 1; i < n; i++)
   {
    int key = arr[i];
    int j = i-1;

    while (j>=0 && key < arr[j]);
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    
   }
   
    for(int a : arr){
        cout << a << "-";
    }
}