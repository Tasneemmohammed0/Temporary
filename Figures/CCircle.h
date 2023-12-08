#pragma once
#include "CFigure.h"
class CCircle :
    public CFigure
{
private :
    Point Center;
    Point CirclePoint;
public :
    CCircle(Point, Point, GfxInfo FigureGfxInfo);
    virtual void Draw(Output* pOut) const;
    virtual bool Isbelonging(Point P) const;
};

