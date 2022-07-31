#include <stdio.h>
#include <unistd.h>
#include <string.h>

char buf[200] ;

void do_fmt(){
	while(1){
		read(0,buf,200);
		if(!strncmp(buf,"quit",4))
			break;
		printf(buf);
	}
	return ;
}

void play(){
	puts("hello");
	do_fmt();
	return;
}

int main(){
	
	play();
	return 0;
}
// gcc fmt_str_level_2.c -z lazy -fpie -pie -o fmt_str_level_2_x64
