/* 
 * File:   iList.cpp
 * Author: evan_misshula
 * 
 * Created on February 26, 2011, 6:48 PM
 */

#include "iList.h"

iList::iList(int length, int* list, int max_length, string name)
: iListLength(length), iListData(list),maxLength(max_length),
     iListName(name)
{
    for(int i=0; i<iListLength;i++){
        cout<<"what is the value of iList["<<i<<"]:";
        cin>>iListData[i];

    }
}
string iList::getName(){return iListName;}
int iList::getLength(){return iListLength;}
int iList::getMaxLength(){return maxLength;}
void iList::printData()
{
    for(int i=0; i<iListLength;i++){
        cout<<"The "<<i<<"th value of iList is";
        cout<<iListData[i]<<endl;}

}

iList::~iList() {
}

