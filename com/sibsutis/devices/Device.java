package com.sibsutis;

import java.awt.print.Printable;

public abstract  class Device {
    private int id;
    private int price;
    private String ip;
    public Device(int id, int price, String ip){
        this.id = id;
        this.price =price;
        this.ip = null;
    }
    public int GetId(){
        return id;
    }
    public int getPrice(){
        return price;
    }
    public String GetIp(){
        return ip;
    }
    @Override
    public String print(){
        return "Device {"+ip+";"+price+";"+ip+";"+GetDeviceType;
    }
    public abstract  String GetDeviceType();
    @Override
    public boolean equals(Object o){
        if(this == o){ return true;}
        if (o == null || o.getClass()!=this.getClass()){ return false;}
        Device device = (Device)o;
        return id == device.id && price == device.price;
    }
    @Override
    public hashCode(){
        return Object.hash(id,price,ip);
    }
}