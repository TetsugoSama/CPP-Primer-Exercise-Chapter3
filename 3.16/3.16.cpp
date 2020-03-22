// 3.16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v1;
    cout << "v1的大小为：" << v1.size() << endl;
    for (auto v : v1)
        cout << v << ' ';
    cout << endl;

    vector<int> v2(10);
    cout << "v2的大小为:" << v2.size() << endl;
    for (auto v : v2)
        cout << v << ' ';
    cout << endl;

    vector<int> v3(10, 42);
    cout << "v3的大小为:" << v3.size() << endl;
    for (auto v : v3)
        cout << v << ' ';
    cout << endl;

    vector<int> v4{ 10 };
    cout << "v4的大小为:" << v4.size() << endl;
    for (auto v : v4)
        cout << v << ' ';
    cout << endl;

    vector<int> v5{10,42};
    cout << "v5的大小为:" << v5.size() << endl;
    for (auto v : v5)
        cout << v << ' ';
    cout << endl;

    vector<string> v6{ 10 };
    cout << "v6的大小为:" << v6.size() << endl;
    for (auto v : v6)
        cout << v << ' ';
    cout << endl;

    vector<string> v7{ 10,"hi" };
    cout << "v7的大小为:" << v7.size() << endl;
    for (auto v : v7)
        cout << v << ' ';
    cout << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
