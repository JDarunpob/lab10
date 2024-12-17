#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include <iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int N=0;
    double all,sum,sum2,mean,mean2=0;
    ifstream source;
	source.open("score.txt") ;
	string textline;
	while (getline(source,textline)){
        sum += stod(textline);
        sum2 += pow(stod(textline),2);
        N++;
	}
    mean = sum/N;
    mean2 = pow(mean,2);
    all = pow((sum2/N)-mean2,0.5);
    source.close();
    cout << "Number of data = " << N <<endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << all << endl;
}