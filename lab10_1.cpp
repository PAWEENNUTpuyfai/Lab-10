#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	double pre,in,total,N=0;
	int year =1;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	pre=loan;
	in=pre*(rate/100);
	total=pre+in;
	N=total-pay;
	if(total<=pay){
		pay =total;
		N = 0;
			
		
	}
		
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << pre;
	cout << setw(13) << left << in;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << N;
	cout << "\n";	
    year =2;
	while(N!=0){
	    
		pre=N;
		in=pre*(rate/100);
		total=pre+in;
		N=total-pay;
		if(N<=0){
			pay=total;
			N=0;
			
		}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << pre;
		cout << setw(13) << left << in;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << N;
		cout << "\n";	
	
		year++;
	
	}
}	