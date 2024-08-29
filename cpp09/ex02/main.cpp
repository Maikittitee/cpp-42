#include "PmergeMe.hpp"
#include <cstdlib>
#include <ctime>

static bool	isdigitStr(char *str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

static std::vector<unsigned int> randomn_uint(size_t n){
	    
	std::vector<unsigned int> result;

    std::srand(std::time(0));

    for (size_t i = 0; i < n; ++i) {
        unsigned int randomValue = static_cast<unsigned int>(std::rand()) % 10;
        result.push_back(randomValue);
    }
    return result;	
} 

bool	setInput(unsigned int* & arr, size_t size, char **av)
{
	long int	number;

	for (size_t i = 0; i < size; i++)
	{
		if (!isdigitStr(av[i + 1])){
			std::cerr << "Invalid Input!!!" << std::endl;
			return (false);
		}
		number = atol(av[i + 1]);
		if (strlen(av[i + 1]) > 10 || number > std::numeric_limits<unsigned int>::max()){
			std::cerr << "Number is over than unsigned int!!!" << std::endl;
			return false;
		}
		if (number < 0) {
			std::cerr << "Not a positive integer number!!!" << std::endl;
			return (false);
		}
		arr[i] = static_cast<unsigned int>(number);
	}
	return true;
}

double	getExecTime(struct timeval & start)
{
	struct timeval	end;
	double			timeTaken;

	gettimeofday(&end, NULL);
	timeTaken = end.tv_sec - start.tv_sec;
	timeTaken += (end.tv_usec - start.tv_usec) * 1e-6;
	return timeTaken;
}
int	main(int ac, char **av)
{
	if (ac < 2){
		std::cerr << "No argument!!!" << std::endl;
		return (1);
	}

	struct timeval	start;
	std::size_t		size = ac - 1;
	unsigned int*	arr = new unsigned int [size];

	if (!setInput(arr, size, av))
		return 1;
	std::vector<unsigned int>	vecCon(arr, arr + size);
	std::deque<unsigned int>	dequeCon(arr, arr + size);
	double	vecTime;
	double	dequeTime;

	std::cout << "Before:\t" << vecCon << std::endl;

	gettimeofday(&start, NULL);
	mergeInsertSort(vecCon);
	vecTime = getExecTime(start);

	gettimeofday(&start, NULL);
	mergeInsertSort(dequeCon);
	dequeTime = getExecTime(start);

	std::cout << "After:\t" << vecCon << std::endl;
	// checkAscending(vecCon, "vector : ");
	// checkAscending(dequeCon, "deque : ");

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << size << " elements with std::vector : " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << dequeTime << " us" << std::endl;
	delete [] arr;
	return 0;
}

// int	main(){
// 	std::vector<unsigned int> vec;
// 	std::deque<unsigned int> que;

// 	vec = randomn_uint(11);
// 	for (size_t i = 0; i < vec.size(); i++){
// 		que.push_back(vec[i]);
// 	}

// 	std::cout << "Input: " << vec << std::endl;
// 	std::cout << "Input: " << que << std::endl;

// 	mergeInsertSort(vec);
// 	std::cout << vec << std::endl;

// 	mergeInsertSort(que);
// 	std::cout << que << std::endl;
// }