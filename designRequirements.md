# Design Requirements
## Competition General

### Generic stuff
* All tasks must be completed within 2 minutes
* Maximum budget must not exceed $150
* No damage may be done to the plushies and competition surface
* Robot may not leave anything on the competition surface
* All motors and power sources must come from ENPH 253 provided materials

## Administrative rules
* Each phase of design must have associated testing decided on by the team
* Each subcomponent must have an interfacing document for the software
* Each subcomponent (e.g. arm, driving system) must have a hardware driver

### Power system
* Must use at most 1 large battery pack (14.8 V) and 2 low voltage batteries (7.4 V)
* Any motors must be powered uniquely by the large battery pack

### Driving system
* Must be able to climb 7 degrees incline
* Must be able to detect black tape vs competition surface

### Arm
* Arm must be retracted when not in use

### Chassis
* Must be confined within 12'' by 12'' by 24''. Arm may extend 12'' outside the box
* Robot must have a smooth bumper all around the chassis which is 1'' to 2 '' from the ground
* Robot must be indivisible

### Sensors
* Must have collision sensors on bumper

### Software
* Must back away from collision when detected. 
   * Exceptions: when robot is powered off at gauntlet and when picking up infinity stones
* Must be able to navigate based on tape
* Must be able to switch between Thanos and Methanos
* Robot may not sabotage other robot
* Robot must not broadcast IR
* Robot must have a hardware switch to change between Thanos and Methanos
  * Robot must have an LED indicating its goodness status
  
### Debugging requirements
* Adjustable parameters such as sensitivity to light (differentiating black tape and surface) must be adjustable without reprogramming the robot

## Infinity stones
### Arm
* Arm must be able to report which height it's at (within a certain accuracy later to be determined)
* Claw must be capable of gripping something of varying sizes (infinity stones): width ~ 2 cm, heights 3-5 cm
* Robot must be able to deposit stones into gauntlet (whether that be through claw, or another attached mechanism)
* *Strategy based decision:* Robot must be able to store multiple stones

### Sensors
* Robot must have a tape sensor which is able to detect black tape on the post (. 

## Avengers
### Arm and chassis
* Must be able to pick up avengers
* *Strategy based decision:* Must be able to store avengers
* Must be able to dump avengers into sanctum/pit of Death

### Sensors
* Must detect and differentiate between 1kHz and 10 kHz beacons
* Must be able to detect avengers

### Software
* Must be able to go "off trail" and orient self based on infrared beacons
