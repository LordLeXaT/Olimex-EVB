/*
    general config
*/

#define VERSION "0.0.1"

/*
 OLIMEX-EVB (ESP32 Version) PinoutConfig
*/
 
// The two relais
#define RELAY0          32
#define RELAY1          33
 
// The one user definable button
#define BUTTON          34
 
// The IR 
#define IR_RX            39
#define IR_TX            12
 
// I2C
#define I2C0_SDA        13
#define I2C0_SCL        16
 
// PWM Pins
#define PWM0             9 
#define PWM1            10
 
// SPI
#define SPI0_SCK        14
#define SPI0_MISO        2
#define SPI0_MOSI       15
#define SPI0_CS0        17
 
// UART
// UART0 should not be used in Code its USB UART
#define UART0_TX         1
#define UART0_RX         3
// UART1 free to be used
#define UART1_TX         4
#define UART1_RX        36
 
// ETHERNET
#define ENET_TX_CLK      0
#define ENET_TX_EN      21
#define ENET_RX_DV      27
#define ENET_TXD0       19
#define ENET_TXD1       22
#define ENET_RXD0       25
#define ENET_RXD1       26
#define ENET_MDIO       18
#define ENET_MDC        23