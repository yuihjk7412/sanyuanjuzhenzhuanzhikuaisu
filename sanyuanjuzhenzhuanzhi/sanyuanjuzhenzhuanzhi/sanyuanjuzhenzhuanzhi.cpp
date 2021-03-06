// sanyuanjuzhenzhuanzhi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "transfer.h"

int main()
{
	transfer a;
	printf("原矩阵行数、列数： ");
	scanf_s("%d%d", &a.M.tu, &a.M.nu);
	printf("非零元素总数： ");
	scanf_s("%d", &a.M.tu);
	printf("输入各个非零元素的行、列、数值：\n");
	for (int i = 1; i <=a.M.tu; ++i)
		scanf_s("%d%d%d", &a.M.data[i].i, &a.M.data[i].j, &a.M.data[i].e);

	a.transfermatrix(a.M, a.T);

	printf("转置后行数、列数、非零元素总数分别为：\n%d     %d     %d\n\n", a.T.mu, a.T.nu, a.T.tu);
	printf("三元组值为：\n");
	for (int t = 1; t <= a.T.tu; ++t)
		printf("%d     %d     %d\n", a.T.data[t].i, a.T.data[t].j, a.T.data[t].e);
	return 1;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
