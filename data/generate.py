import csv
import os


def generate():
    with open('ListaAnimali.csv', newline='') as csvfile:
        spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
        for row in spamreader:
            name = row[0].split(',')[0]

            os.mkdir("Cartella"+name)
            htmlfile = "Cartella"+name+"/"+name
            fp = open(htmlfile+"_info.html",'w')
            fp = open(htmlfile+"_habitat.html",'w')


if __name__=='__main__':
    generate()