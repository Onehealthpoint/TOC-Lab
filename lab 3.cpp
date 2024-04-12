/*
String has even number of a's and b's over E = {a, b}
*/

#include<iostream>
using namespace std;

void q0(string,int);
void q1(string,int );
void q2(string,int);
void q3(string,int);

void q1(string s,int i)
{
	if(i==s.length())
{
	cout<< "NO.The string is not accepted\n";
	return;
}
if (s[i] == 'a')
	q0(s,i+1);
else if(s[i]=='b') {
	q3(s,i+1);
}
else{
	cout<<"NO.The string is not accepted\n";
	}
}

void q2(string s,int i)
{
	if(i==s.length())
	{
		cout<<"NO.The string is not accepted\n";
		return ;
	}
	if (s[i]=='a')
		q3(s,i+1);
	else if(s[i]=='b')
		q0(s,i+1);
	else{
	cout<<"NO.The string is not accepted\n";
	}
}
void q3(string s ,int i)
{
	if (i==s.length())
	{
		cout<<"NO.The string is not accepted \n";
		return ;
	}
	if(s[i]=='a')
		q2(s,i+1);
	else if(s[i]=='b'){
		q1(s,i+1);
	}
		else{
	cout<<"NO.The string is not accepted\n";
	}
}


void q0(string s ,int i)
{
	if (i==s.length())
	{
		cout<<"ok.The string is accepted \n";
		return ;
	}
	if(s[i]=='a')
		q1(s,i+1);
	else if(s[i]=='b'){
		q2(s,i+1);
	}	else{
	cout<<"NO.The string is not accepted\n";
	}
}
int main(){
	string S;
	cout<<"Enter the string\n";
	cin>>S;
	q0(S,0);	
}


