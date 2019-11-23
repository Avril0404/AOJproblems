#include <stdio.h>

int main(void) {
	int i,a;
	for(i = 1; scanf("%d", &a); i++){
		if(a == 0) break;
		printf("Case %d: %d\n", i, a);
	}
	return 0;
}
