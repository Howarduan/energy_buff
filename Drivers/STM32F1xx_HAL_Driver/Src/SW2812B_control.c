//1.30 23:11 add the interface for different blades
#define u8 char
int P1;
typedef struct{
    u8 RED;
    u8 GREEN;
    u8 BLUE;
} RGB;//the data structure of RGB

typedef int Pin_Type; //TODO: port mapping

//each row represents a group or half arrow
///////////////////////////////the 1st frame//////////////////////////////////////
u8 ID1[]={
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00
};
/////////////////////////////////the 2nd frame////////////////////////////////////
u8 ID2[]={
0x00,    
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18
};
///////////////////////////////the 3rd frame//////////////////////////////////////
u8 ID3[]={
0x18,0x00,    
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b
};
///////////////////////////////the 4th frame//////////////////////////////////////
u8 ID4[]={
0x3b,0x18,0x00,    
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66
};
///////////////////////////////the 5th frame//////////////////////////////////////
u8 ID5[]={
0x66,0x3b,0x18,0x00,    
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3
};
///////////////////////////////the 6th frame//////////////////////////////////////
u8 ID6[]={
0xb3,0x66,0x3b,0x18,0x00,    
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81
};
///////////////////////////////the 7th frame//////////////////////////////////////
u8 ID7[]={
0x81,0xb3,0x66,0x3b,0x18,0x00,    
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,0x81,0xb3,0x66,0x3b,0x18,0x00,
0x00,
};
///////////////////////////////the 8th frame//////////////////////////////////////
u8 ID_full[]={
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};




void WS2812B_Send_ABit(Pin_Type Data_send,u8 VAL){//send a bit of data, needing high precision timing 
    if(VAL==1){
        Data_send=1;
        delay_us(0.8);
        Data_send=0;
        delay_us(0.45);//the delay after high level is the most important??
    }
    else{
        Data_send=1;
        delay_us(0.4);
        Data_send=0;
        delay_us(0.85);
    }
}

void WS2812B_Send_A_RGB(Pin_Type Data_send,RGB* RGB_VAL){//the sequence is GRB
    int cnt;
    for(cnt=0;cnt<8;cnt++){
        WS2812B_Send_ABit(Data_send,RGB_VAL->GREEN>>(7-cnt)&0x01);//high bit first
    }
    for(cnt=0;cnt<8;cnt++){
        WS2812B_Send_ABit(Data_send,RGB_VAL->RED>>(7-cnt)&0x01);//high bit first
    }
    for(cnt=0;cnt<8;cnt++){
        WS2812B_Send_ABit(Data_send,RGB_VAL->BLUE>>(7-cnt)&0x01);//high bit first
    }
}

void WS2812B_Send_A_Line(Pin_Type Data_send,u8 line,RGB* RGB_VAL,u8 ood_even){ //which is divided into odd num and even
    RGB RGB_NONE={0,0,0};//no color
    int cnt;
    if(ood_even%2){//odd: from the high to the low is corresponding to from the left to the right
        for(cnt=0;cnt<8;cnt++){
            if((line>>(7-cnt)&0x01)==1){
                WS2812B_Send_A_RGB(Data_send,RGB_VAL);
            }
            else{
                WS2812B_Send_A_RGB(Data_send,&RGB_NONE);
            }
        }
    }
    else{//even: from the high to the low is corresponding to from the left to the right
        for(cnt=0;cnt<8;cnt++){
            if((line>>cnt&0x01)==1){
                WS2812B_Send_A_RGB(Data_send,RGB_VAL);
            }
            else{
                WS2812B_Send_A_RGB(Data_send,&RGB_NONE);
            }
        }
    }
}
//transport data of each frame
void WS2812B_Send_A_Part(Pin_Type Data_send,u8* part,u8 num,RGB* RGB_VAL){
    u8 cnt=1;
    for(cnt=1;cnt<=num;cnt++){
        WS2812B_Send_A_Line(Data_send,(part+cnt-1),RGB_VAL,cnt);
    }
}

void Display_Flow(Pin_Type pin,RGB* COLOR){
    WS2812B_Send_A_Part(pin,ID1,sizeof(ID1),COLOR);
    delay_us(50);
    WS2812B_Send_A_Part(pin,ID2,sizeof(ID2),COLOR);
    delay_us(50);
    WS2812B_Send_A_Part(pin,ID3,sizeof(ID3),COLOR);
    delay_us(50);
    WS2812B_Send_A_Part(pin,ID4,sizeof(ID4),COLOR);
    delay_us(50);
    WS2812B_Send_A_Part(pin,ID5,sizeof(ID5),COLOR);
    delay_us(50);
    WS2812B_Send_A_Part(pin,ID6,sizeof(ID6),COLOR);
    delay_us(50);
    WS2812B_Send_A_Part(pin,ID7,sizeof(ID7),COLOR);
    delay_us(50);
}

void Display_Full(Pin_Type pin,RGB* COLOR){
    WS2812B_Send_A_Part(pin,ID_full,sizeof(ID_full),COLOR);
    delay_us(50);
}