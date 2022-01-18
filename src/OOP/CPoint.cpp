class CPoint{
    private:
        float x,y;
    public:
        CPoint();// khoi tao mac dinh
};
CPoint::CPoint(){
    this->x = 1;
    this->y = 1;
}
int main(){
    CPoint point1;// tao doi tuong
    return 0;
}