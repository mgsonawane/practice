def pangrams(s):
    ss=[]
    s=list(s.lower())
    print s
    for i in s:
        if i not in ss :
            ss.append(i)
    print len(ss)
    if len(ss) != 26 :
        return "pangram"
    else :
        return "not pangram"

pangrams("NOVmETKPTbYu ftZPEykhjgF GGkdGjWGwW skjPJsea dtwdqcr DERCUgxOxrRgDQbdzL IZjyXs")
