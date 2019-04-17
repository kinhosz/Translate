#!/usr/bin/env python
# -*- coding: utf-8 -*-
from googletrans import Translator
import sys


def main():

	translator = Translator()

	for line in sys.stdin:
		traduzido = translator.translate(line.encode('utf-8'),src='en',dest='pt')
		
		print(traduzido.text.encode('utf-8'))


if __name__ == "__main__":
	main()
