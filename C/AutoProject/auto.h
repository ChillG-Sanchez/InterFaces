#ifndef AUTO_H
#define AUTO_H

typedef struct Auto {
    void (*gyorsul)(struct Auto* self);
    double (*getSebesseg)(struct Auto* self);
} Auto;

#endif