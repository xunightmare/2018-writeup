#include <stdio.h>


//获取传入的参数和最后输出的结果的对应关系 
//int main(){
//	char s[]="\x61\x4c\x67\x59\x69\x29\x6e\x42\x62\x0d\x65\x71\x66\x34\x6a\xc6\x6d\x8a\x6c\x7f\x7b\xae\x7a\x92\x7d\xec\x5f\x57";
//	for(int i=0;i<14;i++){
//		printf("%d: %x\n", i, (s[i*2]^s[i*2+1])&0xff);
//	}
//
//} 


// 生成flag 
int main(){
	char s[]="aginbefjml{z}_";   // 每个代码块第一个操作字符，按照代码块的顺序排列 
	int n[]={6, 9, 0, 1, 10, 0, 8, 0, 11, 2, 3, 1, 13, 4, 5, 2, 7, 2, 3, 1, 12} ; //每次调用的代码块 
	for(int i=0;i<21;i++){
		printf("%c", s[n[i]]);  // 输出字符组成flag 
	}
} 
