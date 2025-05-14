#include<iostream>
using namespace std;

class stack{
    private :
    int *arr;
    int top;
    int capacity;
    int count;

    public :
    stack(int capacity)
    {
        this->arr = new int[capacity];
        this->top = -1;
        this->capacity = capacity;
        this->count = 0;
    }

    void push(int element){

        
        if(this->capacity == this->count){
            cout << "stack is over floed" << endl << endl;
            
        }else{
            this->top++;
            this->arr[top] = element;
            this->count++;
            cout << "Element insert successfully " << endl << endl;
        }
    }
    void pop(int element){
        if (this->top == -1) {
            cout << "Stack is under flowed" << endl << endl;
        }else{
            this->top--;
            this->count--;
            cout << "Element deleted successfully" << endl << endl;
    }

}

  void Top(){
      if (this->top == -1) {
         cout << "Stack is empty" << endl << endl;
    }else{
       
        cout << "Peek Element is : " << this->arr[this->top] <<endl << endl;
    }

    }
    void display(){

            if (this->top == -1) {
         cout << "Stack is empty" << endl << endl;
    }else{
       
        for(int i =this->top; i>=0; i--){
            cout << this->arr[i] << " "; 
        }
        cout << endl << endl;
    }

    }
    void isEmpty(){

        if (this->top== -1){
            cout << "Stack is empty" << endl << endl;
        }else{
            cout << "Stack is not empty" << endl << endl;
        }
    }

        void isFull(){
        if(this->capacity == this->count){
         cout << "Stack is full" << endl << endl;
    }else{
        this->top--;
        this->count--;
        cout << "Element is not full  " << endl << endl;
    }


}
};

int main (){
    stack stack(5);
    int choice, element;

    do {
        cout << "Press 1 for push " << endl;
        cout << "Press 2 for pop " << endl;
        cout << "Press 3 for peek " << endl;
        cout << "Press 4 for display " << endl;
        cout << "Press 5 for isEmpty " << endl;
        cout << "Press 0 for exit " << endl;

        cin >> choice;

        switch(choice){
            case 1:
                  cout << "Enter the element :";
                  cin >> element;
                  stack.push(element);
            break;
            case 2:
            stack .pop(2);
            break;

            case 3:
            stack .Top();
            break;

            case 4:
            stack .display();
            break;

            case 5:
            stack .isEmpty();
            break;

            case 0:
            cout << "Exiting the program " << endl;
            break;
            default :
            cout << "Invalid choice " << endl;
            break;


        }
    }while(choice != 0);

    return 0;
}