/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_arc_1
	ui->screen_arc_1 = lv_arc_create(ui->screen, NULL);

	//Write style LV_ARC_PART_BG for screen_arc_1
	static lv_style_t style_screen_arc_1_bg;
	lv_style_reset(&style_screen_arc_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_arc_1_bg
	lv_style_set_bg_color(&style_screen_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_arc_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_arc_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_width(&style_screen_arc_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_screen_arc_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_line_width(&style_screen_arc_1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->screen_arc_1, LV_ARC_PART_BG, &style_screen_arc_1_bg);

	//Write style LV_ARC_PART_INDIC for screen_arc_1
	static lv_style_t style_screen_arc_1_indic;
	lv_style_reset(&style_screen_arc_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen_arc_1_indic
	lv_style_set_line_color(&style_screen_arc_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_screen_arc_1_indic, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->screen_arc_1, LV_ARC_PART_INDIC, &style_screen_arc_1_indic);
	lv_obj_set_pos(ui->screen_arc_1, 0, 0);
	lv_obj_set_size(ui->screen_arc_1, 480, 480);
	lv_arc_set_bg_angles(ui->screen_arc_1, 0, 360);
	lv_arc_set_angles(ui->screen_arc_1, 90, 180);
	lv_arc_set_rotation(ui->screen_arc_1, 0);
	lv_obj_set_style_local_pad_top(ui->screen_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_pad_bottom(ui->screen_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_pad_left(ui->screen_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_pad_right(ui->screen_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 20);
	lv_obj_set_style_local_line_rounded(ui->screen_arc_1, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, 0);
	lv_obj_set_style_local_line_rounded(ui->screen_arc_1, LV_ARC_PART_BG, LV_STATE_DEFAULT, 0);
}