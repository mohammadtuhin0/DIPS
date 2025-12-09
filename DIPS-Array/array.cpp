#include <iostream>
#include "array.hpp"
using namespace std;


int main() {

    int array[100], choise = 0, length = 0, pos = 0;

    while(1) 
    {

    cout<<"Select Operation" <<endl;
    cout<<"1 = Insertion at last position" <<endl;
    cout<<"2 = Insertion at specific position "<<endl;
    cout<<"3 = Delete from last position "<<endl;
    cout<<"4 = Delete specific position "<<endl;
    cout<<"5 = Traversing the array "<<endl;
    cout<<"6 = Linear Search for an item "<<endl;
    cout<<"7 = Sorting asc or dsc "<<endl;
    cout<<"8 = Merging A1 and A2" <<endl;
    cout<<"9 = Display "<<endl;
    cout<<"0 = Exit "<<endl;
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
            length = delete_last(array, length);
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