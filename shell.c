#include <stdio.h>
#include <unistd.h>
#define MAX 50

int main(){
	char *args[MAX];
	int should_run = 1;
	
	while(should_run){
		printf("csh>");
		fflush(stdout);
//armazenar em args o comando as er executado > processo pai
//criar processo filho
//usar a função execvp para executar o comando digitado

	pid = fork;

	if(pid < 0){
		printf("erro");
		exit(1);
	}
	else if(pid == 0){
	//processo filho
	execvp(args[0],args);
	}
	else{
	//processo pai
	}
}
