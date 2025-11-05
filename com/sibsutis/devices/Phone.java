package com.sibsutis;
public class Phone{
    public Phone(int id, int price){
        this.id = id;
        this.price = price;
    }
    public Phone(int id, int price, int ip){
        this.id = id;
        this.price = price;
        this.ip = ip;
    }
    public String GetDeviceType(){
        return "Phone";
    }
}