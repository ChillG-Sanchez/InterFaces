#ifndef AUTO_H
#define AUTO_H

class Auto {
public:
    virtual void gyorsul() = 0;
    virtual double getSebesseg() const = 0;
    virtual ~Auto() = default;
};

#endif