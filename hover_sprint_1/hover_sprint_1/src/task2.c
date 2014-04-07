/*
 * task2.c
 *
 * Created: 2014-03-12 10:46:14
 *  Author: Alf Stenbrunn & Mattias Nilsson
 */ 
#include <asf.h>
#include "task2.h"
#include "sema_signal.h"


void task2_uppgift(void);

/**
* A function for task2 printing a statement when task2 is being executed
*/
void task2_uppgift(){
	printf("Task2 gör sin uppgift\n");
}

/**
* Task2 "takes" the semaphore and finishes the execution
*/
void task2(void)
{
	for(;;)
	{	
		/* macro to take a semaphore. It must have been
		created with vSemaphoreCreateBinary().
		xSempahoreTake reurns pdTRUE if the semaphore was
		recived, pdFALSE if xBlockTime timed out before the semaphore
		became availible. */
		if(xSemaphoreTake(semafor_signal, portMAX_DELAY))
		{
			printf("Task2 'tar' semaforen\n");
			task2_uppgift();
			printf("Task2 har exekverats färdigt!\n");
		}
	}
}