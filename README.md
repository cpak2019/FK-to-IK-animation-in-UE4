# cuddly-octo-journey
UnrealEngine 4 blueprints, system records animations into text files and plays them back using the IK animation system, can play back animations in real time.  

AnimationRecorder.uasset And Record.uasset
Files used to load animations and save them into .txt files, set the files as game blueprint and animation blueprint then play animation with correct scale of time set and enter animation names. After finished create txt to matrix script in physicsAnimationThingy

physicsAnimationThingy.uasset
Converts text file to arrays saved in AnimBP
Records points in realtime and saves to text then reloads into array variable


IKAnimBP.uasset
Takes array data as 3d points and controls timing for animation playback using curves synced to animation that IK is played on top of or timing data from text files 

RWTXTFile.h and RWTXTFile.cpp
Custom Blueprints for writing and reading text files. 
