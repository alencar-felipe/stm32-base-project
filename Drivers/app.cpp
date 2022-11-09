#include "app.h"

#ifdef __cplusplus
extern "C" {
#endif

void app()
{
	while(1) {
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
		HAL_Delay(1000);
	}
}

#ifdef __cplusplus
}
#endif
