#include <iostream>
#include "array.hpp"
using namespace std;


int main() {

    int array[100], choise = 0, length = 0, pos = 0;

    while(1) 
    {

    cout<<"\nSelect Operation" <<endl;
    cout<<"\n1 = Insertion at last position" <<endl;
    cout<<"\n2 = Insertion at specific position "<<endl;
    cout<<"\n3 = Delete from last position "<<endl;
    cout<<"\n4 = Delete specific position "<<endl;
    cout<<"\n5 = Traversing the array "<<endl;
    cout<<"\n6 = Linear Search for an item "<<endl;
    cout<<"\n7 = Sorting asc or dsc "<<endl;
    cout<<"\n8 = Merging A1 and A2" <<endl;
    cout<<"\n9 = Display "<<endl;
    cout<<"\n0 = Exit "<<endl;
    cout<<"========================"<<endl;

    cout<<"\nEnter Your Choise : "<<endl;
    cin>> choise;

    switch(choise)
    {
        case 0:
            exit(0);
        break;

        case 1:
            cout<<"\n=== Your choise = 1 "<<endl;
            cout<<"Insertion at last position "<<endl;
            length = insert_last(array, length);
            break;

        case 2:
            cout<<"\n=== Your choise = 2 "<<endl;
            cout<<"Insertion at specific position "<<endl;
            cout<<"Enter the possition : ";
            cin>>pos;
            
            if(pos >= 0 && pos < length)
            {
                length = insert_specific(array, length, pos);
            }
            else if(pos == -1 || pos == length)
            {
                length = insert_last(array, length);
            }
            else
            {
                cout<<"Wrong position!";
            }
            break;

        case 3:
            cout<<"\n=== Your choise = 3 "<<endl;
            cout<<"\nDelete from the last position "<<endl;
            if(length > 0) {
                length = delete_last(array, length);
            }else {
                cout<<"Array is empty!"<<endl;
            }
            break;

        case 4:
            cout<<"\n=== Your choise = 4 "<<endl;
            cout<<"\nDelete specific position "<<endl;
            cout<<"\nEnter the position : " <<endl;
            cin>> pos;
            if(pos >= 0 && pos < length) {
                length = delete_specific(array, length, pos);
            } else {
                cout<<"Invalid position!"<<endl;
            }
            break;

        case 5:
            cout<<"\n---Your choise = 5---";
            cout<<"\n---Traversing the array---"<<endl;

            {
                int start, end;
                cout<<"Enter the start : ";
                cin>>start;
                cout<<"Enter the end : ";
                cin>> end;

                if(start >= 0 && end < length && start <= end)
                {
                    traverse_array(array, start, end);
                } else {
                    cout<<"Invalid range! "<<endl;
                }
            }
            break;

        case 6:
            cout<<"Your choise = 6 "<<endl;
            cout<<"Linear Search for an item "<<endl;
            linear_search(array, length);
            break;

        case 7:
            cout<<"Your choise = 7 "<<endl;
            cout<<"Sorting asc or dsc "<<endl;

            int c;
            cout<<"\n1 for asc";
            cout<<"\n2 for dsc";
            cout<<"\nEnter your choise : ";
            cin>>c;
            if(c == 1) {
                asc(array, length);
            }
            else if(c == 2) {
                dsc(array, length);
            } else {
                cout<<"Wrong choice! ";
            }
            break;


        case 9:
            cout<<"Your choise = 9 "<<endl;
            cout<<"Display Array "<<endl;
            display_array(array, length);
            break;

        default:
            break;
    }
    }

    return 0;
}