#include <iostream>
#include <stdio.h>
#include <stdlib.h>
char tablet [3][3];
char nowplayer = 'x';
char playerfind = tablet[0][0];

void start(){

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			tablet[i][j] = '_';

		}
	}

}

bool winner(){
//horizontal
	char playerfind = tablet[0][0];
	for(int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			if(tablet[i][j] == '_'){
				break; break;
			}if(playerfind == tablet[i][j]){
				break; break;

			}
			playerfind = tablet[i][j];
			if(j==2){
				printf("is winner %c",playerfind);
				return true;
			}
		}

	}

	//vertical
	playerfind = tablet[0][0];

	for(int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			if(tablet[j][i]== '_'){
				break; break;
			}if(playerfind == tablet[j][i]){
				break; break;

			}
			playerfind = tablet[j][i];
			if(j==2){
				printf("is winner %c",playerfind);
				return true;
			}
		}

	}
	//diagonal left to rigth
	 playerfind = tablet[0][0];
	for(int i =0; i <3; i++){
		if(tablet[i][i] == '_'){
			break;
				}if(playerfind == tablet[i][i]){
					break;
				}
				playerfind = tablet[i][i];
				if(i==2){
					printf("is winner %c",playerfind);
					return true;
				}
			}


	//right to left
 playerfind = tablet[0][2];
for(int i =2; i >=0; i--){
	if(tablet[2-i][i]== '_'){
		break;
			}if(playerfind == tablet[2-i][i]){
				break;
			}
			playerfind = tablet[2-i][i];
			if(i==0){
				printf("is winner %c",playerfind);
				return true;
			}
		}
	return false;
}

void downtablet(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("_\t",tablet[i][j]);
	}
		printf("\n");
}
}

bool empate(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		if(tablet[i][j] == '_'){
		return false;

		}
		}
	
	}
		printf("is a empate \n");
		return true;
}
int main() {
	start();
	while(!winner() && !empate()){

	downtablet();
	int row = 0;
	int col = 0;
	printf("in that fill you want play? %c: ",nowplayer);
	scanf("%d",&row);
	printf("in that column you want play? %c: ",nowplayer);
	scanf("%d",&col);
	if(tablet[row][col]  != '_'){
		printf("this box is full , try again ");

	}else{
	tablet[row][col]=nowplayer;
	if(nowplayer =='x'){
		nowplayer = 'o';

	}else{
	nowplayer = 'x';
		}
	}
	}
	printf("\n");
	downtablet();
	printf("\n");
system("pause");
}



