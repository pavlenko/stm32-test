#ifndef PCD8544_H
#define PCD8544_H

#include <stdint.h>

enum PCD8544_DC {
    PCD8544_DC_COMMAND,
    PCD8544_DC_DATA
};

typedef enum PCD8544_DisplayMode_t {
    PCD8544_DISPLAY_MODE_ALL_WHITE = 0,
    PCD8544_DISPLAY_MODE_ALL_BLACK = 1,
    PCD8544_DISPLAY_MODE_NORMAL    = 4,
    PCD8544_DISPLAY_MODE_INVERTED  = 5,
} PCD8544_DisplayMode_t;

#define PCD8544_FUNCTION_SET(_PD_, _V_, _H_) (0x20 | (0x07 & ((_PD_ << 2) | (_V_ << 1) | _H_)))
#define PCD8544_DISPLAY_CONTROL(_D_, _E_)    (0x08 | (0x05 & ((_D_ << 2) | _E_)))
#define PCD8544_VOP(_vop_)                   (0x80 | (0x7F & _vop_))
#define PCD8544_TEMP_COEFFICIENT(_tc_)       (0x04 | (0x03 & _tc_))
#define PCD8544_BIAS(_bias_)                 (0x10 | (0x07 & _bias_))

class PCD8544 {
private:
    void (* _setMode) (uint8_t);
    void (* _setData) (uint8_t);

    /**
     * Set display mode
     *
     * @param mode
     */
    void _setDisplayMode(PCD8544_DisplayMode_t mode);
public:
    /**
     * Instantiate driver with specific interface adapter functions
     *
     * @param setMode
     * @param setData
     */
    PCD8544(void (* setMode) (uint8_t), void (* setData) (uint8_t));

    /**
     * @TODO maybe pass specific parameters
     */
    void initialize();

    /**
     * Set display mode
     *
     * @param mode
     */
    void setDisplayMode(PCD8544_DisplayMode_t mode);

    /**
     * Select display column (0...83)
     *
     * @param col
     */
    void setCol(uint8_t col);

    /**
     * Select display row (0...5)
     *
     * @param row
     */
    void setRow(uint8_t row);
};

#endif //PCD8544_H
