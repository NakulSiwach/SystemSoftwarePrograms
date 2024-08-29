/*

Name : Nakul Siwach
Roll no. : MT2024096
Program :  1.b hard link

*/

#include<stdio.h>
#include<unistd.h>

int main(){
  const char*lf="hlink.txt";
	const char*t="h.txt";


	if(link(t,lf)!=0){
		perror("link");
		return 1;
	}
	printf("Hard link is created: %s -> %s\n",lf,t);


	return 0;
}



/*

./a.out
link: File exists

*/
