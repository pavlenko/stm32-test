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
#define PCD8544_VOP(_vop_)                   (0x80 | (0x7F & _vop_))

class PCD8544 {
private:
    void (* _setMode) (uint8_t);
    void (* _setData) (uint8_t);

    /**
     * Set extended instruction enabled flag
     *
     * @param enabled
     */
    void _setExtendedInstruction(bool enabled);

    /**
     * Set temperature coefficient value
     *
     * @param tc
     */
    void _setTemperatureCoefficient(uint8_t tc);

    /**
     * Set bias value
     *
     * @param bias
     */
    void _setBias(uint8_t bias);

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
     * Set temperature coefficient
     *
     * @param tc
     */
    void setTemperatureCoefficient(uint8_t tc);

    /**
     * Set bias
     *
     * @param bias
     */
    void setBias(uint8_t bias);

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
