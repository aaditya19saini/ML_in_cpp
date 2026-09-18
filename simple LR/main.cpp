#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double Mean(vector<double>value){
    double sum=0;
    for (auto value:value){
        sum+=value; }
return sum/value.size();}

double getvariance(vector<double>value){
    double mean=getmean(value);
    double variance=0;
    for (auto value:values){
        variance+=pow(value-mean,2);
    }
    return variance;

}
double getcovarinace(vector<double>valueA,vector<double>valueB){
    double meanA=getmean(valueA);
    double meanB=getmean(valueB);
    double covariance=0;
    for (auto value:values){

    }

}
