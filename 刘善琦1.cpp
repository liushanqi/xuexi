#include<iostream> 
using namespace std;  
void bitDisplay(unsigned value); 
int main() 
{ 
unsigned x;  
cout << "Enter an unsigned integer: "; 
cin >> x; 
bitDisplay(x); 
x>>=4;  
cout<<"Right 4-bit\n"; 
bitDisplay(x); 
}  
void bitDisplay(unsigned value) 
{ 
unsigned c;  
unsigned bitmask = 1<<31; 
cout << value << " = \t"; 
for( c=1; c<=32; c++ ) 
{ 
cout << ( value&bitmask ? '1' : '0' ); 
value <<= 1; 
if( c%8 == 0 )  
cout << ' ';  
}  
cout << endl; 
}  
