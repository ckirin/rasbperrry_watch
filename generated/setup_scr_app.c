/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_app(lv_ui *ui){

	//Write codes app
	ui->app = lv_obj_create(NULL, NULL);

	//Write codes app_arc_1
	ui->app_arc_1 = lv_arc_create(ui->app, NULL);

	//Write style LV_ARC_PART_BG for app_arc_1
	static lv_style_t style_app_arc_1_bg;
	lv_style_reset(&style_app_arc_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_app_arc_1_bg
	lv_style_set_bg_color(&style_app_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_app_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_app_arc_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_app_arc_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_width(&style_app_arc_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_app_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_app_arc_1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->app_arc_1, LV_ARC_PART_BG, &style_app_arc_1_bg);

	//Write style LV_ARC_PART_INDIC for app_arc_1
	static lv_style_t style_app_arc_1_indic;
	lv_style_reset(&style_app_arc_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_app_arc_1_indic
	lv_style_set_line_color(&style_app_arc_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_app_arc_1_indic, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->app_arc_1, LV_ARC_PART_INDIC, &style_app_arc_1_indic);
	lv_obj_set_pos(ui->app_arc_1, 0, 0);
	lv_obj_set_size(ui->app_arc_1, 480, 480);
	lv_arc_set_bg_angles(ui->app_arc_1, 0, 360);
	lv_arc_set_angles(ui->app_arc_1, 270, 360);
	lv_arc_set_rotation(ui->app_arc_1, 0);
	lv_obj_set_style_local_pad_top(ui->app_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_bottom(ui->app_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_left(ui->app_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_right(ui->app_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);

	//Write codes app_img_1
	ui->app_img_1 = lv_img_create(ui->app, NULL);

	//Write style LV_IMG_PART_MAIN for app_img_1
	static lv_style_t style_app_img_1_main;
	lv_style_reset(&style_app_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_app_img_1_main
	lv_style_set_image_recolor(&style_app_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_img_1, LV_IMG_PART_MAIN, &style_app_img_1_main);
	lv_obj_set_pos(ui->app_img_1, 87, 96);
	lv_obj_set_size(ui->app_img_1, 123, 107);
	lv_obj_set_click(ui->app_img_1, true);
	lv_img_set_src(ui->app_img_1,&_asset1_alpha_123x107);
	lv_img_set_pivot(ui->app_img_1, 0,0);
	lv_img_set_angle(ui->app_img_1, 0);

	//Write codes app_img_2
	ui->app_img_2 = lv_img_create(ui->app, NULL);

	//Write style LV_IMG_PART_MAIN for app_img_2
	static lv_style_t style_app_img_2_main;
	lv_style_reset(&style_app_img_2_main);

	//Write style state: LV_STATE_DEFAULT for style_app_img_2_main
	lv_style_set_image_recolor(&style_app_img_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_img_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_img_2_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_img_2, LV_IMG_PART_MAIN, &style_app_img_2_main);
	lv_obj_set_pos(ui->app_img_2, 280, 91);
	lv_obj_set_size(ui->app_img_2, 120, 120);
	lv_obj_set_click(ui->app_img_2, true);
	lv_img_set_src(ui->app_img_2,&_Asset2_alpha_120x120);
	lv_img_set_pivot(ui->app_img_2, 0,0);
	lv_img_set_angle(ui->app_img_2, 0);

	//Write codes app_img_3
	ui->app_img_3 = lv_img_create(ui->app, NULL);

	//Write style LV_IMG_PART_MAIN for app_img_3
	static lv_style_t style_app_img_3_main;
	lv_style_reset(&style_app_img_3_main);

	//Write style state: LV_STATE_DEFAULT for style_app_img_3_main
	lv_style_set_image_recolor(&style_app_img_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_img_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_img_3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_img_3, LV_IMG_PART_MAIN, &style_app_img_3_main);
	lv_obj_set_pos(ui->app_img_3, 80, 260);
	lv_obj_set_size(ui->app_img_3, 120, 120);
	lv_obj_set_click(ui->app_img_3, true);
	lv_img_set_src(ui->app_img_3,&_Asset4_alpha_120x120);
	lv_img_set_pivot(ui->app_img_3, 0,0);
	lv_img_set_angle(ui->app_img_3, 0);

	//Write codes app_img_4
	ui->app_img_4 = lv_img_create(ui->app, NULL);

	//Write style LV_IMG_PART_MAIN for app_img_4
	static lv_style_t style_app_img_4_main;
	lv_style_reset(&style_app_img_4_main);

	//Write style state: LV_STATE_DEFAULT for style_app_img_4_main
	lv_style_set_image_recolor(&style_app_img_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_img_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_img_4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_img_4, LV_IMG_PART_MAIN, &style_app_img_4_main);
	lv_obj_set_pos(ui->app_img_4, 280, 260);
	lv_obj_set_size(ui->app_img_4, 120, 120);
	lv_obj_set_click(ui->app_img_4, true);
	lv_img_set_src(ui->app_img_4,&_Asset3_alpha_120x120);
	lv_img_set_pivot(ui->app_img_4, 0,0);
	lv_img_set_angle(ui->app_img_4, 0);

	//Write codes app_btn_1
	ui->app_btn_1 = lv_btn_create(ui->app, NULL);

	//Write style LV_BTN_PART_MAIN for app_btn_1
	static lv_style_t style_app_btn_1_main;
	lv_style_reset(&style_app_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_app_btn_1_main
	lv_style_set_radius(&style_app_btn_1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_app_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_app_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_app_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_app_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_app_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_app_btn_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_app_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_app_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_app_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_btn_1, LV_BTN_PART_MAIN, &style_app_btn_1_main);
	lv_obj_set_pos(ui->app_btn_1, 190, 400);
	lv_obj_set_size(ui->app_btn_1, 100, 50);
	ui->app_btn_1_label = lv_label_create(ui->app_btn_1, NULL);
	lv_label_set_text(ui->app_btn_1_label, "App");
	lv_obj_set_style_local_text_color(ui->app_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->app_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);

	//Init events for screen
	events_init_app(ui);
}