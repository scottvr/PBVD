# Design and Implementation of a Peanut Butter Vector Display (PBVD)

This repository contains the documentation, code, and bill of materials (BOM) necessary to create a luminous display using peanut butter as a cost-effective and renewable display material.

Buikd process details and the original paper have moved to the 

# [PBVD Wiki](https://github.com/scottvr/PBVD/wiki)

[Wiki - BOM](https://github.com/scottvr/PBVD/wiki/Ch-0.--BOM)

## Arduino Code

The Arduino sketch for controlling the PBVD is included in the `code` directory. The sketch controls the x/y movement of the laser and the activation of the laser module.

(Note: this is code for a raster "vector" display driver.  For *real* vector display, consider using the audio signal driven flyback yoke described in the assembly documents, and use the provided python script to convert your image to an audio signal that will cause the laser beam to trace the vector path of your image onto the display surface.)

## Assembly Instructions

Have moved to [the wiki.](https://github.com/scottvr/PBVD/wiki)

## Future Exploration

### Legumen$

We propose an investigation into the luminosity-to-dollar ratio among various consumer brands of peanut butter, including a comparison with the [NIST Standard Reference Material 2387.](https://shop.nist.gov/ccrz__ProductDetails?sku=2387) This analysis involves measuring the luminous intensity, calculating the cost per unit weight, and determining the luminosity per dollar for each brand.

For example on a cost-only basis comparison, at the time of this update, the aquisition cost of NIST standard peanut butter (which is sold in packs of 3 x 170g jars, of which you would need a quantity four order) to approximately fill the volume of the described enclosure would come at a cost of  $4868.00 USD. A gallon bucket of "Barney Butter" currently lists for $45.99 USD on Amazon.com. Is it worth the  price difference for the standardized PB? This is currently an open question in the fields of edible and biodegradable display technology research. 

The price per gram is a simple calculation, but without quantifying luminosity, we cannot put a value on the price/performance ratio. This is an area very much in need of this important research. We suggest a new standard unit for this measurement, Legumen$.

### Cryonic PBVD

It is well-established that chilled peanut butter will emit a brighter-appearing light (a sustained period of luminosity correlating.) This is an area ripenfor research. What is the optimal temperature of the pranut butter display substrate for metrics such as response time, ghosting, fade time, brightness, etc. Some experimental evidence  exists (i.e., on YouTube) demonstrating the effect of liquid nitrogen-cooled PB display substrate, but measurement data is sparse. 

## Contributing

We welcome contributions to the PBVD project. If you have suggestions for improvements, additional features, or other ideas, please feel free to submit a pull request or open an issue.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

---

![PBVD Prototype](images/pbvd_prototype.jpg)

