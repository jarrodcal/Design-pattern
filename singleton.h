/****
    单例模式，应用于对共用资源的访问，如日志，数据库连接等    
*****/

#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton
{
    public:
        Singleton();
        ~Singleton();

        static Singleton * getInstance();
        void Test();

    private:
        static Singleton *ptr;
};

#endif __SINGLETON_H__
