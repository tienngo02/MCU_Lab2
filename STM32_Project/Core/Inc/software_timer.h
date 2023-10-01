/*
 * software_timer.h
 *
 *  Created on: Oct 1, 2023
 *      Author: nvtie
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[20];

void setTimer(int duration, int index);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
