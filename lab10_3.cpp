#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>


using namespace std;

int main(){
    int count = 0;
    double sum = 0;
    double sumSig = 0;
    double Mew = 0;
    double Sigma = 0;
    string Textl;
    ifstream source("score.txt");
    while (getline(source,Textl))
    {
        sum += stod(Textl);
        sumSig += pow(stod(Textl),2);
        count++;
    }
   /*for (int i = 0; i < 5; i++)
   {
    getline(source,Textl);
    cout << stod(Textl) << endl;
    sum += stod(Textl);
    count++;
   }*/

    Mew = sum/count;
    Sigma = sqrt((sumSig/count)-pow(Mew,2));
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << Mew << endl;
    cout << "Standard deviation = "<< Sigma << endl;
    source.close();
}