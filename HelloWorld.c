#include <stdio.h>int main(void)		{	int i     = 012; // 八进制	float j   = 3.2e3f;	double k  = 3023.45;	char ch   = 'A'; //char字符类型	ch = 'C';	printf("%d, %c\n", ch, ch);	printf("%x\n", i); // a	printf("%X\n", i); // A	printf("%#x\n", i); //0xA	printf("%#X\n", i); //0XA, 推荐使用%#X	printf("i = %d, j = %f\n", i, j);	printf("%e\n", k); // 以科学计数法打印浮点数	/*	printf的用法	%d表示十进制输出	%x or %X表示十六进制输出	%o表示以八进制输出	*/	printf("Hello,World!\n");	return 0;}/*output67, CaA0xa0XAi = 10, j = 3200.0000003.023450e+03Hello,World!*/