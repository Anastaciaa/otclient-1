#ifndef CONST_H
#define CONST_H

//namespace Fw {

enum AlignmentFlag {
    AlignLeft = 1,
    AlignRight = 2,
    AlignTop = 4,
    AlignBottom = 8,
    AlignHorizontalCenter = 16,
    AlignVerticalCenter = 32,
    AlignTopLeft = AlignTop | AlignLeft,
    AlignTopRight = AlignTop | AlignRight,
    AlignBottomLeft = AlignBottom | AlignLeft,
    AlignBottomRight = AlignBottom | AlignRight,
    AlignLeftCenter = AlignLeft | AlignVerticalCenter,
    AlignRightCenter = AlignRight | AlignVerticalCenter,
    AlignTopCenter = AlignTop | AlignHorizontalCenter,
    AlignBottomCenter = AlignBottom | AlignHorizontalCenter,
    AlignCenter = AlignVerticalCenter | AlignHorizontalCenter
};

enum AnchorPoint {
    AnchorNone = 0,
    AnchorTop,
    AnchorBottom,
    AnchorLeft,
    AnchorRight,
    AnchorVerticalCenter,
    AnchorHorizontalCenter,
};


//}

#endif