#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<string.h>
using namespace std;
const int maxn = 1e4 + 10;
#define PI 3.14159
#define ll long long 
const int inf = 0x3f3f3f3f;
int n, m, q;
int i, j, k;
int T[maxn];
int main() {
	cin >> n;//T��Ԫ�ظ���
	for (i = 1; i <= n; i++) {
		cin >> T[i];
	}
	sort(T + 1, T + n + 1);//�൱��T������õ�����
	cin >> m;//��������
	int index = 0;
	int left = 1;
	int right = n;
	while (left <= right) {
		int mid = (right + left) / 2;
		if (T[mid] == m) {
			index = mid;
			break;
		}
		else if (T[mid] < m)
			left = mid + 1;
		else if (T[mid] > m)
			right = mid - 1;
	}
	cout << index;
}
