#include<stdio.h>
int main() {
	int a = 3;
	int b = a << 1;
	int c = a ^ b;
	//正数的三码合一，算术移位：正数的左移右移都加零，负数左移加0，右移加1；用补码移动
	//逻辑移位即为无符号移动，都加0，左移乘2的几次方
	//原码 10000001
	//反码 11111110
	//补码 11111111
	printf("%d %d", b, c);
	//00000011
	//00000110
	//^为按位异或，即相同为0，不同为1，|为或，&为与
}