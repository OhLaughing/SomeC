#source
source 2.tcl
set ::b world
set c {this is c}
set ::all_tests {
abc
hello}
proc hello {d} {
	set a hello
	puts $a
	puts $b
	puts $d
	global c
	puts $c
}

#当过程的参数只有一个的时候，可以不用{}
proc test1 a {
	puts "test1.a: $a"
}

proc a {} {
	global myVar
	set myVar 2
}
# 在过程内部双冒号：： 的作用是声明变量为global
proc b {} {
	set ::myVar 2
}
b
puts $myVar
hello_b 123
puts $all_tests
test1 aa