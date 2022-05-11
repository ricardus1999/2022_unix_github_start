#include <stdio.h>
int add(int a, int b);
long long sub(int a, int b);
long long mul(int a, int b);

int main() {
	char c;
	int a, b;
	scanf("%c %d %d", &c, &a, &b);
	long long result = 0;
	switch(c){
		case '+': result = add(a, b); break;
		case '-': result = sub(a, b); break;
		case '*': result = mul(a, b); break;	  
	}
	printf("%lld\n", result);
}

