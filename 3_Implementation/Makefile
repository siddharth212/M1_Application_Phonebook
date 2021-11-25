########################################################################
####################### Makefile Template ##############################
#######################################################################

# Name of the project
PROJECT_NAME = phonebook

# Output directory
BUILD = build

# All source code files
SRC = phonebook/phonebook_application.c\
phonebook/phonebook.c\




TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\



# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html


 ifdef OS
    RM = rm
    FixPath = $(subst /,\,$1)
    EXEC = exe
 else
    ifeq ($(shell uname), Linux)
       RM = rm -rf
       FixPath = $1
 	    EXEC = out
    endif
 endif

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(call FixPath,$(PROJECT_OUTPUT))

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(TEST_OUTPUT).$(EXEC))
	./$(call FixPath,$(TEST_OUTPUT).$(EXEC))


# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

# Create new build folder if not present
$(BUILD):
	mkdir build
