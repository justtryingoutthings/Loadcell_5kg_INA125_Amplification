Loadcell output is in the order of milli or micro volts and cannot be read by a usual mutlimetre and hence needs to be amplified.
I've used INA125 for amplification for it's inbuilt presence of reference voltages : 2.5v,5v,10v.
Since, I powered the devices using 5V of Arduino, i used the 2.5 voltage reference so that i can measure the voltage changes with increasing and decreasing weights. 
The Loadcell has a direction marked to add the weight, upon adding the weight in that direction, the voltage increases from the reference/offset voltage and hanging it in the opposite direction decreases the voltage below 2.5v.

It's very important to understand about the amplificaton or gain so that the output doesn't get saturated and is well within our input voltage range.
Since i shifted my reference to 2.5v that means 0-5kgs of weight (in mentioned direction) will have to give an output in the range 2.5 - 5 volts.

To set the Gain as per our requirement , we need to run multiple trials with different gain resistors (Rg) ; Gain = 4 + 60,000 Ω / Rg

#These are the values recorded by multimeter by carrying out the trials in my own setup.
#When read using Arduino, there may exist a deviation of about 0.1 - 0.2 volts 

1. Rg = 660 Ω
0g – 2.5v
500kg – 2.52v
1kg – 2.54v
scaling factor : change of voltage / kg = 0.04 v/kg

*by decreasing Rg, we increase scaling factor 

2.Rg = 550 Ω
0g – 2.49v
500g – 2.55v 
1kg – 2.60
scaling factor : 0.1 v/kg

3. Rg = 220 Ω
0g – 2.48 
500g – 2.61
-500g – 2.35
1kg – 2.74 
scaling factor : 0.26 v/kg

#I've designed my LabView program as per my scaling factor and offset voltage.

Ritisha Tripathy, Nit Durgapur.


#I've desgined my LabView program as per my scaling factor and my offset voltage. 
Ritisha Tripathy, Nit Durgapur.
