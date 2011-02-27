/* 
 * File:   ragged_IArray.h
 * Author: evan_misshula
 *
 * Created on February 26, 2011, 3:36 PM
 */
#include<iostream>
#include<string>
#ifndef RAGGED_IARRAY_H
#define	RAGGED_IARRAY_H
using namespace std;
class ragged_IArray {
public:
    ragged_IArray(int maxnum1,
          int* maxnum2,
          int num1,
          int* num2,
          int** iarrayData,
          string iarrayName);
    void print();
    void initialize();
    int getMaxRows();
    int getNumRowsUsed();
    int getMaxCols();
    int* getColsUsedPtr();
    void printArrayOfColLength();
    string getName();
    virtual ~ragged_IArray();
private:
 int maxNumRows;
    int* maxNumCols;
    int numRowsUsed;
    int* numColsUsed;
    int** iarray;
    string name;

};

#endif	/* RAGGED_IARRAY_H */

