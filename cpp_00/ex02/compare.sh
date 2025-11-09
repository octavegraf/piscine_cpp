cat 19920104_091532.log | awk '{print substr($0, 19)}' > input
./tests | awk '{print substr($0, 19)}' > output
diff input output
rm -rf input output