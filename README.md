#Advance Dustbin</h1>
    <div><h2>Introduction</h2>
        <p>In this project, I have designed a simple system called Advance Dustbin using Arduino,
            Ultrasonic Sensor, and Servo Motor, where the lid of the dustbin will automatically open
            itself upon waste coming ear to it. The Advance dustbin is a carefully designed solution
            that solves the social issue of people avoid touching bin to put waste in it.
            Throwing Garbage in the bins/dustbins is a good practice and we do not require to
            convince people to put their waste product in it.but During this pandemic (Covid -19)
            ,keeping safe distance from every contaminated things or person is necessary.
            Therefore, the aim of our project was to make a dustbin where we don’t need to even put
            our feet on paddle of bin to open.</p>
        </div>
        <h2>Problem Considred</h2>
         <div id="vidio">
                As the world is Advancing, there is one stinking problem we have to deal
                with. Garbage! In our daily life, we see the picture of garbage bins being overfull and all
                the garbage spills out. This leads to the number of insects and mosquitoes breed on it. A
                big challenge in the urban cities is solid waste management and lake of people’s interest
                to pull the cover of bin to throw their waste, not only in India but for most of the
                countries in the world. Hence, such a system has to be build which can eradicate this
                problem or at least reduce it to the minimum level. This project gives us one of the most
                efficient ways to keep our environment clean and green. By using this advance dustbin
                we can give a pollution free environment and a disease free surroundings.
         </div>
        <div>
            <h2>Objective</h2>
            <p>
                The main objective of this project is to open lid of bin when senses something has came
                near to be put in the bin. Nowadays people are using more products including food items,
                industrial products, medicines and, plastic materials. After expiry of these items they are
                put it into a dustbin for disposal. Without proper maintenance of dustbins, these expiry
                items can create epidemic diseases among people and pollution to the ambience. And
                other person who will come to put something in it will avoid opening the bin So the
                dustbins sholud be such which open itself after detection to ensure cleanliness. This paper
                presents an Arduino based adv dustbin . The Arduino Uno controller is used to read the
                dustbin levels with the help of Ultrasonic sensor. After 100% filling of dust and waste
                items, red LED glow so to collect the garbage deposited. Arduino Uno contains
                Atmega328p-pu IC. . Embedded C is used to program the controller and html is employed
                for creating the web page.

            Working
                The fullness status of the bin is determined by calculating the distance between the lid of
                the bin and the trash by using an ultrasonic sensor. A distance threshold will be set
                according to the bin dimensions. When the ultrasonic sensor indicates that the bin is full,
                then a microcontroller board will control a bins lid. The location of the bin is predefined
                by the sanitary worker who will identify the filled bin by Red LED light glow. The
                system return to default operation when the bin is emptied by the users.

          Results
                When the waste object is brought near to the lid, due to Ultrasonic Sensor the object is
                detected and the lid opens for a certain time and then the lid automatically will be closed.
                Thus the lid can open automatically without manual operation. Hence manual work is
                reduced and automatically is carried out. Hence it is very useful in our day to day life.
                green LED will be signify that dustbin is not fulll and if RED led is glowing the bin will
                not allow anyone to put anything inside it.

          Components Required
                Arduino board
                Ultrasonic Sensor
                Servo Motor
                Red LED
                Green LED
                jumper
                bread board
>Constraints:-
Continuously power supply/using battery.
Malfunctioning in bad weather and can even be damaged.
Currently no AI,for proper detection hand coming for throwing waste in dustbin



>Future Work:-
The AIoT fusion to enable devices to learn, reason, and process information like humans
so that open covers only when pattern of motion to of throwing things is detected.
Add more function to provide variety of features like sending signal to phone when bin is
full.

