#pragma once
template <class T=int> //声明一个模板，虚拟类型名为T。注意：这里没有分号。
class A //类模板名为Compare
{
public:
    A(T a, T b)
    {
        x = a; y = b;
    }
    T max()
    {
        return (x > y) ? x : y;
    }
    T min()
    {
        return (x < y) ? x : y;
    }
private:
    T x, y;
};