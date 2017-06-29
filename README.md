# MAC address scan using ESP-8266 wifi module

## introduction

This project let's you scan mac address of all wi-fi devices present around you.

### Prerequisites

```
1) Arduino mega
2) ESP-8266 wi-fi module
```
### Installing

```
1) open serial monitor in arduino ide and set baud rate 115200.
2) set mode of wifi module by using CWMODE=3
```


### Setup

```
1) make connection according to this https://arduino.stackexchange.com/questions/18903/connecting-esp8266-with-arduino-uno-wifi-shield-not-present.

2) open serial monitor and set baudrate according to the baud rate of esp module. by default it is
115200. 

3) Select NL/CR.

4) Burn code in arduino to scan all wi-fi names.

5) To check MAC address of wi-fi devices uncommrnt line 32 in given code.

6) To get names according to MAC address you have to prestore data in comparision() function.

```



