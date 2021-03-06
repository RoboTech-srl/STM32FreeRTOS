/*
 * @file    task.h
 * @author  Frederic Pillon <frederic.pillon@st.com> for STMicroelectronics.
 * @brief   Include header file to match Arduino library format
 */
#ifndef _ARDUINO_TASK_H_
#define _ARDUINO_TASK_H_

#include "FreeRTOS/Source/include/task.h"

PRIVILEGED_FUNCTION void vTaskSwitchContext( void ) __attribute__((used));

#endif //_ARDUINO_TASK_H_
