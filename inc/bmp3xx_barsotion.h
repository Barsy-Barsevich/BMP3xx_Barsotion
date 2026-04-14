#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include "bmp3xx_barsotion_regmap.h"
#include "bmp3xx_barsotion_const.h"
#include "bmp3xx_barsotion_types.h"

int bmp3xx_get_fatal_err_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_cmd_err_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_conf_err_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_cmd_rdy_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_drdy_press_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_drdy_temp_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_por_detected_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_fifo_wm_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_fifo_full_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_get_drdy_status(struct bmp3xx_desc *desc, bool *status);
int bmp3xx_set_fifo_config(struct bmp3xx_desc *desc, const struct bmp3xx_fifo_cfg *cfg);
int bmp3xx_get_fifo_config(struct bmp3xx_desc *desc, struct bmp3xx_fifo_cfg *cfg);
int bmp3xx_set_fifo_subsampling(struct bmp3xx_desc *desc, uint8_t subsampling);
int bmp3xx_get_fifo_subsampling(struct bmp3xx_desc *desc, uint8_t *subsampling)

#if defined(__cplusplus)
}
#endif

