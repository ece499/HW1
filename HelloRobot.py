from time import sleep
def HelloRobot():
        while(True):
                try:
                        print('Hello Robot')
                        sleep(1)
                except:
                        print('\n')
                        break

if __name__=='__main__':
        HelloRobot()

