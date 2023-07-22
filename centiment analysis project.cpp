#include<iostream>
#include<cstring>
using namespace std;
struct NB{
	char word[50];
	int positivefreq,negativefreq;
	float positiveprob,negativeprob;
};



















void token(char dataarray[], char label,NB arr[], int &count)
{	char tok[20][30] , del[2]=" ";
	
	char* str;
	
	int c=0;
	
	str=strtok(dataarray,del);

	while(str){
		strcpy(tok[c], str);
		
		c++;
			
		str=strtok(NULL,del);
		 
			 }
	 
}

void dataset(NB arr[],int count){
	
	char dataarray[5][30], label[5];
	
	strcpy(dataarray[0],"it was a waste of time");
	label[0]='N';
	
	strcpy(dataarray[1],"it was a boring film");
	label[1]='N';
	
	strcpy(dataarray[2],"it was a pathetic film");
	label[2]='N';

	strcpy(dataarray[3],"i loved this film");
	label[3]='P';

	strcpy(dataarray[4],"it is an amazing film");
	label[4]='P';
	
	
	for(int i=0; i<5; i++){
	
	token(dataarray[i],label[i],arr,count);
}	
}

int main(){
	char dataarray[5][30],label[5],tokens[50][30];
	
	int count=0;
	
	NB arr[18];
	
	dataset(arr,count);
	//token(dataarray,tokens);	

}
