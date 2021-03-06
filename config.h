/* 
 * File:   config.h
 * Author: George
 *
 * Created on 2 de Maio de 2020, 10:34
 */

#ifndef CONFIG_H
#define	CONFIG_H

#include <stdio.h>
#include <string.h>
#include <pic18f4520.h>
#pragma config MCLRE = ON, WDT = OFF, OSC = HS

#define _XTAL_FREQ 16000000
#define ENABLE_TIMER T0CONbits.TMR0ON

#define TAM 16


#endif	/* CONFIG_H */

