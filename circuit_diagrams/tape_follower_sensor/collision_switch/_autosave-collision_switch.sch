EESchema Schematic File Version 4
LIBS:collision_switch-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:+7.5V #PWR?
U 1 1 5CFFB824
P 5000 1500
F 0 "#PWR?" H 5000 1350 50  0001 C CNN
F 1 "+7.5V" H 5015 1673 50  0000 C CNN
F 2 "" H 5000 1500 50  0001 C CNN
F 3 "" H 5000 1500 50  0001 C CNN
	1    5000 1500
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5CFFBFA1
P 3050 2000
F 0 "C?" H 3142 2046 50  0000 L CNN
F 1 "C_Small" H 3142 1955 50  0000 L CNN
F 2 "" H 3050 2000 50  0001 C CNN
F 3 "~" H 3050 2000 50  0001 C CNN
	1    3050 2000
	1    0    0    -1  
$EndComp
$Comp
L pspice:R R?
U 1 1 5CFFC56E
P 3750 2000
F 0 "R?" H 3818 2046 50  0000 L CNN
F 1 "100k" H 3818 1955 50  0000 L CNN
F 2 "" H 3750 2000 50  0001 C CNN
F 3 "~" H 3750 2000 50  0001 C CNN
	1    3750 2000
	1    0    0    -1  
$EndComp
$Comp
L pspice:R R?
U 1 1 5CFFC972
P 4350 2000
F 0 "R?" H 4418 2046 50  0000 L CNN
F 1 "100k" H 4418 1955 50  0000 L CNN
F 2 "" H 4350 2000 50  0001 C CNN
F 3 "~" H 4350 2000 50  0001 C CNN
	1    4350 2000
	1    0    0    -1  
$EndComp
$Comp
L pspice:R R?
U 1 1 5CFFCD86
P 5000 2000
F 0 "R?" H 5068 2046 50  0000 L CNN
F 1 "100k" H 5068 1955 50  0000 L CNN
F 2 "" H 5000 2000 50  0001 C CNN
F 3 "~" H 5000 2000 50  0001 C CNN
	1    5000 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 1500 4350 1500
Wire Wire Line
	3050 1500 3050 1900
Wire Wire Line
	3750 1750 3750 1500
Connection ~ 3750 1500
Wire Wire Line
	3750 1500 3050 1500
Wire Wire Line
	4350 1500 4350 1750
Connection ~ 4350 1500
Wire Wire Line
	4350 1500 3750 1500
$Comp
L Analog_Switch:ADG417BN U?
U 1 1 5CFFFD66
P 3750 3550
F 0 "U?" V 3704 3680 50  0001 L CNN
F 1 "TBD" V 3750 3680 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 3750 3450 50  0001 C CNN
F 3 "https://www.analog.com/media/en/technical-documentation/data-sheets/ADG417.pdf" H 3750 3550 50  0001 C CNN
	1    3750 3550
	0    1    1    0   
$EndComp
$Comp
L Analog_Switch:ADG417BN U?
U 1 1 5D00243F
P 4350 3050
F 0 "U?" V 4304 3180 50  0001 L CNN
F 1 "TBD" V 4350 3180 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 4350 2950 50  0001 C CNN
F 3 "https://www.analog.com/media/en/technical-documentation/data-sheets/ADG417.pdf" H 4350 3050 50  0001 C CNN
	1    4350 3050
	0    1    1    0   
$EndComp
$Comp
L Analog_Switch:ADG417BN U?
U 1 1 5D00735F
P 5000 2550
F 0 "U?" V 4954 2680 50  0001 L CNN
F 1 "TBD" V 5000 2680 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 5000 2450 50  0001 C CNN
F 3 "https://www.analog.com/media/en/technical-documentation/data-sheets/ADG417.pdf" H 5000 2550 50  0001 C CNN
	1    5000 2550
	0    1    1    0   
$EndComp
Wire Wire Line
	3750 2250 3750 3250
Wire Wire Line
	3050 2100 3050 3850
Wire Wire Line
	3050 3850 3750 3850
Wire Wire Line
	5000 1500 5000 1750
Connection ~ 5000 1500
Wire Wire Line
	5000 3850 4350 3850
Connection ~ 3750 3850
Wire Wire Line
	4350 3350 4350 3850
Connection ~ 4350 3850
Wire Wire Line
	4350 3850 3750 3850
Wire Wire Line
	5000 2850 5000 3850
Wire Wire Line
	5000 2300 5000 2250
Connection ~ 5000 2250
Wire Wire Line
	5000 2250 5650 2250
