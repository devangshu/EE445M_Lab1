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
        // LCD COMMANDS:
        //      lt 0 hello
        //      lb 0 hello
        case 'l':
            UART_OutString("LCD \n\r");
            char linenum_ = string[3];
            int linenum = linenum_ - '0';
            // rest of string: index 5 to index 19
            char userstring[16];
            strncpy(userstring, &string[5], 16);
            userstring[15] = '\0';

            int d = 0;
            if (string[1] == 't') {
                d = 0;
            } else if (string[1] == 'b') {
                d = 1;
            }

            ST7735_Message(d, linenum, userstring, -1);

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
        case 't':
            UART_OutString("Testing OS Time Functions\n\r");
            uint32_t time = 0;
            if(string[3] == 'r'){
                OS_ClearMsTime();
                UART_OutString("Time has successfully been cleared\n\r");
                time = OS_MsTime();
                UART_OutString("The current time is ");
                UART_OutUDec(time);
                UART_OutString("ms. \n\r");
                string[3] = 0; // Clears letter from array, can be handled better
            } else {
                time = OS_MsTime();
                UART_OutString("The current time is ");
                UART_OutUDec(time);
                UART_OutString("ms. \n\r");
            }
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
            UART_OutString("t - OS time \n\r");
            UART_OutString("Usage: t [flag] \n\r");
            UART_OutString("Flags: -r: reset time\n\r");
            UART_OutString("------------------------------ \n\r");
            break;

        }
    }

}



