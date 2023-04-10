all:
	rm -rf obj_dir wave.vcd
	verilator -Wall --trace -cc -exe top.v sim_main.cpp
	make -j -C obj_dir -f Vtop.mk 
	./obj_dir/Vtop