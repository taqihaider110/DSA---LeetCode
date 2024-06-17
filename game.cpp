#include<iostream>
using namespace std;

int main(){
	char alphabets[7][4];
	char x='A';
	string word="";
	int numal=0,j=0;
	while(numal<=26){
		for(int i=0;i<4;i++){
			 alphabets[j][i]=x++;
			 numal++;
		}
		j++;
	}
	for(int j=0;j<7;j++){
		for(int i=0 ;i<4;i++){
			cout<<alphabets[j][i];
			if(j==6&&i==1){
				break;
			}
		}
		cout<<endl;
	}
	
	cout<<"Enter Length of word:"<<endl;
	int len;
	cin>>len;
	int idx1[len],idx2[len];
	
	for(int i=0;i<len;i++){
		cout<<"Enter Column of character #"<<i+1<<" of word: ";
		cin>>idx1[i];
		idx1[i]--;
	}
	
	cout<<endl<<endl;
	
	for(int i=0;i<len;i++){
		for(int j=0;j<7;j++){
			if(j==6 && idx1[i]>1){
				break;
			}
			cout<<alphabets[j][idx1[i]];
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	for(int i=0;i<len;i++){
		cout<<"Enter Column of character #"<<i+1<<" of word: ";
		cin>>idx2[i];
		idx2[i]--;
	}
	
	for(int i=0;i<len;i++){
		word+=alphabets[idx2[i]][idx1[i]];
	}
	
	cout<<endl<<word<<endl;
	 
}