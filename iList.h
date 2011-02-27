/* 
 * File:   iList.h
 * Author: evan_misshula
 *
 * Created on February 26, 2011, 6:48 PM
 */

#ifndef ILIST_H
#define	ILIST_H
#include<iostream>
#include<string>
using namespace std;
class iList {
public:
    iList(int length, int* list, int max_length, string name);
    string getName();
    void printData();
    void initializeData();
    int getLength();
    int getMaxLength();
    virtual ~iList();
private:
    int iListLength;
    int* iListData;
    int maxLength;
    string iListName;

};

#endif	/* ILIST_H */

