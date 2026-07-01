# 🌍 Air Quality Index (AQI) Checker – Arduino + MQ-135  

## 📌 Project Status
**Status:** Arduino sensor prototype.  
This repository contains a working AQI-monitoring sketch and setup notes for an MQ-135-based air quality display model.

---

## 📖 Project Overview  
This project is an **Arduino-based AQI monitoring system** that measures air quality using the **MQ-135 gas sensor**.  
The system displays real-time AQI values on an LCD screen and provides alerts using an LED and buzzer when air pollution levels exceed safe limits.  

It is a simple yet effective way to raise awareness about air quality in homes, schools, and urban environments.  

---

## ⚙️ Features  
- ✅ Real-time air quality measurement using MQ-135 sensor.  
- 📟 16x2 LCD displays current AQI value.  
- 🚨 LED & buzzer alerts when AQI crosses safe thresholds.  
- 🌡️ Monitors gases like **CO₂, NH₃, benzene, smoke**, and general air pollution.  
- 💡 Compact, low-cost design for indoor/outdoor monitoring.  

---

## 🛠️ Components Used  
- Arduino UNO (or compatible board)  
- MQ-135 Gas Sensor  
- 16x2 LCD Display (with potentiometer for contrast control)  
- Buzzer  
- LED (air quality status indicator)  
- Resistors & Jumper wires  
- Breadboard  

---

## 🔌 Circuit Connections  

| Component        | Arduino Pin |
|------------------|-------------|
| MQ-135 Output    | A0          |
| LCD RS           | D7          |
| LCD EN           | D6          |
| LCD D4           | D5          |
| LCD D5           | D4          |
| LCD D6           | D3          |
| LCD D7           | D2          |
| Buzzer           | D8          |
| LED              | D9          |

*(Adjust based on your exact wiring/code setup.)*  

---

## 📜 How It Works  
1. The **MQ-135 sensor** detects air quality by measuring gas concentration levels.  
2. Arduino reads the analog signal from MQ-135 and converts it into an **AQI value**.  
3. The **LCD** displays the current AQI status (Good, Moderate, Poor, Hazardous).  
4. If pollution levels rise above a threshold, the **buzzer sounds** and the **LED blinks** as an alert.  

---

## 💻 Usage Instructions  
1. Connect the circuit as per the wiring table.  
2. Upload the provided Arduino sketch (`AQI_Monitor.ino`) to your Arduino board.  
3. Power the system via USB or battery.  
4. Observe AQI values on the LCD.  
5. If AQI is poor, the system will automatically trigger **LED + Buzzer alerts**.  

---

## ⚠️ Calibration Note
MQ-135 readings vary with sensor warm-up time, environment, and calibration. For accurate measurements, calibrate the sensor against known conditions before relying on AQI thresholds.

---

## 🚀 Future Improvements  
- Integrate **Wi-Fi (ESP8266/ESP32)** to upload AQI data to the cloud.  
- Develop a **mobile app dashboard** for real-time monitoring.  
- Add **data logging (SD card)** for long-term air quality analysis.  
- Expand to measure **temperature, humidity, and dust particles** with additional sensors.  

---
