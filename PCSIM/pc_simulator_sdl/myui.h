#ifndef MYUI_H_INCLUDED
#define MYUI_H_INCLUDED

#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#include "lv_ex_conf.h"
#else
#include "lvgl/lvgl.h"
#include "lv_ex_conf.h"
#endif
//״̬�����
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
    char Table_number[10];//����
    char Table_num;//����
    char position;//��λ  1:��  2:��    3:��  4:��
    char game_mode;//��Ϸģʽ  0:����    1:����
    bool wifi_connect_state;//wifi����״̬
    bool server_connect_state;//server����״̬
    char QR_link[100] ;//��ά������
    char standard_score[4][4];//����������׼��
    char match_score[4][4];//��������������
    char inform_nums;//����ˮ����
    char current_informnum; //��ǰ��ʾ����ˮ��
    char games;//������
    char current_game;//��ǰ����
    char current_page;//��ǰҳ��   0:��ʼ��ҳ��
    unsigned int confirm_num :4 ;//��ȷ�Ϸ�������  1111 ȫ��ȷ�� 0000 ��ûȷ��
    char current_game_score[4];//��ǰ�����ķ���

}struct_majiang;


LV_FONT_DECLARE(myfont20)
//LV_IMG_DECLARE(boyulogo);


void drawBottom (void) ;


#endif // MYUI_H_INCLUDED
