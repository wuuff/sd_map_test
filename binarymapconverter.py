import sys,struct,json

if len(sys.argv) != 2:
    print "No! One argument, the json map, come on"
    exit()

with open(sys.argv[1]) as f:
    map = json.load(f)
    mapdata = map['layers'][0]['data']
    for item in mapdata:
        sys.stdout.write( struct.pack('B',int(item)-1) )