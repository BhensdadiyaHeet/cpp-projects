#include <iostream>
using namespace std;
#include <string.h>
#include <vector>

int main(){
    vector <int> arr{10,20,30,40};

    int choice;

    do
    {
        cout << "Welcome to Array Program !" << endl << endl;

        cout << "Press 1 to ADD An Element In Array :" << endl;
        cout << "Press 2 to Print All Element In Array :" << endl;
        cout << "Press 3 to Delete Element Of Array :" << endl;
        cout << "Press 4 to Update Element Of Array :" << endl;
        cout << "Press 0 To Exit The Program :" << endl;

        cin >> choice;

        if (choice == 1)
        {
            int element;
            cout << "Enter the element :";
            cin >> element;

            arr.push_back(element);
            cout << "Element Added Successfully !" << endl << endl;
        }
        else if(choice == 2){
            cout << "Here is the list of element :" << endl;
            for (int a : arr)
            {
                cout << a << endl;
            }
            cout << endl << endl;
            
        }
        

        else if(choice == 3){
            int index;

            cout << "Enter the index to remove the element :";
            cin >> index;

            if (index < arr.size()){
                arr.erase(arr.begin()+index);
                cout << "Element deleted successfully !" << endl;
            }else{
                cout << "Your index is not valid !" << endl;
            }            
        }

        else if(choice == 4){
            int index,value;
            cout << "Enter the index :" << endl;
            cin >> index;
            cout << "Enter the value :" << endl;
            cin >> value;

            arr[index] = value;
            cout << "Element updated successfully !" << endl;
        }
    } while (choice > 0);
    

    return 0;
}