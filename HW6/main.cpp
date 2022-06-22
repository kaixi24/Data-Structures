#include <iostream>
#include <fstream>
#include "BST.h"
#include "BST.cpp"

using namespace std;

int main() {
    Date date1(10,10,2021);
    Date date2(12,9,2021);
    Date date3(23,1,2012);
    Date date4(28,9,2017);

    BST bst;

    //Add function
    bst.insert(date1);
    bst.insert(date2);
    bst.insert(date3);
    bst.insert(date4);

    //remove function
    bst.remove(date3);

    //search function
    if (bst.search(date4)){
        cout<<date4<<" is inside the BST tree"<<endl;
    }
    else
        cout<<date4<<" is not inside the BST tree"<<endl;

    cout<<"Below are the object stored in the BST tree and they are displayed in the ascending order:"<<endl;
    bst.inorderTraversal();

    return 0;
}
