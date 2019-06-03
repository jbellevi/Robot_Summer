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

## Avengers

### Sensors
* Must detect and differentiate between 1kHz and 10 kHz beacons

### Software
* Must be able to go "off trail" and orient self based on infrared beacons
