picotool reboot -uf;
sleep 5;
picotool load build/carrier_receiver_baseband.elf;
picotool reboot;
sleep 2;
picocom -b 115200 /insert/your/path;

