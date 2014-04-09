/*
 * setup_PWM.c
 *
 * Created: 2014-04-08 18:52:11
 *  Author: ab5344
 */ 

#include <asf.h>
#include "setup_PWM.h"

void initialize_PWM(void)
{
	//setup pins
	set_pin();
		
	//1.Define the PWM channel instance in order to configure channel 0:
	pwm_channel_t pwm_channel_instance;
		
	//2.Enable the module clock for the PWM peripheral:
	pmc_enable_periph_clk(ID_PWM);
		
	//3.Disable PWM channel 0:
	pwm_channel_disable(PWM, PWM_CHANNEL_0);
		
	//4.Setup clock for PWM module (only clock A, not B):
	pwm_clock_t clock_setting = {
		.ul_clka = 0,
		.ul_clkb = 1000 * 100,
		.ul_mck = 84000000
	};
		
	//1.The expected frequency is 1KHz, system main clock is 84MHz.
	//2.Initialize channel instance and configure PWM channel 0, selecting clock
	//A as its source clock and setting the duty cycle at 50%:
	//1. Period is left-aligned and output waveform starts at a low level.
	//1.The pwm_channel_instance can be re-used to configure other PWM channels after setting the required parameters.
	// One PWMH0 port is PC3 -> D35
	pwm_init(PWM, &clock_setting);
	pwm_channel_instance.ul_prescaler = PWM_CMR_CPRE_CLKB;
	pwm_channel_instance.ul_period = 100;
	pwm_channel_instance.ul_duty = 30;
	pwm_channel_instance.channel = PWM_CHANNEL_0;
	pwm_channel_instance.polarity = PWM_HIGH;
	pwm_channel_instance.alignment = PWM_ALIGN_CENTER;
	
	pwm_channel_init(PWM, &pwm_channel_instance);
	
	pwm_channel_enable(PWM, PWM_CHANNEL_0); 
}

// configure pins using PIO
void set_pin(void)
{
	pmc_enable_periph_clk(ID_PIOC);
	// set as output, default LOW
 	pio_set_output(PIOC, PIO_PC3, LOW, DISABLE, ENABLE);
 	pio_set_peripheral(PIOC, PIO_PERIPH_B, PIO_PC3);
}

// void setPWMpin(uint32_t pin) {
// 	PIO_Configure(g_APinDescription[pin].pPort,
// 	PIO_PERIPH_B, //Arduino does not allow high PWM by default
// 	g_APinDescription[pin].ulPin,
// 	g_APinDescription[pin].ulPinConfiguration);
// }
// 
// void setup_pins() {
// 	
// 	setPWMpin(34); //PWM L0
// // 	setPWMpin(36); //PWM L1
// // 	setPWMpin(38); //PWM L2
// // 	setPWMpin(40); //PWM L3
// // 	setPWMpin(9);  //PWM L4
// // 	setPWMpin(8);  //PWM L5
// // 	setPWMpin(7);  //PWM L6
// // 	setPWMpin(6);  //PWM L7
// 
// 	pmc_enable_periph_clk(ID_PWM);
// 	for (int ch=0; ch<8; ch++) {
// 		PWMC_DisableChannel(PWM, ch);
// 	}
// 
// 	// set PWM clock A to 1MHz
// 	PWMC_ConfigureClocks(1000000,0,VARIANT_MCK);
// 
// 	for (int ch=0; ch<8; ch++) {
// 		PWMC_ConfigureChannel(PWM,ch,PWM_CMR_CPRE_CLKA,0,0);
// 		PWMC_SetPeriod(PWM,ch,2500); // 2.5ms for 400Hz
// 		PWMC_SetDutyCycle(PWM,ch,1000); //1ms
// 		PWMC_EnableChannel(PWM,ch);
// 	}
// }




/************************************************************************/
/* How to use
/* ?pwm_channel_enable(PWM, PWM_CHANNEL_0); 
/*******************************************************************/