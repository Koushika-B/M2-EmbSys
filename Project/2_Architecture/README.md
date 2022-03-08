# 2 ARCHITECTURE

## 2.1 BLOCK DIAGRAM

![Block Diagram](https://user-images.githubusercontent.com/98836479/157279152-27998c8e-860f-4933-81d9-27128a35c5ae.PNG)

![hh](https://user-images.githubusercontent.com/98836479/157230589-5d0c8360-388d-4fc4-bb3b-727644410edc.PNG)

## 2.2 COMPONENTS DESCRIPTION

### 2.2.1 SENSORS

**2.2.1.1 ANALOG SENSOR**

**Gas Sensor**

Gas Sensor is an analog sensor used to sense the gas leakage. It sends signal to the exhaust fan through Arduino UNO.

**2.2.1.2 DIGITAL SENSOR**

**Fire Sensor**

Fire Sensor is a digital sensor used to sense the occurence of the fire and it also sends signal to the buzzer through Arduino UNO.

### 2.2.2 MICROCONTROLLER

**2.2.2.1 Arduino UNO**

Arduino UNO is used to control the entire process. It sends signals received from gas and fire sensors to the exhaust fan and buzzer respectively.

**2.2.2.2 Clock**

Clock is an internal component of Arduino UNO. It measures the time.

**2.2.2.3 EEPROM**

EEPROM is user modifiable read-only memory(ROM) that allows all users to erase and reprogram stored data repeatedly in an application.

### 2.2.3 ACTUATORS

**2.2.3.1 Buzzer**

Buzzer is connected with Aruino UNO. It is used to intimate the occurence of the fire.

**2.2.3.2 Relay**

Relay is used to switch on and off the exhaust fan according to the command received from Arduino UNO.

**2.2.3.3 Exhaust Fan**

Exhaust fan is connected with the relay. It is used to send out the gas leakage by means of blowing.

### 2.2.4 POWER SUPPLY

**2.2.4.1 Transformer**

Transformer is used in this project is a step down transformer. It is used to step down 230 AC Voltage into 5 AC voltage.

**2.2.4.2 Rectifier**

Rectifier is used to convert 5 volt AC power supply into 5 volt DC power supply.

**2.2.4.3 Regulator**

Regulator is used to send a constant voltage to the system.

## 2.3 BEHAVIORAL DIAGRAMS

### 2.3.1 High Level Flow Chart Behavioral Diagram

![llf](https://user-images.githubusercontent.com/98836479/157252515-d3626ee5-f08c-4be2-b313-b2670feba3eb.PNG)

### 2.3.1 Low Level Flow Chart Behavioral Diagram

![High Level Flow chart](https://user-images.githubusercontent.com/98836479/157252880-09d9304f-47a2-4bec-a94c-90c71b1768fb.PNG)

## 2.4 STRUCTURAL DIAGRAMS

### 2.4.1 High Level Use case Structural Diagram

![hf](https://user-images.githubusercontent.com/98836479/157248846-cb003b68-210e-4e14-9b4f-688c2432fa76.PNG)

## 2.4.2 Low Level Use case Structural Diagram

![lf](https://user-images.githubusercontent.com/98836479/157248962-a4e711c2-532f-461b-b4f3-d60cb30447fd.PNG)

## 2.5 BEST METHODS FOLLOWED

* Exact mapping of code to avoid confusions

* Mentioning of both high level and low level behavioral and structural diagrams for better understanding

* Followed the exact symbols to make the understanding easier

* Detailed explanation in behavioural and structural diagrams


