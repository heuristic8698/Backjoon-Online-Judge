#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <Windows.h>
int main() {

	int t, x1, y1, r1, x2, y2, r2, ans;
	freopen("input.txt", "r", stdin);
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		int hap = (r1 + r2)*(r1 + r2);
		int cha = (r1 - r2)*(r1 - r2);
		int dist = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		
		if (dist == 0 && r1 == r2) {
			ans = -1;
		}
		else if (dist == hap || dist == cha) {
			ans = 1;
		}
		else if (cha < dist && dist < hap) {
			ans = 2;
		}
		else{
			ans = 0;
		}
		printf("%d\n", ans);
	}
	system("pause");
	return 0;
}