#include <iostream>

int main() {
	int V = 0;
	printf("Input Value\n");

	scanf_s("%d", &V);

	while (V != 1 && V != 0) {
		if (V % 2 == 0) {
			V = V / 2 ;
		}
		else if (V % 2 == 1) {
			V = 3 * V - 1;
		}
		printf("%d\n", V);
	}

	system("pause");
}