Wire Wire Line
	4350 2250 4350 2750
Wire Wire Line
	5650 2250 5650 2700
Wire Wire Line
	5650 3300 5650 2900
$Comp
L pspice:R R?
U 1 1 5D00FD32
P 6500 2800
F 0 "R?" V 6295 2800 50  0000 C CNN
F 1 "R" V 6386 2800 50  0000 C CNN
F 2 "" H 6500 2800 50  0001 C CNN
F 3 "~" H 6500 2800 50  0001 C CNN
	1    6500 2800
	0    1    1    0   
$EndComp
Connection ~ 5000 3850
Wire Wire Line
	5650 2800 4350 2800
$Comp
L 74xGxx:74LVC1G11 U?
U 1 1 5D0037FB
P 5950 2800
F 0 "U?" H 5950 3114 50  0001 C CNN
F 1 "TBD" H 5950 3022 50  0000 C CNN
F 2 "" H 5950 2800 50  0001 C CNN
F 3 "http://www.ti.com/lit/sg/scyt129e/scyt129e.pdf" H 5950 2800 50  0001 C CNN
	1    5950 2800
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NPN_CEB Q?
U 1 1 5D0115BB
P 6950 2800
F 0 "Q?" H 7141 2846 50  0000 L CNN
F 1 "NPN" H 7141 2755 50  0000 L CNN
F 2 "" H 7150 2900 50  0001 C CNN
F 3 "~" H 6950 2800 50  0001 C CNN
	1    6950 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 3850 7050 3850
$Comp
L pspice:R R?
U 1 1 5D017785
P 7050 2000
F 0 "R?" H 7118 2046 50  0000 L CNN
F 1 "R" H 7118 1955 50  0000 L CNN
F 2 "" H 7050 2000 50  0001 C CNN
F 3 "~" H 7050 2000 50  0001 C CNN
	1    7050 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 2250 7050 2550
$Comp
L pspice:R R?
U 1 1 5D018073
P 7550 2550
F 0 "R?" V 7345 2550 50  0000 C CNN
F 1 "R" V 7436 2550 50  0000 C CNN
F 2 "" H 7550 2550 50  0001 C CNN
F 3 "~" H 7550 2550 50  0001 C CNN
	1    7550 2550
	0    1    1    0   
$EndComp
$Comp
L pspice:DIODE D?
U 1 1 5D018A01
P 7550 2200
F 0 "D?" H 7550 2465 50  0000 C CNN
F 1 "DIODE" H 7550 2374 50  0000 C CNN
F 2 "" H 7550 2200 50  0001 C CNN
F 3 "~" H 7550 2200 50  0001 C CNN
	1    7550 2200
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5D019449
P 7800 3300
F 0 "C?" H 7892 3346 50  0000 L CNN
F 1 "C_Small" H 7892 3255 50  0000 L CNN
F 2 "" H 7800 3300 50  0001 C CNN
F 3 "~" H 7800 3300 50  0001 C CNN
	1    7800 3300
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC14 U?
U 1 1 5D01A46D
P 8300 2550
F 0 "U?" H 8300 2867 50  0000 C CNN
F 1 "SCHMITT" H 8300 2776 50  0000 C CNN
F 2 "" H 8300 2550 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 8300 2550 50  0001 C CNN
	1    8300 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 1500 7050 1500
Wire Wire Line
	7050 1500 7050 1750
Wire Wire Line
	7050 2200 7350 2200
Wire Wire Line
	7050 2550 7300 2550
Connection ~ 7050 2550
Wire Wire Line
	7050 2550 7050 2600
Wire Wire Line
	7750 2200 7800 2200
Wire Wire Line
	7800 2200 7800 2550
Wire Wire Line
	8000 2550 7800 2550
Connection ~ 7800 2550
Wire Wire Line
	7800 2550 7800 3200
Wire Wire Line
	7800 3400 7800 3850
Wire Wire Line
	7800 3850 7050 3850
Connection ~ 7050 3850
Wire Wire Line
	5850 6500 7900 6500
$Comp
L pspice:R R?
U 1 1 5D0233ED
P 7900 4650
F 0 "R?" H 7968 4696 50  0000 L CNN
F 1 "R" H 7968 4605 50  0000 L CNN
F 2 "" H 7900 4650 50  0001 C CNN
F 3 "~" H 7900 4650 50  0001 C CNN
	1    7900 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 4900 7900 5200
$Comp
L pspice:R R?
U 1 1 5D0233F4
P 8400 5200
F 0 "R?" V 8195 5200 50  0000 C CNN
F 1 "R" V 8286 5200 50  0000 C CNN
F 2 "" H 8400 5200 50  0001 C CNN
F 3 "~" H 8400 5200 50  0001 C CNN
	1    8400 5200
	0    1    1    0   
