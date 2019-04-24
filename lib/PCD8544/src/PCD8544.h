#ifndef PCD8544_H
#define PCD8544_H

#include <stdint.h>

class PCD8544 {
private:
    uint8_t port;
public:
    PCD8544()
    {
        this->port = 1;
    }
};

#endif //PCD8544_H
