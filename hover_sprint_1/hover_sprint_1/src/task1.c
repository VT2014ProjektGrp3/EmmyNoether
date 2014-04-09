/*
 * task1.c
 *
 * Created: 2014-03-12 10:46:01
 *  Author: Alf Stenbrunn & Mattias Nilsson
 */ 
#include <asf.h>
#include "task1.h"
#include "sema_signal.h"

/**
* Task1 with the function that give the semaphore every other second.
*/
void task1(void *pointer)
{
	pwm_channel_enable(PWM, PWM_CHANNEL_0); 
	
	for(;;)
	{
		printf("VI HAR KOMMIT SÅ LÅNGT\n");

// 		printf("Task1 skickar signal och 'ger' semaforen till task2\n");
// 		/* Makro to give a semaphore. The semaphore must
// 		have been created by calling vSemaphoreCreateBinary()
// 		*/
// 		xSemaphoreGive(semafor_signal);
// 		printf("Task1 slutar ge signal\n");
// 		printf("\n");
// 		/* Every other second task1 signals to task2 */
// 		vTaskDelay(2000);
	}
}