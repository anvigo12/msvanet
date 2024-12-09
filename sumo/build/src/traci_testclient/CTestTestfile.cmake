# CMake generated Testfile for 
# Source directory: /home/aniket/Documents/workspace/msvanet/sumo/src/traci_testclient
# Build directory: /home/aniket/Documents/workspace/msvanet/sumo/build/src/traci_testclient
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(libsumotest "/home/aniket/Documents/workspace/msvanet/sumo/bin/testlibsumo")
add_test(libsumostatictest "/home/aniket/Documents/workspace/msvanet/sumo/bin/testlibsumostatic")
add_test(libtracitest "/home/aniket/Documents/workspace/msvanet/sumo/bin/testlibtraci" "/home/aniket/Documents/workspace/msvanet/sumo/bin/sumo" "-c" "/home/aniket/Documents/workspace/msvanet/sumo/docs/examples/sumo/hokkaido/test.sumocfg")
