/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2023
 *      Author: nvtie
 */

#include "software_timer.h"

int timer_counter[20] = {0};
int timer_flag[20] = {0};

void setTimer(int duration, int index){
	if(index >= 0 && index < 20){
		timer_counter[index] = duration;
		timer_flag[index] = 0;
	}
}

void timerRun(){
	for(int i = 0; i <= 10; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
				timer_flag[i] = 1;
			}
		}
	}
}
