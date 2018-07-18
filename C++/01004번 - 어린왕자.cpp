#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	freopen("input.txt", "r", stdin);
	int t, x1, x2, y1, y2;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		int n, cx, cy, r, tmp, ans;
		scanf("%d", &n);
		ans = 0;
		while (n--) {
			tmp = 0;
			scanf("%d %d %d", &cx, &cy, &r);
			if ((cx-x1)*(cx-x1) + (cy-y1)*(cy-y1) > r*r) tmp++;
			if ((cx-x2)*(cx-x2) + (cy-y2)*(cy-y2) > r*r) tmp++;
			ans += tmp % 2;
		}
		printf("%d\n", ans);
	}
	return 0;
}