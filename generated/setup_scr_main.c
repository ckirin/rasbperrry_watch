/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_main(lv_ui *ui){

	//Write codes main
	ui->main = lv_obj_create(NULL, NULL);

	//Write codes main_arc_1
	ui->main_arc_1 = lv_arc_create(ui->main, NULL);

	//Write style LV_ARC_PART_BG for main_arc_1
	static lv_style_t style_main_arc_1_bg;
	lv_style_reset(&style_main_arc_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_main_arc_1_bg
	lv_style_set_bg_color(&style_main_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_arc_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_arc_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_width(&style_main_arc_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_main_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_main_arc_1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->main_arc_1, LV_ARC_PART_BG, &style_main_arc_1_bg);

	//Write style LV_ARC_PART_INDIC for main_arc_1
	static lv_style_t style_main_arc_1_indic;
	lv_style_reset(&style_main_arc_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_main_arc_1_indic
	lv_style_set_line_color(&style_main_arc_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_main_arc_1_indic, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->main_arc_1, LV_ARC_PART_INDIC, &style_main_arc_1_indic);
	lv_obj_set_pos(ui->main_arc_1, 0, 0);
	lv_obj_set_size(ui->main_arc_1, 480, 480);
	lv_arc_set_bg_angles(ui->main_arc_1, 315, 225);
	lv_arc_set_angles(ui->main_arc_1, 0, 180);
	lv_arc_set_rotation(ui->main_arc_1, 0);
	lv_obj_set_style_local_pad_top(ui->main_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_bottom(ui->main_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_left(ui->main_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_right(ui->main_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);

	//Write codes main_lmeter_1
	ui->main_lmeter_1 = lv_linemeter_create(ui->main, NULL);

	//Write style LV_LINEMETER_PART_MAIN for main_lmeter_1
	static lv_style_t style_main_lmeter_1_main;
	lv_style_reset(&style_main_lmeter_1_main);

	//Write style state: LV_STATE_DEFAULT for style_main_lmeter_1_main
	lv_style_set_radius(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 200);
	lv_style_set_bg_color(&style_main_lmeter_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_lmeter_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_lmeter_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_right(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_top(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_bottom(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 5);
	lv_style_set_line_color(&style_main_lmeter_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_line_width(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_line_opa(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_scale_grad_color(&style_main_lmeter_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_scale_end_color(&style_main_lmeter_1_main, LV_STATE_DEFAULT, lv_color_make(0x8b, 0x89, 0x8b));
	lv_style_set_scale_width(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_scale_end_line_width(&style_main_lmeter_1_main, LV_STATE_DEFAULT, 10);
	lv_obj_add_style(ui->main_lmeter_1, LV_LINEMETER_PART_MAIN, &style_main_lmeter_1_main);
	lv_obj_set_pos(ui->main_lmeter_1, 40, 40);
	lv_obj_set_size(ui->main_lmeter_1, 400, 400);
	lv_linemeter_set_scale(ui->main_lmeter_1, 255, 35);
	lv_linemeter_set_range(ui->main_lmeter_1, 0, 180);
	lv_linemeter_set_value(ui->main_lmeter_1, 100);
	lv_linemeter_set_angle_offset(ui->main_lmeter_1, 0);

	//Write codes main_label_1
	ui->main_label_1 = lv_label_create(ui->main, NULL);
	lv_label_set_text(ui->main_label_1, "Desktop");
	lv_label_set_long_mode(ui->main_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->main_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for main_label_1
	static lv_style_t style_main_label_1_main;
	lv_style_reset(&style_main_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_main_label_1_main
	lv_style_set_radius(&style_main_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_label_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_main_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_main_label_1_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_main_label_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_main_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_label_1, LV_LABEL_PART_MAIN, &style_main_label_1_main);
	lv_obj_set_pos(ui->main_label_1, 160, 410);
	lv_obj_set_size(ui->main_label_1, 160, 0);

	//Write codes main_line_1
	ui->main_line_1 = lv_line_create(ui->main, NULL);

	//Write style LV_LINE_PART_MAIN for main_line_1
	static lv_style_t style_main_line_1_main;
	lv_style_reset(&style_main_line_1_main);

	//Write style state: LV_STATE_DEFAULT for style_main_line_1_main
	lv_style_set_line_color(&style_main_line_1_main, LV_STATE_DEFAULT, lv_color_make(0xc8, 0xc8, 0xc8));
	lv_style_set_line_width(&style_main_line_1_main, LV_STATE_DEFAULT, 5);
	lv_obj_add_style(ui->main_line_1, LV_LINE_PART_MAIN, &style_main_line_1_main);
	lv_obj_set_pos(ui->main_line_1, 143, 160);
	lv_obj_set_size(ui->main_line_1, 200, 10);
	static lv_point_t main_line_1[] ={{0,0},{200,0}};
	lv_line_set_points(ui->main_line_1,main_line_1,2);

	//Write codes main_btn_1
	ui->main_btn_1 = lv_btn_create(ui->main, NULL);

	//Write style LV_BTN_PART_MAIN for main_btn_1
	static lv_style_t style_main_btn_1_main;
	lv_style_reset(&style_main_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_main_btn_1_main
	lv_style_set_radius(&style_main_btn_1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_main_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_main_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_main_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_main_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_main_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_btn_1, LV_BTN_PART_MAIN, &style_main_btn_1_main);
	lv_obj_set_pos(ui->main_btn_1, 150, 260);
	lv_obj_set_size(ui->main_btn_1, 180, 50);
	ui->main_btn_1_label = lv_label_create(ui->main_btn_1, NULL);
	lv_label_set_text(ui->main_btn_1_label, "Setting");
	lv_obj_set_style_local_text_color(ui->main_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->main_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_50);

	//Write codes main_btn_2
	ui->main_btn_2 = lv_btn_create(ui->main, NULL);

	//Write style LV_BTN_PART_MAIN for main_btn_2
	static lv_style_t style_main_btn_2_main;
	lv_style_reset(&style_main_btn_2_main);

	//Write style state: LV_STATE_DEFAULT for style_main_btn_2_main
	lv_style_set_radius(&style_main_btn_2_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_main_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_btn_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_btn_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_main_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_main_btn_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_main_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_main_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_btn_2, LV_BTN_PART_MAIN, &style_main_btn_2_main);
	lv_obj_set_pos(ui->main_btn_2, 150, 180);
	lv_obj_set_size(ui->main_btn_2, 180, 50);
	ui->main_btn_2_label = lv_label_create(ui->main_btn_2, NULL);
	lv_label_set_text(ui->main_btn_2_label, "App");
	lv_obj_set_style_local_text_color(ui->main_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->main_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_50);

	//Write codes main_btn_3
	ui->main_btn_3 = lv_btn_create(ui->main, NULL);

	//Write style LV_BTN_PART_MAIN for main_btn_3
	static lv_style_t style_main_btn_3_main;
	lv_style_reset(&style_main_btn_3_main);

	//Write style state: LV_STATE_DEFAULT for style_main_btn_3_main
	lv_style_set_radius(&style_main_btn_3_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_main_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_btn_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_btn_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_main_btn_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_main_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_main_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_main_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_btn_3, LV_BTN_PART_MAIN, &style_main_btn_3_main);
	lv_obj_set_pos(ui->main_btn_3, 150, 100);
	lv_obj_set_size(ui->main_btn_3, 180, 50);
	ui->main_btn_3_label = lv_label_create(ui->main_btn_3, NULL);
	lv_label_set_text(ui->main_btn_3_label, "Music");
	lv_obj_set_style_local_text_color(ui->main_btn_3_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->main_btn_3_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_50);

	//Write codes main_line_2
	ui->main_line_2 = lv_line_create(ui->main, NULL);

	//Write style LV_LINE_PART_MAIN for main_line_2
	static lv_style_t style_main_line_2_main;
	lv_style_reset(&style_main_line_2_main);

	//Write style state: LV_STATE_DEFAULT for style_main_line_2_main
	lv_style_set_line_color(&style_main_line_2_main, LV_STATE_DEFAULT, lv_color_make(0xc8, 0xc8, 0xc8));
	lv_style_set_line_width(&style_main_line_2_main, LV_STATE_DEFAULT, 5);
	lv_obj_add_style(ui->main_line_2, LV_LINE_PART_MAIN, &style_main_line_2_main);
	lv_obj_set_pos(ui->main_line_2, 99, 240);
	lv_obj_set_size(ui->main_line_2, 300, 10);
	static lv_point_t main_line_2[] ={{0,0},{300,0}};
	lv_line_set_points(ui->main_line_2,main_line_2,2);

	//Write codes main_btn_4
	ui->main_btn_4 = lv_btn_create(ui->main, NULL);

	//Write style LV_BTN_PART_MAIN for main_btn_4
	static lv_style_t style_main_btn_4_main;
	lv_style_reset(&style_main_btn_4_main);

	//Write style state: LV_STATE_DEFAULT for style_main_btn_4_main
	lv_style_set_radius(&style_main_btn_4_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_main_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_btn_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_btn_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_main_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_main_btn_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_main_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_main_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_btn_4, LV_BTN_PART_MAIN, &style_main_btn_4_main);
	lv_obj_set_pos(ui->main_btn_4, 150, 340);
	lv_obj_set_size(ui->main_btn_4, 180, 50);
	ui->main_btn_4_label = lv_label_create(ui->main_btn_4, NULL);
	lv_label_set_text(ui->main_btn_4_label, "Info");
	lv_obj_set_style_local_text_color(ui->main_btn_4_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->main_btn_4_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_50);

	//Write codes main_line_3
	ui->main_line_3 = lv_line_create(ui->main, NULL);

	//Write style LV_LINE_PART_MAIN for main_line_3
	static lv_style_t style_main_line_3_main;
	lv_style_reset(&style_main_line_3_main);

	//Write style state: LV_STATE_DEFAULT for style_main_line_3_main
	lv_style_set_line_color(&style_main_line_3_main, LV_STATE_DEFAULT, lv_color_make(0xc8, 0xc8, 0xc8));
	lv_style_set_line_width(&style_main_line_3_main, LV_STATE_DEFAULT, 5);
	lv_obj_add_style(ui->main_line_3, LV_LINE_PART_MAIN, &style_main_line_3_main);
	lv_obj_set_pos(ui->main_line_3, 146, 320);
	lv_obj_set_size(ui->main_line_3, 200, 10);
	static lv_point_t main_line_3[] ={{0,0},{200,0}};
	lv_line_set_points(ui->main_line_3,main_line_3,2);

	//Init events for screen
	events_init_main(ui);
}