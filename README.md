This is README for ESP8266MOD (NodeMCU) based project with following components:
* ESP8266(NodeMCU) / ESP32 - WROOM32
* GoldenMorning 0.96 Inch I2C/IIC 4-Pin OLED Display Module -WHITE 
*  MH ET Live QR Scanner
* Molicel A Grade INR-18650-P28A 3.6V 2800mAh 13C Li-ion Battery
* TP4056 1A Li-Ion Battery Charging Board Type C Connector with Current Protection 

In this example following pins are Used
1) FOR ESP8266
    -------------------------------------------------------
    |   ESP8266 PIN Fun.    |      GPIO       |     PIN   |
    | ----------------------|-----------------|------------
    | Transmit Data (TxD)   |       0         |     D3    |
    | Receive Data (RxD)    |       2         |     D4    |
    | Ground                |       GND	      |     GND   |
    | Serial Data (SDA)     |       4         |     D2    |
    | Serial Clock (SCL)    |       5         |     D1    |
    | Ground (GND)          |       GND       |     GND   |
    -------------------------------------------------------

2) FOR ESP32 WROOM32
    -------------------------------------------
    |   ESP8266 PIN Fun.    |      GPIO       |    
    | ----------------------|-----------------|
    | Transmit Data (TxD)   |       17        |
    | Receive Data (RxD)    |       16        |    
    | Ground                |       GND	      |   
    | Serial Data (SDA)     |       21        |    
    | Serial Clock (SCL)    |       22        |   
    | Ground (GND)          |       GND       |  
    -------------------------------------------

Note: To connect to wifi Set you hotspot ssid and password as following:

SSID = "hello"
PASS = "12345678"

1) After power on wait for ESP to connect to wifi network
2) After successful connection Scan QR code by bringing it in front of module
3) Light should automatically turn on and scan the QR code
4) Output will be displayed on the screen for 2 sec after successful scan.
(TO KNOW IF QR IS SCANED SUCCESSFULLY, WAIT FOR THE BEEP AFTER STEP 3)

-> Module is powered by LI-Po re-chargeable cell
-> To recharge cell plug in Type-C cable
