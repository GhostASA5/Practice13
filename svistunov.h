#include "svistunov.cpp"

void readArray(int data[], int size);

void readArray(double data[], int size);

void combineArrays(int data1[], int& size1, int data2[], int size2);

void combineArrays(double data1[], int& size1, double data2[], int size2);

double arrayMean(int data[], int size);

double arrayMean(double data[], int size);

void insertInArray(int data[], int& size, int position, int num);

void insertInArray(double data[], int& size, int position, int num);

int minSumArray(int data[][100], int n, int m, bool row=true);

int minSumArray(double data[][100], int n, int m, bool row=true);