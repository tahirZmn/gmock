#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "maths.h"
#include "mockClass.h"

class IDataAccess
{
   
public:
    virtual ~IDataAccess(){}
    virtual int ReadData()=0;

};

class MockDataAccess : public mockClass{
    public :
    MOCK_METHOD(int ,sum,(int ,int ),(override));
    MOCK_METHOD(int ,product, (int ,int) ,(override));
   
};
     
TEST(MockTest, ReadDataMock){
    MockDataAccess MDA;
    EXPECT_CALL(MDA,sum);

    int result = MDA.sum (2,2);
}

class MyTestFixture : public ::testing::Test{
     public : int  var = 0;
};

TEST_F (MyTestFixture , sum){
    var = sum (2,2);
    EXPECT_EQ(var,4) << "Test on SUM method!";
}

TEST_F (MyTestFixture, product){
    var = product(2,2);
    EXPECT_EQ(var,4) << "Test on PRODUCT method!";
}
