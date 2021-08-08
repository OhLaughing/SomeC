- 方法定义
proc hello {} {
	set a hello
	puts $a
}
而不是
proc hello {} 
{
	set a hello
	puts $a
}