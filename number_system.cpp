//By Akash Pawar
#include<iostream>
using namespace std;

// decimal to binary function
void binary(int n){
      int j=0,a[100];
	while(n>0){
          a[j]=n%2;
		  n=n/2;
		    j++;
		 
	   }
	   cout<<"binay no = ";
	   for(int i=j-1;i>=0;i--){
		cout<<a[i];
	   }
}


// decimal to octal function
void octal(int n){
      int j=0,a[100];
	while(n>0){
          a[j]=n%8;
		  n=n/8;
		    j++;
		 
	   }
	   cout<<"octal no = ";
	   for(int i=j-1;i>=0;i--){
		cout<<a[i];
	   }
}


// decimal to hexadecimal function
void Hexa(int n){
      int j=0,a[100];
	while(n>0){
          a[j]=n%16;
		  n=n/16;
		    j++;
		 
	   }
	   cout<<"Hexadecimal = ";
	   for(int i=j-1;i>=0;i--){
		if(a[i]==10){
		     cout<<"A";	
		}else if(a[i]==11){
		     cout<<"B";	
		}else if(a[i]==12){
		     cout<<"C";	
		}else if(a[i]==13){
		     cout<<"D";	
		}else if(a[i]==14){
		     cout<<"E";	
		}else if(a[i]==15){
		     cout<<"F";	
		}else {
			cout<<a[i];
		}
	   }
}

//Main function
int main(){
     int n;	
     cout<<"enter a decimal number : ";
     cin>>n;
     binary(n);
     cout<<endl;
     octal(n);
     cout<<endl;
     Hexa(n);
return 0;
}


