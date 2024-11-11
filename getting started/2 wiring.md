After assembly, I began working on the code using the breadboard and arduino. 

I tested each legs code individually. I had the robot sitting on a flower pot, but it was too short so I hung him from the ceiling. Now that he was assembled, he had waaay more personality and I named him Newt ([like this little fellow](https://www.gertjanverspui.com/eu-species-list/amphibians-of-europe/salamanders-newts/)):

![image](https://github.com/user-attachments/assets/5cea1f0d-37bc-45b0-b325-061d5e0c2eee)

*everyone always asks "oh! newt like isaac newton?" and the answer is no. unfortunately I am both not clever enough to think to name him after a famous scientist, and too stubborn to change his name now. Hence he is named after this cute little amphibian*

Anyways, here he is hanging from the ceiling like a very strange disco ball:

![image](https://github.com/user-attachments/assets/425466a4-6447-4489-84d3-712fcc0e5d2e)

At this point, he was powered from a wall power supply. I had learned earlier that I could not power 12 servos from the Arduino or else it gets unhappy. My incredibly cheap backup MEGA2560 I got from Aliexpress or something did not like to do more work than it was meant to do, and it let the magic smoke out. I am not sure why I did not see that coming, because it made sense the second it happened.

I needed to free Newt from the wall power supply since his legs were getting tangled in the wires. I talked to my dad and learned how to spot weld. I used a car battery and [a spot welder we got on Amazon](https://www.amazon.com/Havcybin-Welding-Machine-Portable12V-Battery/dp/B098T2H1XQ?dib=eyJ2IjoiMSJ9.G0mKO3y2SXQn7xtnBkxe6UQYx1ipIRREe9FkBhDnVj4VhiCyu99_glruJZxYoLrS7DVCsJ4ZNgIVCkjR0YCrzC3ZJhSDKWWI2MXpvYi2WH6b9LqXUOiCb4agn4E4x_gHDzgZTPPMa2MfGzXS8XKD0m20KpBCg0yNE3w7vv832nQ-Ge7rRln5-3U923rC4SWjzClNlKpWHrUNH39yOGeu33uo8fvHaokZddkOE0J_sEizdL-HT4IodeFvMw4fi3y_b0yEcFtMHorJVkV6FdLNjNy5ZMflfk_bn17KvtTaCfQ.dQJP6afMV8V78csy8832EhS7f6y5zp0hP7iQ1fhsZbI&dib_tag=se&keywords=car+battery+spot+welder&qid=1731306100&sr=8-7) to make the battery packs. I learned about how to spot weld and why we spot weld instead of solder batteries. I used 4 18650 batteries. to get 7.2V output. 

Now the voltage was too high for my servos since I changed where the power was coming from. I got [a buck converter](https://www.amazon.com/WWZMDiB-Converter-Adjustable-Regulator-Protection/dp/B0B825HRB9?crid=14QKY3A72I0YA&dib=eyJ2IjoiMSJ9.BZOlSKwR2LgoeOujzNQAvbTJyyJvuPV0EnV8bYlrFUKJkamJ2xzUVamw8r0BcHztCZvp1J-O6egFwJ5Itl4bLZX6H5KMix2oo7eWjKCgZxaI_3y3inFxIjkkG7VtWAwYrR0gfyv0C8WuvfwAJ_qYi2MMa-51bkuyuQSVfbLzi5DEcFZL-f2lQfoj3XqV2ueASgWJOWKbgKj1Iw3xbpAm7eyQPq4QVluuQ0N6Feu5g98.GeOPmbpyh7JcLSUlQjegBmuOvYnGki9ILfmq8zF3sCc&dib_tag=se&keywords=buck+converter&qid=1731306271&sprefix=buck+converter%2Caps%2C105&sr=8-13) since I tried to use an L7805 for all the servos and it got suuuper hot. I used the L7805 for the Arduino and the HC-SR04s, and the buck converter for the servos.

![image](https://github.com/user-attachments/assets/ba834609-b000-49db-b0ea-588bdea38666) 
![image](https://github.com/user-attachments/assets/d4697b8d-8c1d-4a36-a740-32659c8f246c)

With the leg movement code I developed earlier (using a bunch of for loops) and the new batteries, I tried to get him to walk.
