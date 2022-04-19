cmake_minimum_required(VERSION 3.13.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(UnityTestFixture)

# no need of unity_memroy src as of now
add_definitions(-DUNITY_FIXTURE_NO_EXTRAS)
 
# add unity_fixture module to the project (i.e not included inside unity CMakeLists)
zephyr_include_directories(D:/nrf9160/v1.7.0/test/cmock/vendor/unity/extras/fixture/src)
target_sources(app PRIVATE D:/nrf9160/v1.7.0/test/cmock/vendor/unity/extras/fixture/src/unity_fixture.c)

target_sources(app PRIVATE src/main.c)
target_sources(app PRIVATE test/dummy_test_1.c)
target_sources(app PRIVATE test/dummy_test_2.c)