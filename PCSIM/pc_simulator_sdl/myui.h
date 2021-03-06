#ifndef MYUI_H_INCLUDED
#define MYUI_H_INCLUDED

#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#include "lv_ex_conf.h"
#else
#include "lvgl/lvgl.h"
#include "lv_ex_conf.h"
#endif
//状态栏宽度
#define STATUS_BAR_VER  30

extern lv_font_t myfont20;
extern lv_img_dsc_t boyulogo;

#define PAGE_LOUGOU    1
#define PAGE_STARTUP   2
#define PAGE_ORDINARY  3
#define PAGE_SMART1    4
#define PAGE_SCORE     5
#define PAGE_MODIFY    6
#define PAGE_MODIFY1   7
#define PAGE_PTOTAL    8
#define PAGE_RANKING   9
#define PAGE_CWAITING  10

#define DIR_EAST       1
#define DIR_SOUTH      2
#define DIR_WEST       3
#define DIR_NORTH      4

typedef struct {
    char Table_number[10];//桌号
    char Table_num;//桌号
    char position;//方位  1:东  2:南    3:西  4:北
    char game_mode;//游戏模式  0:单机    1:智能
    bool wifi_connect_state;//wifi连接状态
    bool server_connect_state;//server连接状态
    char QR_link[100] ;//二维码链接
    char standard_score[4][4];//东南西北标准分
    char match_score[4][4];//东南西北比赛分
    char inform_nums;//总流水条数
    char current_informnum; //当前显示的流水数
    char games;//总盘数
    char current_game;//当前盘数
    char current_page;//当前页面   0:初始化页码
    unsigned int confirm_num :4 ;//已确认分数个数  1111 全部确认 0000 都没确认
    char current_game_score[4];//当前盘数的分数

}struct_majiang;


LV_FONT_DECLARE(myfont20)
//LV_IMG_DECLARE(boyulogo);


void drawBottom (void) ;


#endif // MYUI_H_INCLUDED
