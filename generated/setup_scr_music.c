/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_music(lv_ui *ui){

	//Write codes music
	ui->music = lv_obj_create(NULL, NULL);

	//Write codes music_arc_1
	ui->music_arc_1 = lv_arc_create(ui->music, NULL);

	//Write style LV_ARC_PART_BG for music_arc_1
	static lv_style_t style_music_arc_1_bg;
	lv_style_reset(&style_music_arc_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_music_arc_1_bg
	lv_style_set_bg_color(&style_music_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_music_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_music_arc_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_music_arc_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_width(&style_music_arc_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_music_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_music_arc_1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->music_arc_1, LV_ARC_PART_BG, &style_music_arc_1_bg);

	//Write style LV_ARC_PART_INDIC for music_arc_1
	static lv_style_t style_music_arc_1_indic;
	lv_style_reset(&style_music_arc_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_music_arc_1_indic
	lv_style_set_line_color(&style_music_arc_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_music_arc_1_indic, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->music_arc_1, LV_ARC_PART_INDIC, &style_music_arc_1_indic);
	lv_obj_set_pos(ui->music_arc_1, 0, 0);
	lv_obj_set_size(ui->music_arc_1, 480, 480);
	lv_arc_set_bg_angles(ui->music_arc_1, 0, 360);
	lv_arc_set_angles(ui->music_arc_1, 180, 270);
	lv_arc_set_rotation(ui->music_arc_1, 0);
	lv_obj_set_style_local_pad_top(ui->music_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_bottom(ui->music_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_left(ui->music_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);
	lv_obj_set_style_local_pad_right(ui->music_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 3);

	//Write codes music_img_1
	ui->music_img_1 = lv_img_create(ui->music, NULL);

	//Write style LV_IMG_PART_MAIN for music_img_1
	static lv_style_t style_music_img_1_main;
	lv_style_reset(&style_music_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_music_img_1_main
	lv_style_set_image_recolor(&style_music_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_music_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_music_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->music_img_1, LV_IMG_PART_MAIN, &style_music_img_1_main);
	lv_obj_set_pos(ui->music_img_1, 97, 36);
	lv_obj_set_size(ui->music_img_1, 285, 211);
	lv_obj_set_click(ui->music_img_1, true);
	lv_img_set_src(ui->music_img_1,&_music_alpha_285x211);
	lv_img_set_pivot(ui->music_img_1, 0,0);
	lv_img_set_angle(ui->music_img_1, 0);

	//Write codes music_img_3
	ui->music_img_3 = lv_img_create(ui->music, NULL);

	//Write style LV_IMG_PART_MAIN for music_img_3
	static lv_style_t style_music_img_3_main;
	lv_style_reset(&style_music_img_3_main);

	//Write style state: LV_STATE_DEFAULT for style_music_img_3_main
	lv_style_set_image_recolor(&style_music_img_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_music_img_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_music_img_3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->music_img_3, LV_IMG_PART_MAIN, &style_music_img_3_main);
	lv_obj_set_pos(ui->music_img_3, 125, 330);
	lv_obj_set_size(ui->music_img_3, 50, 50);
	lv_obj_set_click(ui->music_img_3, true);
	lv_img_set_src(ui->music_img_3,&_SAsset12_alpha_50x50);
	lv_img_set_pivot(ui->music_img_3, 0,0);
	lv_img_set_angle(ui->music_img_3, 0);

	//Write codes music_img_4
	ui->music_img_4 = lv_img_create(ui->music, NULL);

	//Write style LV_IMG_PART_MAIN for music_img_4
	static lv_style_t style_music_img_4_main;
	lv_style_reset(&style_music_img_4_main);

	//Write style state: LV_STATE_DEFAULT for style_music_img_4_main
	lv_style_set_image_recolor(&style_music_img_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_music_img_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_music_img_4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->music_img_4, LV_IMG_PART_MAIN, &style_music_img_4_main);
	lv_obj_set_pos(ui->music_img_4, 305, 330);
	lv_obj_set_size(ui->music_img_4, 50, 51);
	lv_obj_set_click(ui->music_img_4, true);
	lv_img_set_src(ui->music_img_4,&_SAsset13_alpha_50x51);
	lv_img_set_pivot(ui->music_img_4, 0,0);
	lv_img_set_angle(ui->music_img_4, 0);

	//Write codes music_img_5
	ui->music_img_5 = lv_img_create(ui->music, NULL);

	//Write style LV_IMG_PART_MAIN for music_img_5
	static lv_style_t style_music_img_5_main;
	lv_style_reset(&style_music_img_5_main);

	//Write style state: LV_STATE_DEFAULT for style_music_img_5_main
	lv_style_set_image_recolor(&style_music_img_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_music_img_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_music_img_5_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->music_img_5, LV_IMG_PART_MAIN, &style_music_img_5_main);
	lv_obj_set_pos(ui->music_img_5, 210, 22);
	lv_obj_set_size(ui->music_img_5, 59, 88);
	lv_obj_set_click(ui->music_img_5, true);
	lv_img_set_src(ui->music_img_5,&_SAsset7_alpha_59x88);
	lv_img_set_pivot(ui->music_img_5, 0,0);
	lv_img_set_angle(ui->music_img_5, 0);

	//Write codes music_label_2
	ui->music_label_2 = lv_label_create(ui->music, NULL);
	lv_label_set_text(ui->music_label_2, "Hello-World.flac");
	lv_label_set_long_mode(ui->music_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->music_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for music_label_2
	static lv_style_t style_music_label_2_main;
	lv_style_reset(&style_music_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_music_label_2_main
	lv_style_set_radius(&style_music_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_music_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_music_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_music_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_music_label_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_music_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xc8, 0xc8, 0xc8));
	lv_style_set_text_font(&style_music_label_2_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);
	lv_style_set_text_letter_space(&style_music_label_2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_music_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_music_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_music_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_music_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->music_label_2, LV_LABEL_PART_MAIN, &style_music_label_2_main);
	lv_obj_set_pos(ui->music_label_2, 110, 260);
	lv_obj_set_size(ui->music_label_2, 280, 0);

	//Write codes music_label_3
	ui->music_label_3 = lv_label_create(ui->music, NULL);
	lv_label_set_text(ui->music_label_3, "It's nice to see you");
	lv_label_set_long_mode(ui->music_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->music_label_3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for music_label_3
	static lv_style_t style_music_label_3_main;
	lv_style_reset(&style_music_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_music_label_3_main
	lv_style_set_radius(&style_music_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_music_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_music_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_music_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_music_label_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_music_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xc8, 0xc8, 0xc8));
	lv_style_set_text_font(&style_music_label_3_main, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_20);
	lv_style_set_text_letter_space(&style_music_label_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_music_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_music_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_music_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_music_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->music_label_3, LV_LABEL_PART_MAIN, &style_music_label_3_main);
	lv_obj_set_pos(ui->music_label_3, 100, 298);
	lv_obj_set_size(ui->music_label_3, 280, 0);

	//Write codes music_btn_1
	ui->music_btn_1 = lv_btn_create(ui->music, NULL);

	//Write style LV_BTN_PART_MAIN for music_btn_1
	static lv_style_t style_music_btn_1_main;
	lv_style_reset(&style_music_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_music_btn_1_main
	lv_style_set_radius(&style_music_btn_1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_music_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_music_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_music_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_music_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_music_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_music_btn_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_music_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_music_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_music_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->music_btn_1, LV_BTN_PART_MAIN, &style_music_btn_1_main);
	lv_obj_set_pos(ui->music_btn_1, 190, 400);
	lv_obj_set_size(ui->music_btn_1, 100, 50);
	ui->music_btn_1_label = lv_label_create(ui->music_btn_1, NULL);
	lv_label_set_text(ui->music_btn_1_label, "Music");
	lv_obj_set_style_local_text_color(ui->music_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x80, 0x80, 0x80));
	lv_obj_set_style_local_text_font(ui->music_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Dyuthi_Regular_30);

	//Write codes music_imgbtn_1
	ui->music_imgbtn_1 = lv_imgbtn_create(ui->music, NULL);
	lv_obj_set_pos(ui->music_imgbtn_1, 215, 330);
	lv_obj_set_size(ui->music_imgbtn_1, 50, 50);
	lv_imgbtn_set_src(ui->music_imgbtn_1,LV_BTN_STATE_RELEASED,&_SAsset11_alpha_50x50);
	lv_imgbtn_set_src(ui->music_imgbtn_1,LV_BTN_STATE_PRESSED,&_SAsset9_alpha_50x50);
	lv_imgbtn_set_src(ui->music_imgbtn_1,LV_BTN_STATE_CHECKED_RELEASED,&_SAsset9_alpha_50x50);
	lv_imgbtn_set_src(ui->music_imgbtn_1,LV_BTN_STATE_CHECKED_PRESSED,&_SAsset11_alpha_50x50);
	lv_imgbtn_set_checkable(ui->music_imgbtn_1, true);

	//Init events for screen
	events_init_music(ui);
}