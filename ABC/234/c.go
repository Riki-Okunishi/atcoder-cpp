package main

import (
	"fmt"
)

func main() {
	k := 5

	binary := make([]byte, 0)
	for ; k > 0; k /= 2 {
		binary = append(binary, byte(k % 2))
	}
	result := make([]byte, 0)
	for i := len(binary) - 1; i >= 0 ; i-- {
		if binary[i] == 0x01 {
			result = append(result, '2')
		} else {
			result = append(result, '0')
		}
	}
	result = append(result, '\n')
	fmt.Printf("%s", result)
}