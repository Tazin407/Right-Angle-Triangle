#include<iostream>
using namespace std;

int main(){

int row,column;
cout<<"Enter the value of row and column"<<endl;
cin>>row>>column;

for (int i = 1; i <=row; i++)
{
    /* code */for(int j=1;j<=i; j++){
        cout<<" "<<"x ";
    }
    cout<<endl;
}

   
return 0;
}
