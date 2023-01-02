#include <iostream>
#include <string>
#include <queue>
#include <stack>

int main()
{
    std::queue<std::string> q;

    q.push("データ1");
    q.push("データ2");
    q.push("データ3");

    std::cout << "***** キュー *****" << std::endl;

    while (!q.empty())
    {
        std::cout << "front: " << q.front() << std::endl;
        q.pop();
    }

    std::stack<std::string> s;

    s.push("データ1");
    s.push("データ2");
    s.push("データ3");

    std::cout << "***** スタック *****" << std::endl;

    while (!s.empty())
    {
        std::cout << "top: " << s.top() << std::endl;
        s.pop();
    }

    return 0;
}