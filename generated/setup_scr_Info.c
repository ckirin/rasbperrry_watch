/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Info(lv_ui *ui){

	//Write codes Info
	ui->Info = lv_obj_create(NULL, NULL);

	//Write codes Info_arc_1
	ui->Info_arc_1 = lv_arc_create(ui->Info, NULL);

	//Write style LV_ARC_PART_BG for Info_arc_1
	static lv_style_t style_Info_arc_1_bg;
	lv_style_reset(&style_Info_arc_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_Info_arc_1_bg
	lv_style_set_bg_color(&style_Info_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Info_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Info_arc_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Info_arc_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_width(&style_Info_arc_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_Info_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_Info_arc_1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->Info_arc_1, LV_ARC_PART_BG, &style_Info_arc_1_bg);

	//Write style LV_ARC_PART_INDIC for Info_arc_1
	static lv_style_t style_Info_arc_1_indic;
	lv_style_reset(&style_Info_arc_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_Info_arc_1_indic
	lv_style_set_line_color(&style_Info_arc_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_Info_arc_1_indic, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->Info_arc_1, LV_ARC_PART_INDIC, &style_Info_arc_1_indic);
	lv_obj_set_pos(ui->Info_arc_1, 0, 0);
	lv_obj_set_size(ui->Info_arc_1, 480, 480);
	lv_arc_set_bg_angles(ui->Info_arc_1, 0, 360);
	lv_arc_set_angles(ui->Info_arc_1, 90, 180);
	lv_arc_set_rotation(ui->Info_arc_1, 0);
	lv_obj_set_style_local_pad_top(ui->Info_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_bottom(ui->Info_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_left(ui->Info_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_right(ui->Info_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);

	//Write codes Info_btn_1
	ui->Info_btn_1 = lv_btn_create(ui->Info, NULL);

	//Write style LV_BTN_PART_MAIN for Info_btn_1
	static lv_style_t style_Info_btn_1_main;
	lv_style_reset(&style_Info_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Info_btn_1_main
	lv_style_set_radius(&style_Info_btn_1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_Info_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Info_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Info_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Info_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Info_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Info_btn_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_Info_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Info_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Info_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Info_btn_1, LV_BTN_PART_MAIN, &style_Info_btn_1_main);
	lv_obj_set_pos(ui->Info_btn_1, 190, 400);
	lv_obj_set_size(ui->Info_btn_1, 100, 50);
	ui->Info_btn_1_label = lv_label_create(ui->Info_btn_1, NULL);
	lv_label_set_text(ui->Info_btn_1_label, "Info");
	lv_obj_set_style_local_text_color(ui->Info_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->Info_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);

	//Write codes Info_img_1
	ui->Info_img_1 = lv_img_create(ui->Info, NULL);

	//Write style LV_IMG_PART_MAIN for Info_img_1
	static lv_style_t style_Info_img_1_main;
	lv_style_reset(&style_Info_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Info_img_1_main
	lv_style_set_image_recolor(&style_Info_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Info_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Info_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Info_img_1, LV_IMG_PART_MAIN, &style_Info_img_1_main);
	lv_obj_set_pos(ui->Info_img_1, 180, 70);
	lv_obj_set_size(ui->Info_img_1, 120, 120);
	lv_obj_set_click(ui->Info_img_1, true);
	lv_img_set_src(ui->Info_img_1,&_inforgithub_alpha_120x120);
	lv_img_set_pivot(ui->Info_img_1, 0,0);
	lv_img_set_angle(ui->Info_img_1, 0);

	//Write codes Info_label_1
	ui->Info_label_1 = lv_label_create(ui->Info, NULL);
	lv_label_set_text(ui->Info_label_1, "https://github.com/ckirin/");
	lv_label_set_long_mode(ui->Info_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Info_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Info_label_1
	static lv_style_t style_Info_label_1_main;
	lv_style_reset(&style_Info_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Info_label_1_main
	lv_style_set_radius(&style_Info_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Info_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Info_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Info_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Info_label_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Info_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_Info_label_1_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_Info_label_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Info_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Info_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Info_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Info_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Info_label_1, LV_LABEL_PART_MAIN, &style_Info_label_1_main);
	lv_obj_set_pos(ui->Info_label_1, 60, 305);
	lv_obj_set_size(ui->Info_label_1, 362, 0);

	//Write codes Info_label_2
	ui->Info_label_2 = lv_label_create(ui->Info, NULL);
	lv_label_set_text(ui->Info_label_2, "Bilibili");
	lv_label_set_long_mode(ui->Info_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Info_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Info_label_2
	static lv_style_t style_Info_label_2_main;
	lv_style_reset(&style_Info_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Info_label_2_main
	lv_style_set_radius(&style_Info_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Info_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Info_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Info_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Info_label_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Info_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_Info_label_2_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_Info_label_2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Info_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Info_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Info_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Info_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Info_label_2, LV_LABEL_PART_MAIN, &style_Info_label_2_main);
	lv_obj_set_pos(ui->Info_label_2, 60, 200);
	lv_obj_set_size(ui->Info_label_2, 360, 0);

	//Write codes Info_label_3
	ui->Info_label_3 = lv_label_create(ui->Info, NULL);
	lv_label_set_text(ui->Info_label_3, "豆子浆");
	lv_label_set_long_mode(ui->Info_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Info_label_3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Info_label_3
	static lv_style_t style_Info_label_3_main;
	lv_style_reset(&style_Info_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_Info_label_3_main
	lv_style_set_radius(&style_Info_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Info_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Info_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Info_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Info_label_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Info_label_3_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_Info_label_3_main, LV_STATE_DEFAULT, &lv_font_simsun_30);
	lv_style_set_text_letter_space(&style_Info_label_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Info_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Info_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Info_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Info_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Info_label_3, LV_LABEL_PART_MAIN, &style_Info_label_3_main);
	lv_obj_set_pos(ui->Info_label_3, 60, 230);
	lv_obj_set_size(ui->Info_label_3, 360, 0);

	//Write codes Info_label_4
	ui->Info_label_4 = lv_label_create(ui->Info, NULL);
	lv_label_set_text(ui->Info_label_4, "树莓派手表");
	lv_label_set_long_mode(ui->Info_label_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Info_label_4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Info_label_4
	static lv_style_t style_Info_label_4_main;
	lv_style_reset(&style_Info_label_4_main);

	//Write style state: LV_STATE_DEFAULT for style_Info_label_4_main
	lv_style_set_radius(&style_Info_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Info_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Info_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Info_label_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Info_label_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Info_label_4_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_style_set_text_font(&style_Info_label_4_main, LV_STATE_DEFAULT, &lv_font_simsun_30);
	lv_style_set_text_letter_space(&style_Info_label_4_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Info_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Info_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Info_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Info_label_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Info_label_4, LV_LABEL_PART_MAIN, &style_Info_label_4_main);
	lv_obj_set_pos(ui->Info_label_4, 60, 265);
	lv_obj_set_size(ui->Info_label_4, 360, 0);

	//Init events for screen
	events_init_Info(ui);
}