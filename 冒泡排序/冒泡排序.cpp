#include <iostream>

using namespace std;

void exchage(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void main()
{
	int n;
	int list[1000] = { 0 };
	cout << "���������������ݸ���n��" << endl;
	cin >> n;

	cout << "������" << n << "�����ݣ�" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	//ð������
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (list[j] > list[j + 1])
				exchage(&list[j], &list[j + 1]);
		}
	}
	cout << "���Ϊ��" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << endl;

	}
	system("pause");
}