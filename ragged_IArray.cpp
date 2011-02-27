/* 
 * File:   ragged_IArray.cpp
 * Author: evan_misshula
 * 
 * Created on February 26, 2011, 3:36 PM
 */
#include<iostream>
#include "ragged_IArray.h"

ragged_IArray::ragged_IArray(int maxnum1,
                int* maxnum2, 
                int num1, int* num2,
                int** iarrayData,
                string iarrayName)
:maxNumRows(maxnum1),maxNumCols(maxnum2),
        numRowsUsed(num1),numColsUsed(num2),
        iarray(iarrayData),name(iarrayName)
{
    // we initialize the nested pointer to 0
    // we create the first level of pointers to the column pointers

    int **iarray=0;
    iarray=new int[numRowsUsed];
    //now we have to create the 1 dim array that holds 
    //how many columns we are using in each array

    int *numColsUsed=0;
    numColsUsed=new int[numRowsUsed];
    // without data this is all we can do
    // during the construction
    


}
ragged_IArray::initialize(){
    cout<<"First we need to see how many states exist for each variable\n\n";
    for(int i=0;i<numRowsUsed;i++){
        cout<<"The number of states for variable i="<<i<<" is?\n";
        cin>>numColsUsed[i];
    }

    //now that we know how many columns we are using we can instantiate the
    // the columns of the data array

for(int i=0;i<numRowsUsed;i++){
        iarray[i] = new *[numColsUsed[i]];
    }
    //we have only created the pointers to the array
    //we have not given it any values
    //Finally we can add the data
    for(int i=0;i<numRowsUsed;i++){
        for(int j=0;j<numColsUsed[i];j++){
            cout<<"What is the j= "<<j<<" value for variable i= "i<<" ?\n";
            cin>>iarray[i][j];
        }
}
}
ragged_IArray::print(){
 for(int i=0;i<numRowsUsed;i++){
     cout<<endl;
     cout<<"There are "<<numColsUsed[i]<<"values for variable"<<i<<":"<<endl;
     cout<<endl;
        for(int j=0;j<numColsUsed[i];j++){
            cout<<"The j= "<<j<<" value for variable i= "i<<" is ";
            cin<<iarray[i][j]<<"\n";
        }
}
}
ragged_IArray::getMaxRows(){return maxNumRows;}
ragged_IArray::getNumRowsUsed(){return numRowsUsed;}
ragged_IArray::getMaxCols(){return maxNumCols;}
ragged_IArray::getColsUsedPtr(){return numColsUsed;}
ragged_IArray::printArrayOfColLength(){
     cout<<endl;
    for(int i=0;i<numRowsUsed;i++){
     cout<<"There are "<<numColsUsed[i]<<"values for variable"<<i<<":"<<endl;
}
          cout<<endl;
}

ragged_IArray::~ragged_IArray() {
    for(int i=0;i<numRowsUsed;i++){
            delete [] iarray[i];
    }
            delete [] iarray;
            delete [] numColsUsed;


    cout<<"Destroyed the ragged I-array named "<<name;
}
