pos.png vel.png phase.png: DavidRey_graph.py tray.txt
	python DavidRey_graph.py

tray.txt: DavidRey_gravity.cpp
	c++ DavidRey_gravity.cpp
	./a.out>tray.txt
