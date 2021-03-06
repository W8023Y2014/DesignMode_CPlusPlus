#include "stdafx.h"
#include "Product.h"
#include "iostream"

namespace SimpleFactory
{
    ICar::ICar()
    {
        cout << "创建 ICar" << endl;
    }

    ICar::~ICar()
    {
        cout << "删除 ICar" << endl;
    }

    BenCar::BenCar()
    {
        cout << "创建 BenCar" << endl;
    }

    BenCar::~BenCar()
    {
        cout << "删除 BenCar" << endl;
    }

    string BenCar::Name()
    {
        cout << "Name: BenCar" << endl;
        return "Ben Car";
    }

    BmwCar::BmwCar()
    {
        cout << "创建 BmwCar" << endl;
    }

    BmwCar::~BmwCar()
    {
        cout << "删除 BmwCar" << endl;
    }

    string BmwCar::Name()
    {
        cout << "Name: BmwCar" << endl;
        return "BmwCar Car";
    }

    AudiCar::AudiCar()
    {
        cout << "创建 AudiCar" << endl;
    }

    AudiCar::~AudiCar()
    {
        cout << "删除 AudiCar" << endl;
    }

    string AudiCar::Name()
    {
        cout << "Name: AudiCar" << endl;
        return "AudiCar Car";
    }
}