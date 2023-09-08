#ifndef LISTACONT_H_INCLUDED
#define LISTACONT_H_INCLUDED

class ListaCont
{
    private:
        int max;
        int length;
        int *nodes;
    public:
        ListaCont(int size);
        ~ListaCont();

        int get(int index) const;
        void set(int index, int value);
        void insertEnd(int value);
        void removeEnd();
        void insert(int index, int value);
        void remove(int index);
        void insertStart(int value);
        void removeStart();
        void print();

};

#endif //LISTACONT_H_INCLUDED