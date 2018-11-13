#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

template<typename arr>

class PointArray
{
    public:
        PointArray();
        PointArray(const arr pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print();
        int getSize();
        arr getpos(int);
        void clear();
        void push_back(const arr &p);
        void insert(const int, const arr &p);
        void remove(const int);

    private:
        int size;
        arr *points;
	void resize(int);
};

#endif // POINTARRAY_H
