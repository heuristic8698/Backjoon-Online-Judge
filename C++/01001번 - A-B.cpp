#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <math.h>

int main() {

	int t;
	double x1, y1, r1, x2, y2, r2, r, d;

	scanf("%d", &t);

	while (t--) {
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		// �� �ͷ��� ��ġ�� ���� ���
		if (x1 == x2 && y1 == y2) {
			// �������� �Ÿ��� ���� ���
			if (r1 == r2) {
				// ������ ���� �� �ִ� ���� ���Ѵ�
				printf("-1\n");
			}
			else {
				printf("0\n");
			}
		}
		else {
			d = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
			d = sqrt(d);
			double f = fabs(r1 - r2);

			if (d == r1 + r2 || (d == f && r1 + r2>d)) {
				printf("1\n");
			}
			else if (f < d && d < r1 + r2) {
				printf("2\n");
			}
			else {
				printf("0\n");
			}
		}
	}
	return 0;
}