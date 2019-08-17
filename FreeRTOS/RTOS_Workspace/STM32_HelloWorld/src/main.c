/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    08-August-2019
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"

void vATaskFunction( void *pvParameters)
{
	/* Variables can be declared just as per a normal function. Each instance
	 * of a task created using this function will have its own copy of the
	 * iVariableExample variable. This would not be true if the variable was
	 * declared static - in which case only one copy of the variable would exist
	 * and this copy would be shared by each created instance of the task.
	 */
	int iVariableExample = 0;

	/* A task will normally be implemented as in infinite loop*/
	for(;;)
	{
		/* The code to implement the task functionality will go here. */
	}

	/* Should the task implementation ever break out of the above loop
	 * then the task must be deleted before reaching the end of this function.
	 * The NULL parameter passed to vTaskDele() function indicates that
	 * the task to be deleted is the calling (this) task.
	 */
	vTaskDelete( NULL );
}
			

int main(void)
{
	TaskFunction_t vATaskFunction;
	const char * const taskA;
	unsigned short usStackDepth = 512;
	void *pvParameters = NULL;
	UBaseType_t uxPriority = 1;
	TaskHandle_t *pxCreatedTask = NULL;

	BaseType_t xTaskCreate( vATaskFunction, taskA, usStackDepth, pvParameters, uxPriority, pxCreatedTask);
}
