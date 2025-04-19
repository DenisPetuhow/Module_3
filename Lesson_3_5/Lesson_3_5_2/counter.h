#pragma once


class Counter {
private:
    int value; // ѕриватное поле, нельз€ изменить напр€мую

public:
    Counter();

    Counter(int initialValue);

    void increment();

    void decrement();

    int getValue() const;
};