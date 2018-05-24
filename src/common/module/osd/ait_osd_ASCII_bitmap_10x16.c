#include "includes_fw.h"
#include "ait_osd.h"

#if (RES_OSD_H16_FONT)

//#define FONT_HEIGHT	16
//#define FONT_WIDTH	8

unsigned char FontTable10x16[] = {

0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x01,
0xf8,0x01,
0x90,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xa0,0x01,
0xb0,0x01,
0xfc,0x01,
0xfc,0x01,
0x90,0x00,
0xfc,0x01,
0xfc,0x01,
0xd8,0x00,
0x48,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x18,0x00,
0x38,0x00,
0xf0,0x01,
0xc0,0x01,
0x80,0x03,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x0e,0x01,
0x92,0x00,
0x92,0x00,
0x52,0x00,
0x6e,0x03,
0xa0,0x00,
0x90,0x00,
0x90,0x00,
0x08,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x78,0x00,
0xf8,0x00,
0xcc,0x00,
0x78,0x00,
0x38,0x00,
0xfe,0x03,
0xc6,0x01,
0xfe,0x03,
0x7c,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x70,0x00,
0x70,0x00,
0x20,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x40,0x00,
0x60,0x00,
0x20,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x20,0x00,
0x60,0x00,
0x40,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x18,0x00,
0x30,0x00,
0x30,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x30,0x00,
0x30,0x00,
0x18,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x20,0x00,
0x78,0x00,
0x30,0x00,
0x50,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0xf8,0x01,
0xf8,0x01,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x40,0x00,
0x20,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x40,0x00,
0x40,0x00,
0x40,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x10,0x00,
0x10,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xc0,0x00,
0xf0,0x00,
0xf8,0x00,
0xc8,0x00,
0xc0,0x00,
0xc0,0x00,
0xc0,0x00,
0xc0,0x00,
0xc0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x98,0x01,
0x80,0x01,
0xc0,0x01,
0xe0,0x00,
0x30,0x00,
0xf8,0x01,
0xfc,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x98,0x01,
0x80,0x01,
0xe0,0x00,
0x80,0x01,
0x98,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xc0,0x01,
0xe0,0x01,
0xe0,0x01,
0xb0,0x01,
0x98,0x01,
0xfc,0x03,
0xfc,0x03,
0x80,0x01,
0x80,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x01,
0xf8,0x01,
0x18,0x00,
0xf8,0x00,
0xf8,0x01,
0x80,0x01,
0x98,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x18,0x00,
0xd8,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x01,
0xf8,0x01,
0x80,0x01,
0xc0,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x30,0x00,
0x30,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x98,0x01,
0xf8,0x01,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xb0,0x01,
0x80,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x40,0x00,
0x20,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x01,
0xc0,0x01,
0xf8,0x00,
0x18,0x00,
0xf8,0x00,
0xe0,0x01,
0x00,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x01,
0xf8,0x01,
0x00,0x00,
0xf8,0x01,
0xf8,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x08,0x00,
0x38,0x00,
0xf0,0x01,
0x80,0x01,
0xf0,0x01,
0x78,0x00,
0x08,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0xdc,0x01,
0xe0,0x00,
0x30,0x00,
0x00,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0x0c,0x01,
0xf4,0x02,
0xca,0x02,
0x4a,0x02,
0x4a,0x02,
0x4a,0x01,
0xf8,0x00,
0x0c,0x03,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x70,0x00,
0x70,0x00,
0xf8,0x00,
0xd8,0x00,
0xd8,0x00,
0x9c,0x01,
0xfc,0x01,
0xfc,0x01,
0x8e,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x00,
0xfc,0x01,
0x8c,0x01,
0xfc,0x00,
0xfc,0x01,
0x8c,0x01,
0x8c,0x01,
0xfc,0x01,
0xfc,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xfc,0x01,
0x9c,0x03,
0x0c,0x00,
0x0c,0x00,
0x0c,0x00,
0x9c,0x03,
0xfc,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x00,
0xfc,0x01,
0x8c,0x01,
0x8c,0x01,
0x8c,0x01,
0x8c,0x01,
0x8c,0x01,
0xfc,0x01,
0xfc,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x01,
0xfc,0x01,
0x1c,0x00,
0xfc,0x01,
0xfc,0x01,
0x1c,0x00,
0x1c,0x00,
0xfc,0x01,
0xfc,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x01,
0xf8,0x01,
0x18,0x00,
0xf8,0x01,
0xf8,0x01,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x01,
0xf8,0x03,
0x9c,0x03,
0x0c,0x00,
0xcc,0x03,
0xcc,0x03,
0x1c,0x03,
0xf8,0x03,
0xf0,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0xfc,0x03,
0xfc,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x80,0x01,
0x80,0x01,
0x80,0x01,
0x80,0x01,
0x80,0x01,
0x80,0x01,
0xdc,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x8c,0x03,
0xcc,0x01,
0xec,0x00,
0xfc,0x00,
0xfc,0x00,
0xfc,0x01,
0x9c,0x01,
0x8c,0x03,
0x0c,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0xf8,0x03,
0xf8,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x8e,0x03,
0x8e,0x03,
0xde,0x03,
0xde,0x03,
0x56,0x03,
0x76,0x03,
0x76,0x03,
0x76,0x03,
0x76,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x1c,0x03,
0x1c,0x03,
0x3c,0x03,
0x7c,0x03,
0xfc,0x03,
0xec,0x03,
0xcc,0x03,
0x8c,0x03,
0x8c,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x9c,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x9c,0x03,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x00,
0xfc,0x01,
0x9c,0x01,
0x9c,0x01,
0xfc,0x01,
0xfc,0x00,
0x1c,0x00,
0x1c,0x00,
0x1c,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x9c,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0xdc,0x03,
0xf8,0x01,
0xf0,0x03,
0x00,0x02,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x01,
0xfc,0x01,
0x8c,0x01,
0xfc,0x01,
0xfc,0x00,
0xcc,0x00,
0xcc,0x01,
0x8c,0x01,
0x8c,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x00,
0xfc,0x01,
0x8c,0x01,
0x7c,0x00,
0xf8,0x01,
0xc0,0x01,
0x8c,0x01,
0xfc,0x01,
0xf8,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x01,
0xfc,0x01,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x0c,0x03,
0x9c,0x03,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x8e,0x03,
0x8c,0x01,
0x8c,0x01,
0x9c,0x01,
0xd8,0x00,
0xd8,0x00,
0xf8,0x00,
0x70,0x00,
0x70,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x66,0x00,
0x66,0x02,
0xf6,0x02,
0xf6,0x02,
0xfe,0x03,
0x9e,0x03,
0x9c,0x03,
0x9c,0x03,
0x9c,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x8e,0x03,
0xdc,0x01,
0xf8,0x00,
0xf0,0x00,
0x70,0x00,
0xf8,0x00,
0xf8,0x01,
0xdc,0x01,
0x8e,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x8e,0x03,
0xdc,0x01,
0xf8,0x01,
0xf8,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x70,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xfc,0x01,
0xfc,0x01,
0xc0,0x01,
0xe0,0x00,
0x70,0x00,
0x38,0x00,
0x1c,0x00,
0xfe,0x03,
0xfe,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x70,0x00,
0x70,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x70,0x00,
0x70,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x10,0x00,
0x10,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x40,0x00,
0x40,0x00,
0x40,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x78,0x00,
0x78,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x78,0x00,
0x78,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x70,0x00,
0xf0,0x00,
0x90,0x00,
0x98,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x30,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0x98,0x01,
0xc0,0x01,
0xb8,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x18,0x00,
0x18,0x00,
0xd8,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xd8,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x18,0x00,
0x18,0x00,
0x18,0x00,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x80,0x01,
0x80,0x01,
0xb0,0x01,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xb0,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0x98,0x01,
0x98,0x01,
0xf8,0x03,
0x18,0x00,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xe0,0x00,
0x30,0x00,
0xf8,0x00,
0xf8,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xb0,0x01,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xb0,0x01,
0x80,0x01,
0xf8,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x18,0x00,
0x18,0x00,
0xd8,0x01,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x70,0x00,
0x70,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x18,0x00,
0x18,0x00,
0x98,0x03,
0xd8,0x00,
0xf8,0x00,
0xf8,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x36,0x03,
0xfe,0x03,
0x66,0x02,
0x66,0x02,
0x66,0x02,
0x66,0x02,
0x66,0x02,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xd8,0x01,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf0,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xf0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xd8,0x00,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xd8,0x00,
0x18,0x00,
0x18,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xb0,0x01,
0xf8,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xb0,0x01,
0x80,0x01,
0x80,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xb0,0x00,
0xf0,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x00,
0x18,0x00,
0x78,0x00,
0xf8,0x00,
0xc0,0x01,
0x80,0x00,
0xfc,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x20,0x00,
0x30,0x00,
0xf8,0x00,
0xf8,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0xf0,0x00,
0xe0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0x98,0x01,
0xf8,0x01,
0xb8,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x9c,0x01,
0xd8,0x00,
0xd8,0x00,
0xd8,0x00,
0x70,0x00,
0x70,0x00,
0x60,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x72,0x02,
0x72,0x02,
0x76,0x03,
0x76,0x03,
0xdc,0x03,
0xdc,0x01,
0x8c,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x9c,0x03,
0xf8,0x01,
0xf0,0x00,
0xf0,0x00,
0xf0,0x00,
0xf8,0x01,
0x9c,0x03,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x9c,0x01,
0x98,0x01,
0xd8,0x00,
0xd8,0x00,
0xf0,0x00,
0x70,0x00,
0x60,0x00,
0x78,0x00,
0x38,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xf8,0x00,
0xf8,0x00,
0xe0,0x00,
0x70,0x00,
0x38,0x00,
0xfc,0x01,
0xfc,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0xe0,0x00,
0xe0,0x00,
0x60,0x00,
0x70,0x00,
0x38,0x00,
0x38,0x00,
0x70,0x00,
0x60,0x00,
0x60,0x00,
0xe0,0x00,
0xe0,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x20,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x38,0x00,
0x38,0x00,
0x30,0x00,
0x30,0x00,
0x70,0x00,
0x70,0x00,
0x30,0x00,
0x30,0x00,
0x30,0x00,
0x38,0x00,
0x38,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x38,0x00,
0xf8,0x01,
0xc0,0x01,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,
0x00,0x00,

};

#endif  //(RES_OSD_H16_FONT)

