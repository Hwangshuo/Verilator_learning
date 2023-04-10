all:
	rm -rf logs obj_dir
	verilator -Wall --trace -sc -exe top.v sc_main.cpp
	make -j -C obj_dir -f Vtop.mk 
	./obj_dir/Vtop +trace