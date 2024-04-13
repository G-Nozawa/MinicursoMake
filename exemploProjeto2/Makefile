#define o compilador padrão
CXX = g++
#define as flags de compilação
CXXFLAGS = -O2
#Caminhos para inclusao
INCLUDE_PATHS = -I./classes -I./headers
#Informa o diretório com outros arquivos de código
VPATH=classes/

#lista de objetos criados
output = classe1.o classe2.o main.o

#compila os objetos mas nao linka
%.o: %.cpp
	$(CXX) $(INCLUDE_PATHS) $(CPPFLAGS) -c $@ $<
	
#linka os arquivos compilados em um binario executavel 
testing: $(output)
	mkdir -p ./test
	$(CXX) $(INCLUDE_PATHS) $(output) -o ./test/$@

#remove todos os arquivos compilados e linkados
clean:
	@rm -f ./*.o ./test/* ./release/*

release: $(output)
	mkdir -p ./release
	$(CXX) $(INCLUDE_PATHS) $(output) -o ./release/$@
	