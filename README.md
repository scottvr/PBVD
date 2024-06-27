# PBVD
Peanut Butter Vector Display

This repository contains the documentation, code, and bill of materials (BOM) necessary to create a luminous display using peanut butter as a cost-effective and renewable display material.

I am in the process of moving all documentation into the [PBVD Wiki](https://github.com/scottvr/PBVD/wiki)

## Project Overview

The PBVD utilizes a 405nm diode laser to create luminous patterns within a peanut butter-filled display case. By harnessing the phosphorescent/flourescent properties of peanut butter, this project aims to demonstrate a novel approach to vector display technology.

For details, status, and history, check out the [PBVD wiki](https://github.com/scottvr/PBVD/wiki/PBVD-blog), which I will be using as a sort of blog. 
## System Components

- **Display Case**: A 25 cm x 17.5 cm x 5 cm rectangular prism made of plexiglass or a similar transparent material.
- **Laser Module**: A 200mW 405nm diode laser.
- **Mechanical Yoke**: An x/y axis mechanical yoke for precise laser positioning.
- **Control Unit**: An Arduino or similar microcontroller to drive the motors and control the laser.
- **Peanut Butter**: For initial experiments, we recommend a consumer brand such as Peter Pan due to its cost-effectiveness.

## Build Materials

- **Display Case Material**: Plexiglass, 25 cm x 17.5 cm x 5 cm
- **405nm Diode Laser**: 200mW
- **Stepper Motors**: 2x NEMA 17 stepper motors
- **Arduino Uno**: 1x Arduino Uno microcontroller
- **Motor Drivers**: 2x A4988 stepper motor drivers
- **Power Supply**: 12V 2A power supply
- **Wiring and Connectors**: Assorted wires and connectors
- **Peanut Butter**: Approximately 2.4 kg

A full BOM will be in the ~~project directory~~[Wiki - BOM](https://github.com/scottvr/PBVD/wiki/BOM)

## Arduino Code

The Arduino sketch for controlling the PBVD is included in the `code` directory. The sketch controls the x/y movement of the laser and the activation of the laser module.

## Assembly Instructions

Detailed assembly instructions are provided in the `docs` directory. These instructions cover the setup of the display case, the mounting of the laser module, and the wiring of the control unit.

## Future Exploration

As an exercise for the reader, we propose an investigation into the luminosity-to-dollar ratio among various consumer brands of peanut butter, including a comparison with the NIST Standard Reference Material 2387. This analysis involves measuring the luminous intensity, calculating the cost per unit weight, and determining the luminosity per dollar for each brand.

## Contributing

We welcome contributions to the PBVD project. If you have suggestions for improvements, additional features, or other ideas, please feel free to submit a pull request or open an issue.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

---

![PBVD Prototype](images/pbvd_prototype.jpg)

