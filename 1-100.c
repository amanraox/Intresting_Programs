// How would you write a C program to print 1 to 100 without loop, recursion, or goto?
//mutual recursion;
#include<stdio.h> 
 
int i=1; 
 
void display(){ 
	printf("\n%d",i); 
	i++; 
	main(); 
} 
 
int main(){ 
	if(i==101){ 
		getch(); 
		return 0; 
	} 
	display(); 
} 

// cpp class (good but not valid for c)
#include <iostream> 
 
using namespace std; 
 
int i=0; 
 
class S 
{ 
 public: 
    S() 
    { 
        i++; 
        cout<<i<<endl; 
    } 
}; 
 
int main() 
{ 
    S A[100]; 
    return 0; 
} 
// simply dumb
printf(“1 2 3 4 5 … 97 98 99 100\n”);
// good 
#include<stdio.h> 
void hundred() {static int i=1; printf("%d\n",i++); } 
void  twenty(){ hundred(),hundred(),hundred(),hundred(),hundred(); }
void four() { twenty(),twenty(),twenty(),twenty(),twenty(); } 
int main() 
{ 
    four(),four(),four(),four(); 
} 
