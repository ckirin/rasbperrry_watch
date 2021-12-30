/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_setting(lv_ui *ui){

	//Write codes setting
	ui->setting = lv_obj_create(NULL, NULL);

	//Write codes setting_arc_1
	ui->setting_arc_1 = lv_arc_create(ui->setting, NULL);

	//Write style LV_ARC_PART_BG for setting_arc_1
	static lv_style_t style_setting_arc_1_bg;
	lv_style_reset(&style_setting_arc_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_setting_arc_1_bg
	lv_style_set_bg_color(&style_setting_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setting_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setting_arc_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_arc_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_width(&style_setting_arc_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_setting_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_setting_arc_1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->setting_arc_1, LV_ARC_PART_BG, &style_setting_arc_1_bg);

	//Write style LV_ARC_PART_INDIC for setting_arc_1
	static lv_style_t style_setting_arc_1_indic;
	lv_style_reset(&style_setting_arc_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_setting_arc_1_indic
	lv_style_set_line_color(&style_setting_arc_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_setting_arc_1_indic, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->setting_arc_1, LV_ARC_PART_INDIC, &style_setting_arc_1_indic);
	lv_obj_set_pos(ui->setting_arc_1, 0, 0);
	lv_obj_set_size(ui->setting_arc_1, 480, 480);
	lv_arc_set_bg_angles(ui->setting_arc_1, 0, 360);
	lv_arc_set_angles(ui->setting_arc_1, 0, 90);
	lv_arc_set_rotation(ui->setting_arc_1, 0);
	lv_obj_set_style_local_pad_top(ui->setting_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_bottom(ui->setting_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_left(ui->setting_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_right(ui->setting_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);

	//Write codes setting_btn_1
	ui->setting_btn_1 = lv_btn_create(ui->setting, NULL);

	//Write style LV_BTN_PART_MAIN for setting_btn_1
	static lv_style_t style_setting_btn_1_main;
	lv_style_reset(&style_setting_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_btn_1_main
	lv_style_set_radius(&style_setting_btn_1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_setting_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setting_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setting_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_setting_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_setting_btn_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_setting_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_setting_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_setting_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setting_btn_1, LV_BTN_PART_MAIN, &style_setting_btn_1_main);
	lv_obj_set_pos(ui->setting_btn_1, 190, 400);
	lv_obj_set_size(ui->setting_btn_1, 100, 50);
	ui->setting_btn_1_label = lv_label_create(ui->setting_btn_1, NULL);
	lv_label_set_text(ui->setting_btn_1_label, "Setting");
	lv_obj_set_style_local_text_color(ui->setting_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->setting_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);

	//Write codes setting_img_1
	ui->setting_img_1 = lv_img_create(ui->setting, NULL);

	//Write style LV_IMG_PART_MAIN for setting_img_1
	static lv_style_t style_setting_img_1_main;
	lv_style_reset(&style_setting_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_img_1_main
	lv_style_set_image_recolor(&style_setting_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setting_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setting_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setting_img_1, LV_IMG_PART_MAIN, &style_setting_img_1_main);
	lv_obj_set_pos(ui->setting_img_1, 290, 250);
	lv_obj_set_size(ui->setting_img_1, 100, 100);
	lv_obj_set_click(ui->setting_img_1, true);
	lv_img_set_src(ui->setting_img_1,&_settingadditional_alpha_100x100);
	lv_img_set_pivot(ui->setting_img_1, 0,0);
	lv_img_set_angle(ui->setting_img_1, 0);

	//Write codes setting_img_2
	ui->setting_img_2 = lv_img_create(ui->setting, NULL);

	//Write style LV_IMG_PART_MAIN for setting_img_2
	static lv_style_t style_setting_img_2_main;
	lv_style_reset(&style_setting_img_2_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_img_2_main
	lv_style_set_image_recolor(&style_setting_img_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setting_img_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setting_img_2_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setting_img_2, LV_IMG_PART_MAIN, &style_setting_img_2_main);
	lv_obj_set_pos(ui->setting_img_2, 280, 80);
	lv_obj_set_size(ui->setting_img_2, 120, 120);
	lv_obj_set_click(ui->setting_img_2, true);
	lv_img_set_src(ui->setting_img_2,&_settingtheme_alpha_120x120);
	lv_img_set_pivot(ui->setting_img_2, 0,0);
	lv_img_set_angle(ui->setting_img_2, 0);

	//Write codes setting_img_3
	ui->setting_img_3 = lv_img_create(ui->setting, NULL);

	//Write style LV_IMG_PART_MAIN for setting_img_3
	static lv_style_t style_setting_img_3_main;
	lv_style_reset(&style_setting_img_3_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_img_3_main
	lv_style_set_image_recolor(&style_setting_img_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setting_img_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setting_img_3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setting_img_3, LV_IMG_PART_MAIN, &style_setting_img_3_main);
	lv_obj_set_pos(ui->setting_img_3, 90, 250);
	lv_obj_set_size(ui->setting_img_3, 120, 100);
	lv_obj_set_click(ui->setting_img_3, true);
	lv_img_set_src(ui->setting_img_3,&_settingwifi_alpha_120x100);
	lv_img_set_pivot(ui->setting_img_3, 0,0);
	lv_img_set_angle(ui->setting_img_3, 0);

	//Write codes setting_img_4
	ui->setting_img_4 = lv_img_create(ui->setting, NULL);

	//Write style LV_IMG_PART_MAIN for setting_img_4
	static lv_style_t style_setting_img_4_main;
	lv_style_reset(&style_setting_img_4_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_img_4_main
	lv_style_set_image_recolor(&style_setting_img_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setting_img_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setting_img_4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setting_img_4, LV_IMG_PART_MAIN, &style_setting_img_4_main);
	lv_obj_set_pos(ui->setting_img_4, 90, 80);
	lv_obj_set_size(ui->setting_img_4, 120, 120);
	lv_obj_set_click(ui->setting_img_4, true);
	lv_img_set_src(ui->setting_img_4,&_settingdisplay_alpha_120x120);
	lv_img_set_pivot(ui->setting_img_4, 0,0);
	lv_img_set_angle(ui->setting_img_4, 0);

	//Write codes setting_label_1
	ui->setting_label_1 = lv_label_create(ui->setting, NULL);
	lv_label_set_text(ui->setting_label_1, "WLAN");
	lv_label_set_long_mode(ui->setting_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->setting_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for setting_label_1
	static lv_style_t style_setting_label_1_main;
	lv_style_reset(&style_setting_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_label_1_main
	lv_style_set_radius(&style_setting_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_setting_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setting_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setting_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_label_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_setting_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_setting_label_1_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_setting_label_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_setting_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_setting_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_setting_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_setting_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->setting_label_1, LV_LABEL_PART_MAIN, &style_setting_label_1_main);
	lv_obj_set_pos(ui->setting_label_1, 90, 360);
	lv_obj_set_size(ui->setting_label_1, 110, 0);

	//Write codes setting_label_2
	ui->setting_label_2 = lv_label_create(ui->setting, NULL);
	lv_label_set_text(ui->setting_label_2, "EXTRA");
	lv_label_set_long_mode(ui->setting_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->setting_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for setting_label_2
	static lv_style_t style_setting_label_2_main;
	lv_style_reset(&style_setting_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_label_2_main
	lv_style_set_radius(&style_setting_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_setting_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setting_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setting_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_label_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_setting_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_setting_label_2_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_setting_label_2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_setting_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_setting_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_setting_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_setting_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->setting_label_2, LV_LABEL_PART_MAIN, &style_setting_label_2_main);
	lv_obj_set_pos(ui->setting_label_2, 287, 360);
	lv_obj_set_size(ui->setting_label_2, 100, 0);

	//Write codes setting_label_3
	ui->setting_label_3 = lv_label_create(ui->setting, NULL);
	lv_label_set_text(ui->setting_label_3, "THEME");
	lv_label_set_long_mode(ui->setting_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->setting_label_3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for setting_label_3
	static lv_style_t style_setting_label_3_main;
	lv_style_reset(&style_setting_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_label_3_main
	lv_style_set_radius(&style_setting_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_setting_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setting_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setting_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_label_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_setting_label_3_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_setting_label_3_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_setting_label_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_setting_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_setting_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_setting_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_setting_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->setting_label_3, LV_LABEL_PART_MAIN, &style_setting_label_3_main);
	lv_obj_set_pos(ui->setting_label_3, 280, 210);
	lv_obj_set_size(ui->setting_label_3, 120, 0);

	//Write codes setting_label_4
	ui->setting_label_4 = lv_label_create(ui->setting, NULL);
	lv_label_set_text(ui->setting_label_4, "DISPALY");
	lv_label_set_long_mode(ui->setting_label_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->setting_label_4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for setting_label_4
	static lv_style_t style_setting_label_4_main;
	lv_style_reset(&style_setting_label_4_main);

	//Write style state: LV_STATE_DEFAULT for style_setting_label_4_main
	lv_style_set_radius(&style_setting_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_setting_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setting_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setting_label_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_label_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_setting_label_4_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_setting_label_4_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_setting_label_4_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_setting_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_setting_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_setting_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_setting_label_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->setting_label_4, LV_LABEL_PART_MAIN, &style_setting_label_4_main);
	lv_obj_set_pos(ui->setting_label_4, 90, 210);
	lv_obj_set_size(ui->setting_label_4, 120, 0);

	//Init events for screen
	events_init_setting(ui);
}