#include <iostream>
using namespace std;

class que
{
private:
    int *arr;
    int low;
    int high;
    int capacity;
    int count;

public:
    que(int capacity)
    {
        this->arr = new int[capacity];
        this->low = -1;
        this->high = -1;
        this->capacity = capacity;
        this->count = 0;
    }

    void inque(int element)
    {
        if(this->low == -1 && this->high == -1){
            this->high++;
            this->low++;
            this->arr[this->low] = element;
            this->count++;
        }else{
            this->low++;
            this->arr[this->low] = element;
            this->count++;
        }
    }
    void deque()
    {
        if (this->low == -1 && this->high == -1){
            cout << "Que is empty" << endl;
        }else{
            this->high++;
        }
    }
    void rearEl()
    {
        if (this->low == -1 && this->high == -1){
            cout << "Que is empty" << endl;
        }else{
            this->high++;
        }
    }
    void frontEl()
    {
        if (this->low == -1 && this->high == -1){
            cout << "Que is empty" << endl;
        }else{
            this->high++;
        }
    }
};

int main()
{

    que Que(3);
    int choice, element;

    do
    {
        cout << "Press 1 for inque" << endl;
        cout << "Press 2 for deque" << endl;
        cout << "Press 3 for rear" << endl;
        cout << "Press 4 for front" << endl;
        cout << "Press 0 for exit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element : ";
            cin >> element;
            Que.inque(element);
            break;
        case 2:
            cout << "Enter the element : ";
            cin >> element;
            Que.deque();
            break;
        case 3:
            cout << "Enter the element :";
            cin >> element;
            Que.rearEl();
            break;
        case 4:
            cout << "Enter the element :";
            cin >> element;
            Que.frontEl();
            break;
       
        default:
            cout << "Invalid Choice " << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}