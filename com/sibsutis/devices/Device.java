package com.sibsutis.devices;

import com.sibsutis.Printable;

public abstract class Device implements Printable {
    final int id; 
    final int price;
    final String ip;

public Device(int id, int price, String ip){
    this.id = id;
    this.price = price;
    this.ip = null;
}
public int getid(){
    return id;
}
public int getprice(){
    return price;
}
public String getip(){
    return ip;
}
@Override
public String print(){
    System.out.println("Device:" + getip() + " " + getid() + " " + getprice() + " " + getdevicetype());
    return "++";
}
public abstract String getdevicetype();

public boolean equals(Object o){
    if (o == this) return true;
        if (!(o instanceof Device)) return false;
        Device computer = (Device)o;
        return true;
};

public int hashcode(){
    return super.hashCode();
};
}