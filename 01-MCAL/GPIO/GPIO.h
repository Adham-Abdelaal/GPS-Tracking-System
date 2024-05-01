//port F switches
#define GPIO_SW1 0
#define GPIO_SW2 1
#define GPIO_SW_NOT_PRESSED 1

//PortF lED color

#define GPIO_RED_LED 0
#define GPIO_GREEN_LED 1
#define GPIO_BLUE_LED 2

//PortF LED on&off
#define GPIO_LED_ON 1
#define GPIO_LED_OFF 0

//Used Functions
void GPIO_initPortB();
void GPIO_initPortF(void);
unsigned char GPIO_getSwitchesValue(unsigned char sw);
void GPIO_setLedValue(unsigned char ledColor, unsigned char ledState);
void GPIO_PORTB_setPort(unsigned char sevensegmentValue);
