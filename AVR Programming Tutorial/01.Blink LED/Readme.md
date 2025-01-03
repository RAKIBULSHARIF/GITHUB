<h4>Chapter 1 : Blink LED, Bit Shifting, Arduino Memory Management</h4>
<p> In C Program, "Hello World" print on the screen is fundamental program of the language. But in Embedded system blink LED is the fundamental application of its own. Also called as firmware development for Embedded System because it is a wide topic to cover. In this section we will talk and discuss how to apply a simple program on the AVR and execute it. Program - Blink LED
</p>
<p> This is the bare minimum code for AVR to run a LED and it blinks 1 second repeat. Now we see for a Arduino written code. Program - Blink_Arduino</p>
<p> There is a builtin LED in Arduino Board that blinks 1 second repeat.</p>
<h> Memory management</h>
<p> Both code can compile and upload to the Arduino Board. First code needs some change of PORT and Data Direction Register to blink Builtin LED of Arduino Board.
    First code compile result is 178 bytes (0%) of program storage space. 0 bytes (0%) dynamic memory. Second code compile result is 236785 bytes (18%) of program storage space. 21048 bytes (6%) of dynamic memory.</p>
<p> Arduino compile second code in a different way thats why same program in a huge size of difference. But second code is more understable for human.</p>
