#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdint.h>

typedef struct ERR_REG
{
	uint8_t fatal_err:1;
	uint8_t cmd_err:1;
	uint8_t conf_err:1;
	uint8_t __dummy:5;
} _bmp3xx_barsotion_err_reg_t;

typedef struct STATUS
{
	uint8_t __dummy1:4;
	uint8_t cmd_rdy:1;
	uint8_t drdy_press:1;
	uint8_t drdy_temp:1;
	uint8_t __dummy2:1;
} _bmp3xx_barsotion_status_t;

typedef struct EVENT
{
	uint8_t por_detected:1;
	uint8_t __dummy:7;
} _bmp3xx_barsotion_event_t;

typedef struct INT_STATUS
{
	uint8_t fwm_int:1;
	uint8_t ffull_int:1;
	uint8_t __dummy1:1;
	uint8_t drdy:1;
	uint8_t __dummy2:4;
} _bmp3xx_barsotion_int_status_t;

typedef struct FIFO_CONFIG_1
{
	uint8_t fifo_en:1;
	uint8_t fifo_stop_on_full:1;
	uint8_t fifo_time_en:1;
	uint8_t fifo_press_en:1;
	uint8_t fifo_temp_en:1;
	uint8_t __dummy:3;
} _bmp3xx_barsotion_fifo_config_1_t;

typedef struct FIFO_CONFIG_2
{
	uint8_t fifo_subsampling:3;
	uint8_t data_select:2;
	uint8_t __dummy:3;
} _bmp3xx_barsotion_fifo_config_2_t;

typedef struct INT_CTRL
{
	uint8_t int_od:1;
	uint8_t int_level:1;
	uint8_t int_latch:1;
	uint8_t fwtm_en:1;
	uint8_t ffull_en:1;
	uint8_t __dummy1:1;
	uint8_t drdy_en:1;
	uint8_t __dummy2:1;
} _bmp3xx_barsotion_int_ctrl_t;

typedef struct IF_CONF
{
	uint8_t spi3:1;
	uint8_t i2c_wdt_en:1;
	uint8_t i2c_wdt_sel:1;
	uint8_t __dummy:5;
} _bmp3xx_barsotion_if_conf_t;

typedef struct PWR_CTRL
{
	uint8_t press_en:1;
	uint8_t temp_en:1;
	uint8_t __dummy1:2;
	enum BMP3XX_MODE mode:2;
	uint8_t __dummy2:2;
} _bmp3xx_barsotion_pwr_ctrl_t;

typedef struct OSR
{
	enum BMP3XX_OSR osr_p:3;
	enum BMP3XX_OSR osr_t:3;
	uint8_t __dummy:2;
} _bmp3xx_barsotion_osr_t;

typedef struct CONFIG
{
	uint8_t __dummy1:1;
	enum BMP3XX_IIR_FILT_COEF iir_filter:3;
	uint8_t __dummy2:4;
} _bmp3xx_barsotion_config_t;

#if defined(__cplusplus)
}
#endif

