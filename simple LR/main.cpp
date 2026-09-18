#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double getMean(vector<double>value){
    double sum=0;
    for (auto value:value){
        sum+=value; }
return sum/value.size();}

double getvariance(vector<double>value){
    double mean=getMean(value);
    double variance=0;
    for (auto value:value){
        variance+=pow(value-mean,2);
    }
    return variance;

}
double getcovarinace(vector<double>valueA,vector<double>valueB){
    double meanA=getMean(valueA);
    double meanB=getMean(valueB);
    double covariance=0;
    for (int i=0;i<valueA.size();i++){
        covariance+=(valueA[i]-meanA)*(valueB[i]-meanB);
    }
    return covariance;

vector<double> getcoeff(const vector<vector<double>> %dataset){

}

}
int main(){
    return 0;
}
