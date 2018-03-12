#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <windows.h>
#include <locale>
using namespace std;
double findSlope(vector<int> x, vector<int> y){
    double sumX=0;
    double sumY=0;
    double sumXY=0;
    double sumX2=0;
    int counter=0;
    for(int i=0; i<x.size(); i++){
            sumX+=x[i];
            sumY+=y[i];
            sumXY+=x[i]*y[i];
            sumX2+=x[i]*x[i];
            counter++;
    }
    return (counter*sumXY-sumX*sumY)/(counter*sumX2-sumX*sumX);
}
int main(){
  return 0;
}
