#pragma once
#include <iostream>
using namespace std;
template <class T> class my_vector {
    T* vect;
    // общий объем памяти
    T s;
    // текущее количество 
    T n;

public:

    int& operator [] (int index)
    {
        return vect[index];
    }

    my_vector()
    {
        vect = new T[1];
        s = 1;
        n = 0;
    }
    void push(T data)
    {
        if (n == s) {
            T* temp = new T[2 * s];
            for (T i = 0; i < s; i++) {

                temp[i] = vect[i];

            }
            delete[] vect;
            s *= 2;
            vect = temp;
        }
        vect[n] = data;
        n++;
    }
    void push(T data, T index)
    {
        if (index == s)
            push(data);
        else
            vect[index] = data;
    }
    T pop(T index)
    {
        if (index < n)
            return vect[index];
    }
    T pop()
    {
            return vect[n--];
    }
    T size()
    {
        return n;
    }
    T get_s()
    {
        return s;
    }
    void resize()
    {
        s *= 2;
    }
    void print()
    {
        for (T i = 0; i < n; i++) {
            cout << vect[i] << " ";
        }
        cout << endl;
    }
};
