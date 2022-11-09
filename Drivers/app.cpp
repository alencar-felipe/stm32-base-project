#include "app.h"

// FreeRTOS tasks
void vTask1(void *pvParameters);

#ifdef __cplusplus
extern "C" {
#endif

void app()
{
	// Create Tasks
	xTaskCreate(vTask1, "Task_1", 256, NULL, 1, NULL);

	// Start the Scheduler
	vTaskStartScheduler();
}

#ifdef __cplusplus
}
#endif

void vTask1(void *pvParameters)
{
	while(1)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
		vTaskDelay(300);
	}
}
