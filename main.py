
import os

if __name__ == '__main__':
    for fpath, dirs, fs in os.walk('./'):
        for f in fs:
            pathx = os.path.join(fpath, f)
            if os.path.splitext(f)[-1]=='.cpp':
                print(pathx)
                exepath = "unifdef -f def.txt -m -k " + pathx
                os.system(exepath)
            
