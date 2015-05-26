/*
      工厂模式属于创建型模式，大致可以分为三类，简单工厂模式、工厂方法模式、抽象工厂模式。
      简单工厂模式，一个实现类，创建不同的对象
      工厂方法模式，是指定义一个用于创建对象的接口，让子类决定实例化哪一个类。Factory Method使一个类的实例化延迟到其子类。
      抽象工厂模式，一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类。
*/

class SingleCore     
{    
    public:
        virtual void Show() = 0;
};

class SingleCoreA: public SingleCore
{    
    public:
        void Show()
        {
            cout<<"Single Core A"<<endl;
        }
};

class SingleCoreB: public SingleCore
{    
    public:
        void Show()
        {
            cout<<"Single Core B"<<endl;
        }
};

//多核    
class MultiCore
{    
    public:
        virtual void Show() = 0;
};

class MultiCoreA: public MultiCore
{
    public:
        void Show()
        {
            cout<<"Multi Core A"<<endl;
        }
    
};

class MultiCoreB: public MultiCore
{
    public:    
        void Show()
        {
            cout<<"Multi Core B"<<endl;
        }
};

//工厂
class CoreFactory
{
    public:    
        virtual SingleCore* CreateSingleCore() = 0;
        virtual MultiCore* CreateMultiCore() = 0;
};

//工厂A，专门用来生产A型号的处理器
class FactoryA: public CoreFactory    
{
    public:
        SingleCore* CreateSingleCore() 
        {
            return new SingleCoreA();
        }

        MultiCore* CreateMultiCore()
        {
            return new MultiCoreA();
        }
};

//工厂B，专门用来生产B型号的处理器    
class FactoryB: public CoreFactory    
{    
    public:
        SingleCore* CreateSingleCore() 
        {
            return new SingleCoreB();
        }

        MultiCore* CreateMultiCore()
        {
            return new MultiCoreB();
        }
}; 
