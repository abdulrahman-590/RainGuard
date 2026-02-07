# RainGuard

**An automated system that protects and dries clothes during rain.**

RainGuard is an Arduino‑based engineering project designed to automatically safeguard drying clothes from unexpected rain while also enabling continued drying using infrared heat panels. The system detects environmental conditions and reacts in real time—deploying a protective plastic cover and activating heat sources when needed.

---

## 🌧️ Overview

Traditional outdoor clothes drying is vulnerable to sudden weather changes. RainGuard solves this by combining **rain detection**, **automatic mechanical protection**, and **infrared drying**, creating a fully autonomous smart drying solution.

---

## ✨ Features

- 🌦️ **Automatic rain detection** using a moisture sensor
- 🛡️ **Auto‑deploying plastic cover** powered by motors and L293D motor driver
- 🔥 **Infrared heat panels** (bulb‑based) to continue drying during rain
- 🌤️ **Light detection via LDR** for environmental awareness
- 🤖 **Fully autonomous operation** with Arduino Uno control
- ⚡ **Real‑time response** to changing weather conditions

---

## 🧰 Hardware Components

- **Arduino Uno**
- **Moisture (rain) sensor module**
- **LDR (Light Dependent Resistor)**
- **2× DC motors** for plastic sheet mechanism
- **L293D motor driver IC**
- **Infrared heating bulbs/panels**
- **Breadboard, resistors, wiring, and 9V power supply**

---

## ⚙️ Working Principle

1. The **moisture sensor** continuously monitors rain conditions.
2. When rain is detected:
   - The **motors automatically pull a plastic sheet** over the clothes.
   - **Infrared bulbs activate** to assist drying even in wet weather.
3. The **LDR monitors ambient light**, helping optimize system behavior.
4. All logic and control are handled by the **Arduino Uno**, ensuring full automation.

---

## 🛠️ Setup & Build

### 1. Hardware Assembly

- Connect components according to the provided **circuit diagram**.
- Mount motors and plastic sheet on the **support frame**.
- Position infrared bulbs safely above the drying area.

### 2. Upload Arduino Code

1. Open the project in **Arduino IDE**.
2. Select **Arduino Uno** as the board.
3. Connect the Arduino via USB.
4. Upload the provided sketch.

### 3. Power On

- Provide external **9V power** for motors and circuitry.
- The system will begin **automatic monitoring and control**.

---

## 🔐 Safety Notes

- Ensure **proper insulation** around infrared bulbs to prevent overheating.
- Use a **stable power supply** suitable for motor load.
- Keep electronics protected from **direct water exposure**.

---

## 📄 License

This project is released under the **MIT License**, allowing free use, modification, and distribution with attribution.

---

## 👥 Contributors

- **Abdul Rahman**
- **M. Yousaf**
- **Fatika Batool**
- **Mahrukh Afzal**

---

## ⭐ Acknowledgment

RainGuard was developed as an **educational engineering project** demonstrating practical integration of **sensors, automation, and environmental response systems** using Arduino.

If you found this project interesting, consider **starring the repository** ⭐ to support future work.

