/* 
 * File:   main.cpp
 * Author: evan_misshula
 *
 * Created on February 26, 2011, 2:11 PM
 */

#include <cstdlib>

#include "iList.h"
#include "ragged_IArray.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
// enum    L_0 { 3, 4 };                                                                */
// enum    L_1 {1, 2, 3};                                                              */
// enum   L_2 {6,7,8};                                                              */
// enum   L_3 {0,6,9,1};
    enum Education { drop_out=0, ged, highSchool, aas, ba_bs,ma, mbaLawMd, phd};
    enum SES { upper=0, middle, working, poor };
    enum Religon { protestant=0, catholic, jewish, muslim, bhudist, atheist};
    enum Gender { female=0, male, transMtf, transFtm };
    enum Race { white=0, african_american, hispanic, chinese};
    int* dataPtr;
    int iListSize=3;
    int max_len=20;
    string iListName="integer array";

    //int Education.sizeof;
    //(int length, int* list, int max_length, string name)
    iList firstIlist=iList(iListSize,dataPtr, max_len, iListName );
    cout<<"The name of the first iList is "<<firstIlist.getName()<<endl;
    cout<<"The length of the first structure is: "<<firstIlist.getLength()<<endl;
    cout<<"The max length of the list is:"<<<firstIlist.getMaxLength()<endl;
    cout<<"First, we need to intialize data\n\n";
    firstIlist.initializeData();
    cout<<"Then, we need to print the  data\n\n";
    firstIlist.printData();
    cout << "Finally we need to destroy the object that holds the data";
    firstIlist.~iList();
    //ragged_iarray data
    int maxnum1=25;
    int* maxnum2=4;
    int num1=4;
    int* num2=0;
    int** iarrayData=0;
    string iarrayName="ragged iArray";
    ragged_IArray firstRagArray=ragged_IArray(int maxnum1,
                int* maxnum2,
                int num1, int* num2,
                int** iarrayData,
                string iarrayName);
    cout<<"The name of the first ragged iArray is:"<<firstRagArray.getName();
    cout<<endl;
    cout<<"The max number of rows is: "<<firstRagArray.getMaxRows()<<endl;
    cout<<"The number of rows used is:"<<firstRagArray.getNumRowsUsed()<<endl;
    cout<<"First, we need to intialize data\n\n";
    firstRagArray.initialize();
    cout<<"Then, we need to print the number of columns of each row of data\n\n";
    firstRagArray.printArrayOfColLength();
    cout<<"Then, we need to print the data\n\n";
    firstRagArray.print();
    cout << "Finally we need to destroy the object that holds the data";
    firstRagArray.~ragged_IArray();
    return 0;
}

