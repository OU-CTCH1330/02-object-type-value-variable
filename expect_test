#!/usr/bin/expect --
source "expect_include"
send_user "Building target program\n"
exec make clean
exec make all
send "Starting target program\n" 
spawn ./hello_world
set timeout 1
expect {
    "hello world\r" { send_user $passExit; exit 0; }
    eof { send_user $failedExit; exit 1; }
    timeout { send_user $timeoutExit; exit 1;}
}
send_user $unexpectedExit
exit 1;