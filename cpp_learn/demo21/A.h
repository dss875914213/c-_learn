#pragma once
template <class T=int> //����һ��ģ�壬����������ΪT��ע�⣺����û�зֺš�
class A //��ģ����ΪCompare
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