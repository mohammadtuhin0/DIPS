#include <iostream>
using namespace std;

int insert_last(int array[], int length)
{
    int item;
    cout<< "Enter new Item : "<<endl;
    cin>> item;
    array[length] = item;
    return length + 1;
}

int insert_specific(int array[], int lenght, int pos)
{
    int item;
    cout<<"Enter new item : ";
    cin>> item;

    for(int i = lenght-1; i >= pos; i--)
    {
        array[i+1] = array[i];
    }

    array[pos] = item;

    return lenght + 1;
}

int delete_last(int array, int length)
{
    int delete_item = array[length - 1];
    cout<<delete_item <<"\nis deleted";
    return length -1;
}

void display_array(int array[], int length)
{   
    cout<<endl;
    for(int i = 0; i<length; i++) {
        cout<<array[i];
    }
} 