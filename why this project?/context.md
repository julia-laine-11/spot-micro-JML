# Why??

Hi!

My name is Julia and I used to always want to be a vet. During COVID we were all slightly less sane by being trapped at home, so like any normal person I hatched quail so I could pursue veterinary. (Spoiler, this is not where I ended up!)


![image](https://github.com/user-attachments/assets/118e72bc-5f02-4234-ab5a-4ed7e0ec5dca)

*my quail during online school*

I chose quail because I lived in a city and the laws prohibited poultry, but quail were explicitly listed as gamebirds and not prohibited in the federal, state, county, or city laws - and therefore legal. I reseached their needs, how to incubate them, and everything I could possibly know about them. Afterwards, I ordered the eggs and bought a Little Giant incubator (looking back, I should have just made my own). I ordered 12 but the seller sent 28 (which was quite shocking).

I also built them their own house (my own design, with my dad's help with power tools :) )
![image](https://github.com/user-attachments/assets/7634ebf3-a8e2-4f5a-a8a4-d1118f0d9b56)

*The beginning of my quail hutch*


## Incubation
During incubation, [eggs must be rotated to keep the chicks healthy](https://www.brinsea.com/t-turningeggs.aspx). Touching the eggs can introduce problems though, like [introducing bacteria or shaking the chicks too much](https://incubatorwarehouse.com/pages/incubating-eggs-hard-questions). 

The eggs also had to be turned 3 times a day. All 28 of them. This was super tedious (and also scary since I was so nervous about hurting them!) since there were so many eggs and I had to do it both quickly (so I didn't let the hot air out) and carefully so I didn't hurt the eggs.

To add to this, 12 more eggs showed up. I still don't know why, but there were so many eggs in the incubator and it was really crazy.

![image](https://github.com/user-attachments/assets/8ef6e743-fa5a-48fc-b287-0391d568bdb0)

*My incubator set up. It did not come with a fan, so I installed my own with pipe cleaners to avoid getting hot spots inside.*



## My egg turner
Since there were so many eggs, I started making my own egg turner. 

### Cardboard circle

![image](https://github.com/user-attachments/assets/20bf8d40-b79e-4e9d-aadc-514be578da44)

*(Left: Lego Mindstorm, Right: my janky circle egg turner)*

I cut a circle piece of cardboard. The floor of the incubator is a plastic grid so I used lego pieces to secure the center so it could rotate around its center. 4 triangles were cut into it so the eggs could lay on their sides and spin as the wheel spun.

It rotated by using a Lego Mindstorm motor and a Lego wheel. 

Problems with cardboard spinning wheel:
  - Incubators have channels of water to keep it [around 60ish% humidity](https://extension.psu.edu/programs/4-h/get-involved/teachers/embryology/teacher-resources/supporting-subject-matter/incubation/science-of-incubation/humidity-and-ventilation#:~:text=The%20relative%20humidity%20of%20the,be%20nearer%2065%2D70%20percent.), and cardboard does not like humidity. The cardboard wheel got soft and failed.

### Plexiglass circle

I fixed this by making it out of plexiglass. Same shape as the cardboard, just different material and new/different problems:
  - It took up a lot of space and could not turn a lot of eggs
  - It also shook them a little bit more than I liked

### Standing egg turner

I fixed these new problems by learning how to use CAD to make my own designs to 3D print. I made my own egg turner design using Tinkercad. And yeah it's not the best, we all start somewhere though and this was my first CAD experience. 

I printed the file and used an Arduino to program it this time. I had no clue what I was doing. It was my first time using a breadboard, Arduino, or C++. I learned all the basics through reading the Arduino sample codes. Controlling a servo seemed easy enough. I learned about importing, code structure, loops, sending signals, and semicolons semicolons semicolons.

All the egg turner used was an Arduino, my files, an SG-90 servo, and zip-ties (of course).

![image](https://github.com/user-attachments/assets/e2f532b7-700c-4a68-a83c-455a6d373b96) ![image](https://github.com/user-attachments/assets/ec83a9d9-db75-4bb8-9ac5-94c8b5a42f0d)


*My first time using a breadboard. I was home alone so I sent this to my dad because I was so proud I figured it out*

By the time I got the new egg turner working, the first round of quail had already hatched.

![image](https://github.com/user-attachments/assets/e98ec270-6ef3-495e-9099-f46d7751cb74) ![image](https://github.com/user-attachments/assets/38c9cce6-8556-4faf-b5e8-bf56d7f040d2)

*My first batch of babies*

I let the first batch grow up some and then I hatched their children. They only take 6-8 weeks to lay eggs. They only live [a few years in the wild](https://genomics.senescence.info/species/entry.php?species=Coturnix_japonica#:~:text=AnAge%20entry%20for%20Coturnix%20japonica&text=The%20Japanese%20quail%20displays%20a,%2D3%20years%20%5B0028%5D.) so they have to become adults quickly. I don't have the site but I read that if you don't raise quail with other colors of quail then they will be aggressive towards the new color. I was worried all of the new batch would be brown since it is the dominant gene so I ordered a small batch from the same seller.

I secured the egg turner to the ground of the incubator to test it before the new eggs arrived. I replaced the piece of paper with another printed piece, I don't know why it is like that in this image.

![image](https://github.com/user-attachments/assets/4eb78e8b-2803-48b0-995b-42512c861e5f)

*Outisde the incubator*

Once the eggs arrived, I loaded them into the egg turner (after washing my hands of course) and turned it on. I programmed it to sit at 45 degrees and gently turn 90 degrees to the opposite 45 degrees every 4 hours.

![image](https://github.com/user-attachments/assets/26b754f3-518a-4acb-9d45-3ad08bd7b10f) 

*The egg turner filled up with eggs in the incubator*

### Hatch day (from the batch that used my egg turner)

I had a high hatch rate (I do not remember the exact percentage, but I think it was around 60-70% [which is really good for shipped eggs](https://cowboycoop406.com/hatchingguide/#:~:text=You%20can%20expect%20an%20average,hatch%20rate%20with%20shipped%20eggs.))

Hatch day came:

![image](https://github.com/user-attachments/assets/5c8f02fc-70ea-4157-b604-6483eb606993)

*Toaster (my sister and her roommate named her)*

![image](https://github.com/user-attachments/assets/fa99b11b-ba12-4b67-85e1-636d7e2d94e3)

*The chicks sleep like they're dead and it spooks me every time!*

## Results

Overall, this project got me into electrical engineering. I got super interested in coding and electronics after I wired up and programmed the servo. I also started using Fusion360 for CAD since it is free for students. I tried to make a drone but that low-key failed because I didn't know what I was doing and I wasn't passionate enough about the drone to put in the hours to research. 

![image](https://github.com/user-attachments/assets/7204cd23-362e-47e9-9115-204a835170a5) 

![image](https://github.com/user-attachments/assets/7cd07795-3c27-4846-8aaf-1b77defef78d) 
![image](https://github.com/user-attachments/assets/95711efd-9dbe-41ea-891b-72cb30184606)

- The gyro was off center
- The drone was super heavy
- My tolerances weren't the best so the gears slipped occasinally

I took my failures as a learning experience and I moved on to the robot dog when I saw the files of it online.

I still love my quail, even though I no longer want to be a vet. Unfortunately, all of them have passed since they were very very old for quail. They all lived about 3 or 4 years. I don't think I would have been in engineering if not for them.

![image](https://github.com/user-attachments/assets/26d5cf11-a355-4b51-a48b-32c02d966657)

*This is Leg, the same quail from earlier with the cowboy hat on*



![image](https://github.com/user-attachments/assets/f2787d67-e4d4-4c0b-ad8e-3639ae36453c) ![image](https://github.com/user-attachments/assets/820c6541-a515-460d-bff4-0238473f030c)


*This is Toaster as an adult in her first and second snows*

