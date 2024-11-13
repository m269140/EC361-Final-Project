int main(void){
	GPIO_Config();
	
	//Loop through button and joystick inputs and LCD screen output
	
	while(1){}
}

void GPIO_Config(void){
	// Enable clocks for GPIOA, GPIOB, and GPIOC
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;  // Enable GPIOA clock
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;  // Enable GPIOB clock
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;  // Enable GPIOC clock

	unsigned int *GPIOA = (unsigned int*)0x48000000;
	unsigned int *GPIOB = (unsigned int*)0x48000400;
	unsigned int *GPIOC = (unsigned int*)0x48000800;
	
	//Enable GPIOA as an input

	//Enable GPIOB as an output

	//Enable GPIOC as an output
	
	//Enable button to 
}
