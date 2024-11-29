package main

import (
	"fmt"
	"strings"
)

func main() {
	var t int
	fmt.Scan(&t)
	for t > 0 {
		t--
		var n int
		fmt.Scan(&n)
		words := make([]string, n)
		for i := 0; i < n; i++ {
			fmt.Scan(&words[i])
		}
		var sentence string
		fmt.Scan(&sentence)
		currSentence := ""
		ans := make([]string, 0)
		solveWord(&words, sentence, 0, currSentence, &ans)
		for _, sen := range ans {
			fmt.Println(strings.TrimSpace(sen))
		}
	}
}

func solveWord(words *[]string, sentence string, start int, currSentence string, ans *[]string) {
	if start == len(sentence) {
		*ans = append(*ans, currSentence)
		return
	}
	for i := start; i < len(sentence); i++ {
		tmp := sentence[start : i+1]
		for _, word := range *words {
			if word == tmp {
				newSentence := currSentence + " " + tmp
				solveWord(words, sentence, i+1, newSentence, ans)
			}
		}
	}
}
