#include<iostream>
#include<string>
using namespace std;

/*MAKE A PROGRAM THAT TURN A STRING TO BINARY
start
	input value of name;
	 AscII= 0;
	 
	msg[]= name;
	for (i=0 to i= name.length-1)
		AscII= (int) msg[i];
	while(AscII>0)
		{
		AscII/= 2;
		print(AscII%2)
		}	
		endl
end			
	
*/
const int binary=2;
const int octal=8;
void print(int bin[], int size){
	for(int i=size-1; i>=0; i--)
			cout<< bin[i];
}
void decimal_to_system(int &AscII, int bin[], int size, int system)
{
		int counter =0;
		while(AscII>0)
		{
			bin[counter]= AscII%system;
			AscII/=system;
			counter++;
			
		}
		print(bin, 8);
}
void str_to_decimal( char arr[], int size){
	int bin[8];
	int AscII=0;
	for(int i=0;i<size; i++)
	{
		cout<< arr[i]<< " is in binary: ";
		// make a func that==> stores ints inside the array
		AscII= (int) arr[i];
		
		decimal_to_system(AscII, bin, 8, binary);
	
		
		cout<<"\n";
	}
}
void accept_data(){
string name;
	cout<<"Enter Name: ";
	cin>> name;
	char msg[name.length()];
	for(int i=0; i< name.length(); i++)
		msg[i]=name[i];
		
	str_to_decimal(msg, name.length());
		
}





int main()
{
//Accept data[name], and make array of characeters[msg]
	accept_data();
// for loop func that loops through a array and coundown through the decimal number

	
}

