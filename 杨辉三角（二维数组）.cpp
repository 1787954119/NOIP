//��ά����汾�ᵼ��һ��Ŀռ䱻�˷ѣ�ֻ�õ��˰������ 

#include <iostream>

using namespace std;

int main()
{
	int a[500][500] = {1};
	int n;
	cout << "Please input the n: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)//��0��ʼ�Ļ����ڶ���ѭ���൱��û���� 
	{
		for (int j = 0; j < i; ++j)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