$EndComp
$Comp
L pspice:DIODE D?
U 1 1 5D0233FA
P 8400 4850
F 0 "D?" H 8400 5115 50  0000 C CNN
F 1 "DIODE" H 8400 5024 50  0000 C CNN
F 2 "" H 8400 4850 50  0001 C CNN
F 3 "~" H 8400 4850 50  0001 C CNN
	1    8400 4850
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5D023400
P 8650 5950
F 0 "C?" H 8742 5996 50  0000 L CNN
F 1 "C_Small" H 8742 5905 50  0000 L CNN
F 2 "" H 8650 5950 50  0001 C CNN
F 3 "~" H 8650 5950 50  0001 C CNN
	1    8650 5950
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74HC14 U?
U 1 1 5D023406
P 9150 5200
F 0 "U?" H 9150 5517 50  0000 C CNN
F 1 "SCHMITT" H 9150 5426 50  0000 C CNN
F 2 "" H 9150 5200 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 9150 5200 50  0001 C CNN
	1    9150 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 4150 6850 4150
Wire Wire Line
	7900 4150 7900 4400
Wire Wire Line
	7900 4850 8200 4850
Wire Wire Line
	7900 5200 8150 5200
Connection ~ 7900 5200
Wire Wire Line
	7900 5200 7900 5250
Wire Wire Line
	8600 4850 8650 4850
Wire Wire Line
	8650 4850 8650 5200
Wire Wire Line
	8850 5200 8650 5200
Connection ~ 8650 5200
Wire Wire Line
	8650 5200 8650 5850
Wire Wire Line
	8650 6050 8650 6500
Wire Wire Line
	8650 6500 7900 6500
Connection ~ 7900 6500
Wire Wire Line
	7050 3800 7050 3850
Wire Wire Line
	7900 6450 7900 6500
Wire Wire Line
	7050 3000 7050 3850
Wire Wire Line
	7900 5650 7900 5850
$Comp
L Analog_Switch:ADG417BN U?
U 1 1 5D0249FC
P 7900 5550
F 0 "U?" V 7854 5680 50  0001 L CNN
F 1 "TBD" V 7900 5680 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 7900 5450 50  0001 C CNN
F 3 "https://www.analog.com/media/en/technical-documentation/data-sheets/ADG417.pdf" H 7900 5550 50  0001 C CNN
	1    7900 5550
	0    1    1    0   
$EndComp
Connection ~ 7900 5850
Wire Wire Line
	7900 5850 7900 6500
$Comp
L Device:C_Small C?
U 1 1 5D026393
P 5850 5250
F 0 "C?" H 5942 5296 50  0000 L CNN
F 1 "C_Small" H 5942 5205 50  0000 L CNN
F 2 "" H 5850 5250 50  0001 C CNN
F 3 "~" H 5850 5250 50  0001 C CNN
	1    5850 5250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 4150 5850 5150
Wire Wire Line
	5850 5350 5850 6500
$Comp
L power:GND #PWR?
U 1 1 5D02863D
P 5000 3850
F 0 "#PWR?" H 5000 3600 50  0001 C CNN
F 1 "GND" H 5005 3677 50  0000 C CNN
F 2 "" H 5000 3850 50  0001 C CNN
F 3 "" H 5000 3850 50  0001 C CNN
	1    5000 3850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5D028E6B
P 7900 6500
F 0 "#PWR?" H 7900 6250 50  0001 C CNN
F 1 "GND" H 7905 6327 50  0000 C CNN
F 2 "" H 7900 6500 50  0001 C CNN
F 3 "" H 7900 6500 50  0001 C CNN
	1    7900 6500
	1    0    0    -1  
$EndComp
$Comp
L power:+7.5V #PWR?
U 1 1 5D029628
P 6850 4150
F 0 "#PWR?" H 6850 4000 50  0001 C CNN
F 1 "+7.5V" H 6865 4323 50  0000 C CNN
F 2 "" H 6850 4150 50  0001 C CNN
F 3 "" H 6850 4150 50  0001 C CNN
	1    6850 4150
	1    0    0    -1  
$EndComp
Connection ~ 6850 4150
Wire Wire Line
	6850 4150 7900 4150
Wire Wire Line
	4350 3300 4350 2800
Wire Wire Line
	3750 3300 4350 3300
Connection ~ 4350 3300
Wire Wire Line
	4350 3300 5650 3300
$EndSCHEMATC
