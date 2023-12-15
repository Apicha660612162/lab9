#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int M,int N){
	int x=0,y=0;
	 if(M<=0||N<=0){
	cout << "Invalid input";
  }
 while(y<M){
	while(x<N){
		cout << "O";
		x++;
	}
    cout <<endl;
  y++;
  x=0;
 }
 
 }








int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
