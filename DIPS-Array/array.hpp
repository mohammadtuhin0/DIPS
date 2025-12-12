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


int insert_specific(int array[], int length, int pos)
{
    int item;
    cout<<"Enter new item : ";
    cin>> item;

    for(int i = length-1; i >= pos; i--)
    {
        array[i+1] = array[i];
    }

    array[pos] = item;

    return length + 1;
}


int delete_last(int array[], int length)
{
    int delete_item = array[length - 1];
    cout<<delete_item <<"\nis deleted";
    return length -1;
}


int delete_specific(int array[], int length, int pos)
{
    int deleted_item = array[pos];
    for(int i=pos; i<length-1; i++) {
        array[i] = array[i + 1];
    }
    cout<< deleted_item << "is deleted from " <<pos <<endl;
    return length - 1;
}


void traverse_array(int array[], int start, int end) 
{
    cout<<"\nArray from "<<start<<" to "<<end<<" ";
    for(int i = start; i<=end; i++) {
        cout<<array[i]  << " ";
    }
    cout<<endl;
}


void linear_search(int array[], int length)
{
    cout<<"Enter item to be search : ";
    int item;
    cin>> item;

    bool found = false;
    for(int i=0; i<length; i++) {
        if(array[i] == item)
        {
            cout<<"\nItem found at position "<< i <<" : " <<array[i]<<endl;
            found == true;
            break;
        }
    }
    if(!found) {
        cout<<"\nItem not found!"<<endl;
    }
}

void asc(int array[], int length)
{
    int temp = 0;
    for(int i=0; i<length; i++) {
        for(int j= i + 1; j<length; j++) {
            if(array[i] > array[j]) {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

void dsc(int array[], int length)
{
    int temp = 0;
    for(int i=0; i<length; i++) {
        for(int j= i + 1; j<length; j++) {
            if(array[i] < array[j]) {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

void display_array(int array[], int length)
{   
    cout<<endl;
    cout<<"You have Array : ";
    for(int i = 0; i<length; i++) {
        cout<<array[i] << " ";
    }
    cout<< endl;
} 