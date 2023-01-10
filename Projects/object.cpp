#include <iostream>

using namespace std;

template <class T1, class T2>
class ll
{
private:
    T1 key;
    T2 value;

public:
    ll *next;
    ll *previous;
    void insert(T1 key, T2 value, ll *foot)
    {
        this->key = key;
        this->value = value;
        foot->previous->next = this;
        this->next = foot;
        this->previous = foot->previous;
        this->previous = this;
    }
};

class object
{
    ll<int, int> *head;
    ll<int, int> *foot;

public:
    object()
    {
        this->head->next = this->foot;
        this->head->previous = NULL;
        this->foot->next = NULL;
        this->foot->previous = this->head;
    }

    template <class Key, class Value>
    void insert(Key key, Value value)
    {
        ll<Key, Value> l;
        l->insert(key, value, this->foot);
    }
    void print()
    {
    }
};

int main()
{
    object r;
    r.insert<string, string>("name", "roman");
    r.insert<string, int>("id", 3);
    r.print();
    return 0;
}