# ArduinoRCCar
A RC car using Arduino Nano and HC Bluetooth module connected to smartphone to control.


<a id="readme-top"></a>
[![LinkedIn][linkedin-shield]][https://www.linkedin.com/in/rvrezini]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">🚗 Arduino RC Car</h3>

  <p align="center">
    An Arduino-based remote-controlled (RC) car using Arduino Nano.
    <br />
    <a href="https://github.com/github_username/repo_name"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/github_username/repo_name">View Demo</a>
    &middot;
    <a href="https://github.com/github_username/repo_name/issues/new?labels=bug&template=bug-report---.md">Report Bug</a>
    &middot;
    <a href="https://github.com/github_username/repo_name/issues/new?labels=enhancement&template=feature-request---.md">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-screenshot]](https://example.com)


An Arduino-based remote-controlled (RC) car that combines electronics, coding, and robotics to create a fun and customizable vehicle. This project is perfect for hobbyists, students, and makers looking to explore wireless communication, motor control, and sensor integration.

<p align="right">(<a href="#readme-top">back to top</a>)</p>


## ✨ Features
- **Wireless Control** – Operated using the [Bluetooth RC Car](https://bluetooth-rc-controller.br.aptoide.com/app) app  
- **Motor Control** – Move forward, reverse, and turn using the L298N motor driver  
- **Simple & Expandable** – Easily add sensors like ultrasonic for obstacle detection  
- **Customizable** – Adjust speed, controls, and features  

## 🛠️ Components Used
- **Kit Chassis 4 Wheels 4WD**
- **Arduino Nano**  
- **2 Modules H Bridge L293d Motor Driver (one for each two wheels)**  
- **DC Motors with Wheels**  
- **Bluetooth Module (HC-05/HC-06)**  
- **Wire Jumpers Cables**
- **Power Supply (LiPo battery or battery pack, i used four 18650 batteries)**  
- *Optional:* Ultrasonic Sensor, LEDs, Buzzer  

## 📜 How It Works
The Arduino receives commands from the **Bluetooth RC Car** app via the HC-05/HC-06 module and translates them into motor movements for the L293d Motor Drivers. Additional sensors can be integrated for autonomous features.

## 🚀 Getting Started
1. Assemble the Chassis with the DC Motors and Wheels.  
2. Assemble the Motos Drivers, Bluetooth Module, Arduino Nano and the Battery Pack to the chassis
2. Upload the Arduino code.  
3. Pair your phone with the Bluetooth module.  
4. Open the **Bluetooth RC Car** app and connect to the car.  
5. Start driving your RC car! 🚗💨  

---

📌 *Feel free to modify the project and add new features!*



<!-- ROADMAP -->
## Roadmap

- [✅] Bluetooth function
- [ ] Battery indicator
- [ ] Object impact avoidance

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Robson Vitor Rezini - rvrezini@gmail.com

Project Link: [https://github.com/rvrezini/ArduinoRCCar](https://github.com/rvrezini/ArduinoRCCar)

<p align="right">(<a href="#readme-top">back to top</a>)</p> 