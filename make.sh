scons platform=x11 LINKFLAGS=-L/opt/vc/lib\ -lbcm_host CCFLAGS=-I/opt/vc/include/\ -I/opt/vc/include/interface/vcos/pthreads/\ -I/opt/vc/include/interface/vmcs_host/linux/\ -fpermissive\ -march=armv7-a\ -mfpu=neon-vfpv4 CFLAGS=-I/opt/vc/include/\-I/opt/vc/include/interface/vcos/pthreads/\ -I/opt/vc/include/interface/vmcs_host/linux/\ -fpermissive -j4

