g = 9.81

# masses of stuff, 1 is base, 2 is middle, 3 is claw
m1 = 0.14199
m2 = 0.07975
m3 = 0.109
mS = 0.026 # mass of stone
mC = 0.038 # mass claw joint
mM = 0 # 0.038 # mass middle joint

# lengths
d1 = 0.2666
d2 = 0.15
d3 = 0.16

torque_claw = 100 * g * (d3/2 * m3 + d3 * mS)
print("Torque claw (N-cm): " + str(torque_claw))

torque_middle = 100 * g * (d2/2 * m2 + d2 * mC + (d2 + d3/2) * m3 + (d2 + d3) * mS)
print("Torque middle (N-cm): " + str(torque_middle))

torque_base = 100 * g * (d1/2 * m1 + d1 * mM + (d1 + d2/2) * m2 + (d1 + d2) * mC + (d1 + d2 + d3/2) * m3 + (d1 + d2 + d3) * mS)
print("Torque base (N-cm): " + str(torque_base))