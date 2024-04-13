#define o compilador padrão
CXX = g++
#define as flags de compilação
CXXFLAGS = -O2

#lista de objetos criados
output = classe1.o classe2.o main.o

#linka os arquivos compilados em um binario executavel 
myProgram: $(output)
	$(CXX) $(output) -o $@ 

#compila os objetos mas nao linka
%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $@ $<

#remove todos os arquivos compilados e linkados
clean:
	@rm ./*.o myProgram
