import googletrans import Translator
import sys


def main():

	translator = Translator()

	for line in sys.stdin:
		print(translator.translate(line,src='en',dest='pt'))


if __name__ == "__main__":
	main()
