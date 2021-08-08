proc write1 {} {
    global MyVar
    set MyVar 5
    return
}
proc write2 {} {
    global MyVar
    set MyVar 5
    set MyVar 5
    return
}
proc write3 {} {
    global MyVar MyOtherVar
    set MyVar 5
    set MyOtherVar 5
    return
}
proc write4 {} {
    global MyVar MyOtherVar
    set MyVar 5
    set MyOtherVar 5
    set MyVar 5
    set MyOtherVar 5
    return
}
proc write5 {} {
    set ::MyVar 5
    return
}
proc write6 {} {
    set ::MyVar 5
    set ::MyVar 5
    return
}
proc write7 {} {
    set ::MyVar 5
    set ::MyOtherVar 5
    return
}
proc write8 {} {
    set ::MyVar 5
    set ::MyOtherVar 5
    set ::MyVar 5
    set ::MyOtherVar 5
    return
}

foreach cmd {write1 write2 write3 write4 write5 write6 write7 write8} {
    # Execute once to ensure everything is internally optimised
    $cmd
    # Now the timing run
    puts "$cmd : [time { $cmd } 100000]"
}