# Programming

This is the part I was not the most excited about. While I wasn't quite dreading it, I just didn't do this project for the purpose of coding it. Now, this project has evolved into a programming heavy project and it teaches me new things every time I work on it.

## Arduino Beginnings

I started out by using an Arduino MEGA2650. Each leg had a run loop, and I ran the diagonal legs at the same time with a pause for the other diagonal legs. It also stopped when something was closer than 8cm to either ultrasonic sensor (HC-SR04) on the front. It was okay. It sure did wobble a lot, but it was exciting.

## The problem with Arduino

Although exciting, the Arduino was not powerful enough. Who would have guessed inverse kinematics would be difficult! (Not me in high school, since I had never heard of it or anything like it!). I read various articles and realized I was in over my head a little bit. Online, I saw other people were using ESP32s, Raspberry Pis, Jetson Nanos, and custom microprocessor setups. While I was really scared to use a RPi since I knew nothing about it, it looked like the best option for me.

![image](https://github.com/user-attachments/assets/494a3264-faca-4e79-8baf-ddb4fb6033ea)


## Raspberry Pi

I ordered a RPi 4B, but I got a whole kit with a keyboard, mouse, and book in the mail. That was pretty cool and also super useful. I used an old TV for my monitor and I tried to install ROS from scratch. It was my first time using Linux so of course I messed stuff up. I did learn a lot though and whenever I made irreversible errors by experimenting with what it could do, I just wiped the SD card and reinstalled Ubuntu 20.04.

![image](https://github.com/user-attachments/assets/79d88852-3b01-457e-a6b4-f14614b01620)

*this is one of the quail (Toaster) from the egg turner project working on the RPi*

## ROS

As of right now, I have ROS Noetic (on a Ubiquity Robotics pi image) on my Pi. I was going to use this to program it, but learning how to use ROS and run simulations has been slow with school and work. Since it has taken me so long, now ROS2 has become more used(?) (or I was living under a rock- probably more likely) and so I installed Jammy (for 24.04) on my school laptop so I could learn to use it without being tied to my desk at home. I also learned they're killing Gazebo (again, old news - I just discover stuff as I try to use it) so I will see if I need to upgrade to the replacement or if I do not care and will keep using it.

I also recently got a Slamtec LiDAR, so I will implement that seperately :) so exciting!

## Current

![image](https://github.com/user-attachments/assets/12cad5f5-61e5-4519-9410-7ebdb6bce502)

Slamtec LiDAR

![image](https://github.com/user-attachments/assets/09380102-f629-4b0a-aeb5-791bb9879167)

Dog in shambles waiting for me to program it

