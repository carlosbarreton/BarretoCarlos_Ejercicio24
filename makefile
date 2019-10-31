histo.png: metro.py metro.dat
	python metro.py

metro.dat: metropolis.x
	./metropolis.x > metro.dat

metropolis.x: metropolis.cpp
	c++ metropolis.cpp -o metropolis.x
