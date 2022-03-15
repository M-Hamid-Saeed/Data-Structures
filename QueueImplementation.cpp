#include <iostream>
using namespace std;
bool isfull(int &rear,int &capacity){
    if(rear==capacity-1)
        return true;
    else
        return false;

}
bool isempty(int &rear,int &front){
    if(front==-1 && rear == -1)
        return true;
    else
        return false;
}
int deQ(int &rear,int &capacity,int &front,int *q){
    if(!isempty(rear,capacity)){
        int element = 0;
        element = q[front];
        front++;
        return element;
        }
    else
        cout<<"_______________EMPTY____________"<<"\n";

    }
void enQ(int &rear,int &capacity,int &front,int *q,int element){
    if(!isfull(rear,capacity)){
        rear++;
        q[rear] = element;
        if(front==-1)
            front=0;
    }
    else
        cout<<"__________FULL____________"<<"\n";
}

int main() {

    int rear,front,capacity;
    cout << "Enter Queueu capacity" << endl;
    cin>>capacity;
    front=-1;
    rear = -1;
    int q[capacity];

    while(true) {
        int choice, element;

        std::cout << "\nEnter Your Choice \n 1. EnQueue \n 2. Dequeueu \n 3. Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter element --> ";
                std::cin >> element;
                enQ(rear, capacity, front,q, element);
                //std::cout << "After adding element";
                break;
            case 2:
                cout<<deQ(rear,capacity,front,q);
                break;
            case 3:
                exit(0);
            default:
                std::cout << "please chose from given options";
        }

    }


    return 0;
}

