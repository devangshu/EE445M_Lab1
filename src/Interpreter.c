// *************Interpreter.c**************
// Students implement this as part of EE445M/EE380L.12 Lab 1,2,3,4 
// High-level OS user interface
// 
// Runs on LM4F120/TM4C123
// Jonathan W. Valvano 1/18/20, valvano@mail.utexas.edu
#include <stdint.h>
#include <string.h> 
#include <stdio.h>
#include "../RTOS_Labs_common/OS.h"
#include "../RTOS_Labs_common/ST7735.h"
#include "../inc/ADCT0ATrigger.h"
#include "../inc/ADCSWTrigger.h"
#include "../RTOS_Labs_common/UART0int.h"
#include "../RTOS_Labs_common/eDisk.h"
#include "../RTOS_Labs_common/eFile.h"
#include "../RTOS_Labs_common/ADC.h"

char string[20];


// Print jitter histogram
void Jitter(int32_t MaxJitter, uint32_t const JitterSize, uint32_t JitterHistogram[]){
  // write this for Lab 3 (the latest)
	
}

static void OutCRLF(void){
  UART_OutChar(CR);
  UART_OutChar(LF);
}

// *********** Command line interpreter (shell) ************
void Interpreter(void){ 
  // write this  
    UART_OutString("EE445M Lab 1 Interpreter");
    OutCRLF();

    while(1){
        UART_OutString("> ");
        UART_InString(string,19);
        OutCRLF();
        switch(string[0]){
        case 'l':
            UART_OutString("LCD \n\r");
            break;
        case 'a':
            UART_OutString("Testing ADC on channel ");
            UART_OutChar(string[2]);
            UART_OutString("...\n\r");
            uint32_t channel = string[2] - 48;
            uint32_t adc_in = 0;
            ADC_Init(channel);
            adc_in = ADC_In();
            UART_OutUDec(adc_in);
            UART_OutString("\n\r");
            break;
        case 'h':
        default:
            UART_OutString("Welcome to the help menu \n\r");
            UART_OutString("------------------------------\n\r");
            UART_OutString("a - ADC test \n\r");
            UART_OutString("Usage: a <channel number> \n\r");
            UART_OutString("------------------------------\n\r");
            UART_OutString("l - LCD test \n\r");
            UART_OutString("Usage: l [display number] <message> <value> \n\r");
            UART_OutString("------------------------------ \n\r");
            break;

        }
    }

}



