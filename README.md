flobby
======
flobby is a spring (http://springrts.com) lobby client written in C++.
flobby is developed and tested on archlinux.

Dependencies worth noting
-------------------------
* FLTK 1.3
* libxpm
* libxss
* ImageMagick
* curl
* boost
* C++11 (gcc 4.6 should be enough)


Build and run
-------------
    cmake .
    make
    src/flobby

Directories and files
---------------------
    ~/.config/flobby/  # can be changed with XDG_CONFIG_HOME
        flobby.prefs  # flobby settings, delete this file to reset all settings to default 
    ~/.cache/flobby/  # can be changed with XDG_CACHE_HOME
        flobby_script.txt  # spring script file, written on spring launch
        flobby_process_pr-downloader.log  # pr-downloader output
        map/  # map cache files
        log/  # logs of all chats, logging to files can be disabled in flobby
    /tmp/flobby.log  # flobby debug log, path can be changed in flobby
