message_hider.o: message_hider.cpp encryptor.h
  g++ -c message_hider.cpp
encryptor.o: encryptor.cpp encryptor.h
  g++ -c encryptor.cpp
encryptor: encryptor.o message_hider.o
  g++ encryptor.o message_hider.o -o encryptor