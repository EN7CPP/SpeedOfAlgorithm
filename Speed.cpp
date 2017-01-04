#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main(int argc,char*argv[]){
clock_t start=clock();
for(int i=0;i<10;i++){
    cout<<"Done"<<endl;
    }
cout<<double(double(clock()-start)/CLOCKS_PER_SEC)<<endl;
return 0;
    }
