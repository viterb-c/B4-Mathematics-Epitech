OCAML_DIR = ocaml
C_DIR = C
OBJC_DIR = objective-c
CPP_DIR = C++

all:
		make -C $(OCAML_DIR)
		make -C $(C_DIR)
		make -C $(CPP_DIR)
		make -C $(OBJC_DIR)

clean:
		make -C $(OCAML_DIR) clean
		make -C $(C_DIR) clean
		make -C $(CPP_DIR) clean
		make -C $(OBJC_DIR) clean

fclean:
		make -C $(OCAML_DIR) fclean
		make -C $(C_DIR) fclean
		make -C $(CPP_DIR) fclean
		make -C $(OBJC_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
