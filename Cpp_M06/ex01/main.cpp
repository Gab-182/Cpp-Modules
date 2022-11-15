# include <iostream>
# include <cstring>
# include <iostream>

/**
 * @brief: 
 * # uintptr_t is an unsigned integer type of the same size as a pointer.
 * # reinterpret_cast is a type conversion operator that casts a pointer to a pointer of another type.
 * 
 */
/*==================[Structure]=============================*/
struct Data {
	int 		num1;
	int 		num2;
	char 		c;
	char 		d;
};

/*===================[Methods]==============================*/
/**
 * @brief cast (Data pointer) to a uintptr_t
 * 
 * @param data 
 * @return uintptr_t 
 */
uintptr_t serialize(Data *data) {
	return (reinterpret_cast<uintptr_t>(data));
}

/**
 * @brief cast (uintptr_t) to a Data pointer
 * 
 * @param data 
 * @return Data* 
 */
Data *deserialize(uintptr_t data) {
	return (reinterpret_cast<Data *>(data));
}

/*==========================================================*/
int main()
{
	Data		data;
	
	data.num1 = 3;
	data.num2 = 4;
	data.c = 'c';
	data.d = 'd';

	Data		*dataPtr;
	uintptr_t	srlz_data;


	std::cout << "#===========================================#" << std::endl;

	srlz_data = serialize(&data);
	std::cout << srlz_data << std::endl;
	std::cout << "The size of {srlz_data}: "<< sizeof(srlz_data) << std::endl;
	std::cout << "#===========================================#" << std::endl;
	
	dataPtr = deserialize(srlz_data);
	std::cout << dataPtr->num1 << std::endl;
	std::cout << dataPtr->num2 << std::endl;
	std::cout << dataPtr->c << std::endl;
	std::cout << dataPtr->d << std::endl;
	std::cout << "#===========================================#" << std::endl;

}
/*==========================================================*/
