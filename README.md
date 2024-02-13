# CONTRIBUTORS:-
Kshitij Saini
<br>
Rashi Arora
# ABOUT
This Project endeavors to revolutionize home security through the development of a sophisticated smart home application system designed for intruder detection. Leveraging the synergies of Internet of Things (IoT) technologies, including Light Dependent Resistor (LDR), ultrasonic, touch, and Infrared (IR) sensors, integrated with an Arduino-based hardware platform, the system provides a comprehensive solution for enhanced security and user-centric experiences.
The hardware design phase navigates the intricacies of seamlessly integrating diverse sensors into a cohesive framework, ensuring optimal placement and calibration. The software development involves crafting a robust codebase for the Arduino microcontroller, incorporating algorithms that enable real-time interpretation of sensor data, distinguishing between normal environmental fluctuations and potential intruder activities.
This research contributes to the broader discourse on the integration of IoT technologies in home security, providing insights into the advancements and potential future innovations in the field. The developed smart home application system signifies a significant stride towards fortifying security, convenience, and user-centric experiences in contemporary living environments. The amalgamation of various technologies, coupled with iterative. 
# COMPONENTS USED
1)LDR Sensor
2)Ultrasonic Sensor
3)Arduino UNO
4)IR Sensor
5)Touch Sensor
# CIRCUIT DIAGRAM
![CIRCUIT DIAG](https://github.com/rashi12122001/smart-home-intrusuion-system/assets/74211043/2c956634-f5a2-4011-936f-b23da7e78f1d)
# PROJECT WORKING
1. Initialization:
   - The Arduino initializes serial communication and sets up the pins for the IR sensor, ultrasonic sensor, buzzer, and bulb.

2. Loop Execution:
   - In each iteration of the main loop:
     - It reads the state of the IR sensor. If a person is detected (IR sensor output is HIGH), it proceeds to the next steps.
     - It uses the ultrasonic sensor to measure the distance to the detected person.
     - If the distance is less than or equal to 15 cm, indicating a person is within the specified range:
       - It activates the buzzer for a short beep.
       - It turns on the bulb.

3. Distance Measurement (getDistance Function):
   - The `getDistance` function triggers the ultrasonic sensor to send a pulse.
   - It measures the time taken for the pulse to bounce back (echo duration).
   - Using the speed of sound, it calculates the distance to the object (person) and returns the distance in centimeters.

4. Turn Off Alarm and Bulb:
   - If no person is detected (IR sensor output is LOW) or the person is outside the specified range, it turns off the buzzer and bulb.

Adjustments and Considerations:
- The threshold distance (15 cm) can be adjusted based on the desired proximity for triggering the alarm and bulb.
- The delay in the main loop ensures stability and prevents rapid and continuous triggering.




Limitations:
- This is a basic system, and it may not differentiate between multiple people or account for environmental factors affecting sensor readings.
- The real-world effectiveness may vary based on sensor accuracy, placement, and environmental conditions.

Remember, this explanation is based on the provided code and assumes ideal conditions. In real-world scenarios, testing and adjustments may be necessary for optimal performance.

# FLOW CHART
![Blank board](https://github.com/rashi12122001/smart-home-intrusuion-system/assets/74211043/bded018b-fd96-474e-9d78-97c1f3a87142)

# RESULTS
The results underscore the project's success in creating an intelligent, responsive, and user-centric smart home security system. This innovation paves the way for enhanced security paradigms in contemporary living spaces, reflecting the potential of IoT technologies and Arduino integration in redefining home security standards.

![image](https://github.com/rashi12122001/smart-home-intrusuion-system/assets/74211043/3f84b32a-2bee-49f8-ae3e-e5b4d4fd601f)
