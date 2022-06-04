make clean
make SCHED_POLICY=MLFQ_SCHED MLFQ_K=5 CPUS=1
#make SCHED_POLICY=MULTILEVEL_SCHED
make fs.img
qemu-system-i386 -nographic -serial mon:stdio -hdb fs.img xv6.img -smp 1 -m 512
