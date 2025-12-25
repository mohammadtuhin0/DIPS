#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

#define Max_Size 100

class Stack {
private:
    int arr[Max_Size];
    int top;
public:
    Stack() : top(-1) {}

    void push(int val) {
        if(top >= Max_Size -1) {
            cout<< " Stack Overflow!\n";
            return;
        }
        arr[++top] = val;
        cout<<"Pushed " << val << " to stack\n";
    }

    void pop() {
        if(top<0) {
            cout<<"Stack underflow!";
            return;
        }
        cout<<"Popped" << arr[top--] << " from stack\n";
    }

    void display() {
        if(top < 0) {
            cout<<"Stack is empty\n";
            return;
        }
        cout<< "Stack elements : ";
        for(int i = top; i>= 0; i--) {
            cout<< arr[i] << " ";
        }
        cout<< "\n";
    }
};

class Queue {
private:
    int arr[Max_Size];
    int front, rear;
public:
    Queue() : front(-1), rear(-1) {}

    void enqueue(int val) {
        if(rear >= Max_Size - 1) {
            cout<< "Queue Overflow\n";
        }
        if(front == -1) front = 0;
        arr[++rear] = val;
        cout<<"Enqueue " << val << " to queue\n";
    }

    void dequeue(){
        if(front == -1 || front > rear) {
            cout<< "Queue Underflow!\n";
            return;
        }
        cout<< "Dequeue " << arr[front++] << " from queue";
    }
   void display() {
    if(front == -1 || front > rear){
        cout<< "Queue is empty\n";
        }
        cout<< "Queue elements : ";
        for(int i = front; i<= rear; i++) {
            cout<< arr[i];
        }
        cout<< "\n";
    }
};

// Struct Definitions
struct Student
{
    int id;
    float cgpa;
};

struct Point {
    double x, y;
};

struct Person{
    string name;
    int age;
};

struct Product {
    string name;
    double price;
};

struct Rectangle {
    double length;
    double width;
};

struct Time {
    int hours;
    int minutes;
};

struct Counter {
    int value;
};

struct Node {
    int data;
};

struct LinkedNode{
    int data;
    LinkedNode* next;
};


void problem1() {
    cout<<"\n=== Problem 1: student Struct ===\n";
    Student s1;
    s1.id = 251400052;
    s1.cgpa = 3.45;

    cout<<"Student ID: " <<s1.id <<endl;
    cout<<"Student CGPA: " <<s1.cgpa <<endl;
}

void problem2() {
    cout<<"\n=== Problem 2: Poin Distance from Origin ===";
    Point p;
    cout<<"Enter x length: ";
    cin>>p.x;
    cout<<"Enter y width: ";
    cin>>p.y;

    double distance = sqrt(p.x * p.x + p.y * p.y);
    cout<<"Distance from origin (0,0): " <<fixed << setprecision(2) <<distance <<endl;
}

void problem3() {
    cout<<"\n=== Problem 3: Struct Pointer Access ===\n";
    Person p1;
    cout<<"Enter Person name = ";
    cin>>p1.name;
    cout<<"Enter Age = ";
    cin>>p1.age;

    Person* ptr = &p1;

    cout<< "Using . operation: \n";
    cout<< "Name : " <<p1.name <<", Age: " <<ptr->age<<endl;
}

void problem4() {
    cout<<"\n=== Problem 4: Product Array Total Price ===\n";
    Product products[3] = {
        {"Laptop", 850.50},
        {"Mouse", 25.99},
        {"Keyboard", 75.00}
    };

    double total = 0;
    for(int i = 0; i < 3; i++) {
        cout<< products[i].name << ": $" <<fixed <<setprecision(2) << products[i].price <<endl;
        total += products[i].price;
    }
    cout<< "Total Price : $" << total <<endl;
}

double calculatedArea(Rectangle r) {
    return r.length * r.width;
}
void problem5() {
    cout<<"\n=== Problem 5: Rectangle Area ===\n";
    Rectangle rect;
    rect.length = 10.5;
    rect.width = 5.2;

    double area = calculatedArea(rect);
    cout<<"Rectangle length: " << rect.length<<endl;
    cout<<"Rectangle width : "<<rect.width <<endl;
    cout<<"Area : "<<area<<endl;
}

Time addTime(Time t1, Time t2) {
    Time result;
    result.minutes = t1.minutes + t2.minutes;
    result.hours = t1.hours + t2.hours;

    if(result.minutes >= 60) {
        result.hours += result.minutes /60;
        result.minutes %= 60;
    }
    return result;
}

void problem6() {
    cout<<"\n=== Problem 6 : Time Addition ===\n";
    Time t1 = {1, 40};
    Time t2 = {0, 30};

    cout<<"Time 1 : " <<t1.hours << "h " << t1.minutes <<"m\n";
    cout<<"Time 2 : " <<t2.hours <<"h " <<t2.minutes << "m\n";
}

void incrementByTen(Counter* c) {
    c->value += 10;
}

void problem7() {
    cout<<"\n=== Problem 7 : Increment via Pointer ===\n";
    Counter cnt = {5};
    cout<< "Before increment: " <<cnt.value <<endl;
    incrementByTen(&cnt);
    cout<<"After increment: " <<cnt.value <<endl;
}

void problem8() {
    cout<< "\n=== Problem 8: NULL Pointer ===\n";
    Student* ptr = NULL;

    if(ptr == NULL) {
        cout<<"Pointer is NULL \n";
    }
    Student s = {252, 3.20};
    ptr = &s;

    if(ptr != NULL) {
        cout<<"Pointer now points to a student\n";
        cout<<"Student ID: "<<ptr ->id <<", CGPA: " <<ptr ->cgpa <<endl;
    }
}

void problem9() {
    cout<<"\n=== Problem 9: Single Pointer Multiple Nodes ===\n";
    Node node1 = {100};
    Node node2 = {200};

    Node* ptr = &node1;
    cout<<"Pointer pointing to Node1, data: " <<ptr->data <<endl;

    ptr = &node2;
    cout<<"Pointer pointing to Node2, data: "<<ptr->data <<endl;
}

void problem10() {
    cout<<"\n=== Problem 10: Linked Nodes ===\n";
    LinkedNode first = {10, NULL};
    LinkedNode second = {20, NULL};

    first.next = &second;

    cout<<"First node data: " <<first.data <<endl;
    cout<<"Second node data (via first.next->data): " <<first.next->data <<"\n";
}

// Stack Menu
void stackMenu() {
    Stack s;
    int choice, val;
    
    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}

// Queue Menu
void queueMenu() {
    Queue q;
    int choice, val;
    
    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                q.enqueue(val);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice!\n";
        }
    }
}