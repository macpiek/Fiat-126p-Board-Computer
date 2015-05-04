/*
 * OledConfig.h
 *
 * Created: 2015-04-07 20:31:04
 *  Author: Maciek
 */ 


#ifndef OLEDCONFIG_H_
#define OLEDCONFIG_H_

#define SS1306_OLED_GEOM_W 128
#define SS1306_OLED_GEOM_H 64

#define SS1306_OLED_CLK PC6
#define SS1306_OLED_DAT PC5
#define SS1306_OLED_RST PC4
#define SS1306_OLED_DC  PC3
#define SS1306_OLED_CS  PC2

#define SS1306_OLED_PORTC_MASK _BV(SS1306_OLED_CLK) | _BV(SS1306_OLED_DAT) | _BV(SS1306_OLED_RST) | _BV(SS1306_OLED_DC) | _BV(SS1306_OLED_CS); 

#endif /* OLEDCONFIG_H_ */