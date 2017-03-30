#robot.o: src/Robot.cpp
#	cc -c src/Robot.cpp - o build/robot.o


#main.o: main.cpp
#	cc -c main.cpp src/Robot.cpp src/Map.cpp -o build/main.o

all: main.cpp
	gcc -lstdc++ main.cpp src/Robot.cpp src/RobotDrive.cpp src/RobotWeapons.cpp src/RobotRotation.cpp
