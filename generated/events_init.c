/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"

void events_init(lv_ui *ui)
{
}

static void main_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_setting(&guider_ui);
		lv_scr_load(guider_ui.setting);
	}
		break;
	default:
		break;
	}
}

static void main_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_app(&guider_ui);
		lv_scr_load(guider_ui.app);
	}
		break;
	default:
		break;
	}
}

static void main_btn_3event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_music(&guider_ui);
		lv_scr_load(guider_ui.music);
	}
		break;
	default:
		break;
	}
}

static void main_btn_4event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_Info(&guider_ui);
		lv_scr_load(guider_ui.Info);
	}
		break;
	default:
		break;
	}
}

void events_init_main(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->main_btn_1, main_btn_1event_handler);
	lv_obj_set_event_cb(ui->main_btn_2, main_btn_2event_handler);
	lv_obj_set_event_cb(ui->main_btn_3, main_btn_3event_handler);
	lv_obj_set_event_cb(ui->main_btn_4, main_btn_4event_handler);
}

static void app_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_main(&guider_ui);
		lv_scr_load(guider_ui.main);
	}
		break;
	default:
		break;
	}
}

void events_init_app(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->app_btn_1, app_btn_1event_handler);
}

static void setting_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_main(&guider_ui);
		lv_scr_load(guider_ui.main);
	}
		break;
	default:
		break;
	}
}

void events_init_setting(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->setting_btn_1, setting_btn_1event_handler);
}

static void music_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_main(&guider_ui);
		lv_scr_load(guider_ui.main);
	}
		break;
	default:
		break;
	}
}

void events_init_music(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->music_btn_1, music_btn_1event_handler);
}

static void Info_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_main(&guider_ui);
		lv_scr_load(guider_ui.main);
	}
		break;
	default:
		break;
	}
}

void events_init_Info(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Info_btn_1, Info_btn_1event_handler);
}
