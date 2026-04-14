#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdint.h>

typedef struct bmp3xx_fifo_cfg
{
	uint8_t stop_on_full_en;
	uint8_t time_en;
	uint8_t press_en;
	uint8_t temp_en;
} _bmp3xx_barsotion_fifo_cfg_t;

typedef struct BMP3XX_DESC
{
	struct
	{
		float t1, t2, t3;
        float p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11;
	} _par;
	uint8_t address;
} _bmp3xx_barsotion_desc_t;


private:
    uint8_t _address_;
    struct
    {
        float t1, t2, t3;
        float p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11;
    } _par;
    uint8_t osr_reg;
    bool temp_flag;
    bool press_flag;
    uint32_t raw[2];
public:
    float temperature, pressure, altitude;
    uint8_t (*readRegister)(uint8_t reg, uint8_t *buf, uint8_t size);
    uint8_t (*writeRegister)(uint8_t reg, uint8_t *buf, uint8_t size);

#if defined(__cplusplus)
}
#endif
