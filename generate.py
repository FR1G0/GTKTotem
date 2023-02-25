import csv
import os


def generate():
    with open('data/Lista.csv', newline='') as csvfile:
        spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
        for row in spamreader:
            name = row[0].split(',')[0]

            os.mkdir("data/collection/"+"Cartella"+name)
            htmlfile = "data/collection/"+"Cartella"+name+"/"+name
            fp = open(htmlfile+"_info.html",'w')
            fp = open(htmlfile+"_habitat.html",'w')


if __name__=='__main__':
    generate()