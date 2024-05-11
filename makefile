bin/tui :  src/PingPong_Atari.cpp
	g++ src/PingPong_Atari.cpp -o bin/Atari -I include -lftxui-screen -lftxui-dom -lftxui-component -std=c++2a

run : bin/Atari
	./bin/Atari