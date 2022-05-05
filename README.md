# MC68MH360 Board

[tomstorey / c1600re](https://github.com/tomstorey/c1600re/tree/master/source/serial_bootloader) serial loader modification for MC68MH360 telecom board.

 
## Pictures

MC68MH360 board

![MC68MH360 board](/b_1.jpg)


SCC3 modification 

![SCC3 modification](/b_2.jpg)


## Serial loader

~~~
>python3 loader3.py -b0x2002000 -e0x2002400 bmbinary.rom
Waiting for serial loader availability: OK
Loading 1264 bytes to 0x02002000: Done in 0.107s
Executing from 0x02002400: OK

============================================================
~~~


##  Board schematics
 
![Board schematics](/s.jpg)
