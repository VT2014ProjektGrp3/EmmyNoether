/**
 * \lab3e
 *
 * Bonusuppgifter lab3e
 *
 *  Author: Alf Stenbrunn & Mattias Nilsson
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>
#include "task1.h"
#include "setup_PWM.h"
#include "sema_signal.h"

xSemaphoreHandle semafor_signal = 0;

static void configure_console(void)
{
	const usart_serial_options_t uart_serial_options = {.baudrate = CONF_UART_BAUDRATE, .paritytype = CONF_UART_PARITY };
	sysclk_enable_peripheral_clock(CONSOLE_UART_ID);
	stdio_serial_init(CONF_UART, &uart_serial_options);
	/* Stdout shall not be buffered */
	#if defined(__GNUC__)
	setbuf(stdout, NULL);
	#else
	/* Redan i fallet IAR's Normal DLIB default
	konfiguration:
	* sänder en tecken åtgången
	*/
	#endif
}
int main(void)
{
	/* Initiera SAM systemet */
	sysclk_init();
	board_init();
	configure_console();
	initialize_PWM();
	
	/* Print demo information */
	printf("-- Freertos Exempel - Semaforer --\n\r");
	printf("-- %s\n\r", BOARD_NAME);
	printf("-- Kompilerad: %s %s --\n\r", __DATE__, __TIME__);
	/* a semaphore cannot be used wihtout calling vSemaphoreCreateBinary() */
	vSemaphoreCreateBinary(semafor_signal);
	/* Create the task giving the semaphore */
// 	if (xTaskCreate(task1, (const signed char * const) "Task1", 1024, NULL, 1,
// 	NULL) != pdPASS)
// 	{
// 		printf("Misslyckades med att skapa Boss tasken\r\n");
// 	}


	/* Create a task taking the semaphore and doing it’s stuff */
/*	if (xTaskCreate(task2, (const signed char * const) "Task2", 1024, NULL, 2,
	NULL) != pdPASS)
	{
		printf("Misslyckades med att skapa Employee tasken\r\n");
	}*/


	/* Start the scheduler */
	//vTaskStartScheduler();
}
