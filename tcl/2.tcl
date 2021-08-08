set ::b1 world_b1
set b2 world_b2
proc hello_b {d} {
	set a hello
	puts $a
	global b1
	puts $b1
	puts $d
}

puts "this is 2.tcl"


set ::client 0
puts $::client
if {$::client} {
	puts "client is true"
} else {
	puts "client is false"
}

# 通过info script获取本文件名
set file [info script]
puts "file name : $file"
