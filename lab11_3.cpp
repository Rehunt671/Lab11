#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;
int cnt=0;
string data;
double num,mean,sd,sum=0,sumsq=0;
int main(){
  ifstream myfile("score.txt");
  if(!myfile) {
    cout << "Couldn't open this file ";
    return 0;
  }
  while(getline(myfile,data)){
    num = stod(data);
    sum += num;
    sumsq += pow(num,2);
    cnt++;
  }
  mean = sum/cnt;
  sd = sqrt(sumsq/cnt-pow(mean,2));
  cout << setprecision(3);
  cout << "Number of data = " << cnt << std::endl;
  cout << "Mean = " << mean << std::endl;
  cout << "Standard deviation = " << sd << std::endl;
}