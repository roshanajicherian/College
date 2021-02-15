with open("sampleTextFile.txt","r+") as wf:
    wf.seek(0,2)
    with open("sampleTextFile2.txt","r") as rf:
        textContent=rf.read()
        wf.write(textContent)
    wf.seek(0)
    print(wf.readlines())
