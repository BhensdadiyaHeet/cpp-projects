// selection sort

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

    for (int i = 0; i < n-1 ; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
          if (arr[j]<arr[minIndex])
          {
            minIndex = j;
          }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

     for(int a : arr){
        cout << a << "-";
    }

}