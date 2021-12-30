/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *main;
	lv_obj_t *main_arc_1;
	lv_obj_t *main_lmeter_1;
	lv_obj_t *main_label_1;
	lv_obj_t *main_line_1;
	lv_obj_t *main_btn_1;
	lv_obj_t *main_btn_1_label;
	lv_obj_t *main_btn_2;
	lv_obj_t *main_btn_2_label;
	lv_obj_t *main_btn_3;
	lv_obj_t *main_btn_3_label;
	lv_obj_t *main_line_2;
	lv_obj_t *main_btn_4;
	lv_obj_t *main_btn_4_label;
	lv_obj_t *main_line_3;
	lv_obj_t *app;
	lv_obj_t *app_arc_1;
	lv_obj_t *app_img_1;
	lv_obj_t *app_img_2;
	lv_obj_t *app_img_3;
	lv_obj_t *app_img_4;
	lv_obj_t *app_btn_1;
	lv_obj_t *app_btn_1_label;
	lv_obj_t *setting;
	lv_obj_t *setting_arc_1;
	lv_obj_t *setting_btn_1;
	lv_obj_t *setting_btn_1_label;
	lv_obj_t *setting_img_1;
	lv_obj_t *setting_img_2;
	lv_obj_t *setting_img_3;
	lv_obj_t *setting_img_4;
	lv_obj_t *setting_label_1;
	lv_obj_t *setting_label_2;
	lv_obj_t *setting_label_3;
	lv_obj_t *setting_label_4;
	lv_obj_t *music;
	lv_obj_t *music_arc_1;
	lv_obj_t *music_img_1;
	lv_obj_t *music_img_3;
	lv_obj_t *music_img_4;
	lv_obj_t *music_img_5;
	lv_obj_t *music_label_2;
	lv_obj_t *music_label_3;
	lv_obj_t *music_btn_1;
	lv_obj_t *music_btn_1_label;
	lv_obj_t *music_imgbtn_1;
	lv_obj_t *music_imgbtn_1_label;
	lv_obj_t *Info;
	lv_obj_t *Info_arc_1;
	lv_obj_t *Info_btn_1;
	lv_obj_t *Info_btn_1_label;
	lv_obj_t *Info_img_1;
	lv_obj_t *Info_label_1;
	lv_obj_t *Info_label_2;
	lv_obj_t *Info_label_3;
	lv_obj_t *Info_label_4;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_main(lv_ui *ui);
void setup_scr_app(lv_ui *ui);
void setup_scr_setting(lv_ui *ui);
void setup_scr_music(lv_ui *ui);
void setup_scr_Info(lv_ui *ui);
LV_IMG_DECLARE(_SAsset13_alpha_50x51);
LV_IMG_DECLARE(_asset1_alpha_123x107);
LV_IMG_DECLARE(_inforgithub_alpha_120x120);
LV_IMG_DECLARE(_Asset4_alpha_120x120);
LV_IMG_DECLARE(_SAsset9_alpha_50x50);
LV_IMG_DECLARE(_Asset2_alpha_120x120);
LV_IMG_DECLARE(_Asset3_alpha_120x120);
LV_IMG_DECLARE(_settingadditional_alpha_100x100);
LV_IMG_DECLARE(_settingtheme_alpha_120x120);
LV_IMG_DECLARE(_SAsset7_alpha_59x88);
LV_IMG_DECLARE(_settingwifi_alpha_120x100);
LV_IMG_DECLARE(_SAsset11_alpha_50x50);
LV_IMG_DECLARE(_settingdisplay_alpha_120x120);
LV_IMG_DECLARE(_SAsset12_alpha_50x50);
LV_IMG_DECLARE(_music_alpha_285x211);

#ifdef __cplusplus
}
#endif
#endif