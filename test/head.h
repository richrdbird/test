

#ifndef __HEAD__
#define __HEAD__

#define CHAIN_LENGTH 4	//����5֡���ɳ���Ϊ4�Ĵ�����
#define ALPHA_SDTP 0.94

#define MAX_PIC_HEIGHT  720	//Ŀǰ������ClassC - ClassD�����У���Щ���еĿ��߾��ܱ�16����
#define MAX_PIC_WIDTH   1280
#define MAX_BLK_HEIGHT  int(MAX_PIC_HEIGHT / 16)
#define MAX_BLK_WIDTH   int(MAX_PIC_WIDTH / 16)
#define MAX_BLK_COUNT   (MAX_BLK_HEIGHT * MAX_BLK_WIDTH)

class SDTP{

private:
  int a[CHAIN_LENGTH][MAX_BLK_COUNT];

public:

  void set(){
    printf("%d",CHAIN_LENGTH-1);

    printf("hh");
  }
};

#endif