make
cat 19920104_091532.log | awk '{print substr($0, 19)}' > input
./TheJobOfYourDreams | awk '{print substr($0, 19)}' > output
diff input output
rm -rf input output