class CPoint{
    private:
        float x,y;
    public:
        CPoint();// khoi tao mac dinh
        CPoint(float x, float y);
};
CPoint::CPoint(){
    this->x = 0;
    this->y = 0;
}
CPoint::CPoint(float x, float y){
    this->x = x;
    this->y = y;
}
int main(){
    CPoint point1;// tao doi tuong
    CPoint point2 = CPoint(3,4);// tao doi tuong
    return 0;
}