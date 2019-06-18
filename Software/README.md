# Software Design
* (All our pretty pictures)[https://drive.google.com/file/d/1abVpOZW4HORqyk8V_X9ql1lW3YCfY3p7/view?usp=sharing]

## Miti's Great Advice

* Pin definition in 1 file
* Logging module
* Initialisation (which calls individual inits from drivers/modules)
* investigate having 2 serial consoles running
* flash LED during communication so we know it's happening
* Consider setting master to just poll when it's waiting on result from slave (simpler)

## Other modules to have
* Clock/timer thing (RTC type, set alarm for time we can determine)
* debug through hardware --> set this up
