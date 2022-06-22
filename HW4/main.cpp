#include <iostream>
#include "bookType.h"
#include "bookType.cpp"
using namespace std;

bool searchTitle(string str, bookType bookType1[],int size){
    for (int i=0; i<size; i++){
        if (str==bookType1->getBookTitle())
            return true;
    }
    return false;
}

bool searchISBN(string str, bookType bookType1[],int size){
    for (int i=0; i<size; i++){
        if (str==bookType1->getBookISBN())
            return true;
    }
    return false;
}

int main() {
    bookType bookType1[100];
    bookType1->printinfo();
    bookType1->printBookTitleAndISBN();
    bookType1->printBookPrice();

    bookType1->setBookISBN("1234");
    bookType1->setBookTitle("Harry Potter 5");
    bookType1->printBookTitleAndISBN();

    cout<<bookType1->getBookISBN()<<endl;
    cout<<bookType1->getBookTitle()<<endl;
    cout<<bookType1->getBookPrice()<<endl;

    bookType1->setBookPrice(99);
    cout<<bookType1->getBookPrice()<<endl;

    bookType1->setCopiesInStock(999);
    bookType1->printinfo();

    bookType1->updateQuantity(1000);
    bookType1->printinfo();

    bookType1->printBookTitle();

    bookType1->makeSale();
    bookType1->showQuantityInStock();

    if (bookType1->isTitle("Harry Potter 5"))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    if (bookType1->isISBN("1234"))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    if (bookType1->isAuthor("JK Rowling"))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    if (bookType1->isInStock())
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    string arr4[4]={"Johnson"};
    bookType1->setBookInfo("JSS", arr4, "JSS", "7654", 903, 986390, 1);
    bookType1->printinfo();
//Search the book ISBN/title
    string str1;
    cout<<"Please input the book Title"<<endl;
    getline(cin,str1);
    if (searchTitle(str1,bookType1,100))
        cout<<"The book is inside"<<endl;
    else
        cout<<"The book is not inside"<<endl;
    string str2;
    cout<<"Please input the book ISBN"<<endl;
    getline(cin,str2);
    if (searchISBN(str2,bookType1,100))
        cout<<"The book is inside"<<endl;
    else
        cout<<"The book is not inside"<<endl;

    return 0;
}
