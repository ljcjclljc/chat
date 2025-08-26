cmake_minimum_required(VERSION 3.16)

project(chat VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 COMPONENTS Network REQUIRED)
if(NOT Qt6_FOUND)
    find_package(Qt5 COMPONENTS Network REQUIRED)
endif()

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(chat
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        res.qrc
        logindialog.h logindialog.cpp logindialog.ui
        registerdialog.h registerdialog.cpp registerdialog.ui
        style/stylesheet.qss
        global.cpp
        global.h
        singleton.h
        httpmgr.h httpmgr.cpp
        config.ini
        timerbtn.h timerbtn.cpp
        clickedlabel.h clickedlabel.cpp
        resetdialog.cpp resetdialog.h resetdialog.ui
        tcpmgr.h tcpmgr.cpp
        usermgr.cpp usermgr.h

        clickedbtn.h clickedbtn.cpp
        chatdialog.h chatdialog.cpp chatdialog.ui
        customizeedit.h customizeedit.cpp
        chatuserlist.h chatuserlist.cpp
        chatuserwid.h chatuserwid.cpp chatuserwid.ui
        listitembase.h listitembase.cpp
        loadingdlg.h loadingdlg.cpp loadingdlg.ui
        chatpage.h chatpage.cpp chatpage.ui
        chatview.h chatview.cpp
        chatitembase.h chatitembase.cpp
        bubbleframe.h bubbleframe.cpp
        textbubble.h textbubble.cpp
        picturebubble.h picturebubble.cpp
        MessageTextEdit.cpp MessageTextEdit.h
        statewidget.h statewidget.cpp
        searchlist.h searchlist.cpp
        userdata.h userdata.cpp
        searchlist.cpp searchlist.h
        adduseritem.h adduseritem.cpp adduseritem.ui
        findsuccessdlg.h findsuccessdlg.cpp findsuccessdlg.ui
        applyfriend.h applyfriend.cpp applyfriend.ui
        clickedoncelabel.h clickedoncelabel.cpp
        friendlabel.h friendlabel.cpp friendlabel.ui
        contactuserlist.h contactuserlist.cpp
        conuseritem.h conuseritem.cpp conuseritem.ui
        grouptipitem.h grouptipitem.cpp grouptipitem.ui
        applyfriendpage.h applyfriendpage.cpp applyfriendpage.ui
        applyfrienditem.h applyfrienditem.cpp applyfrienditem.ui
        applyfriendlist.h applyfriendlist.cpp



    )

target_include_directories(chat
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}  # 替换成实际目录，比如 ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Define target properties for Android with Qt 6 as:
#    set_property(TARGET chat APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(chat SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(chat
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(chat PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
if(Qt6_FOUND)
    target_link_libraries(chat PRIVATE Qt6::Network)
else()
    target_link_libraries(chat PRIVATE Qt5::Network)
endif()

# 判断构建类型是否为Release或Debug
# 跨平台拷贝 config.ini 文件
set(TARGET_CONFIG "${CMAKE_CURRENT_SOURCE_DIR}/config.ini")
add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${TARGET_CONFIG}"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
    COMMENT "Copying config.ini to output directory"
)

# 跨平台拷贝 static 文件夹
set(STATIC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/static")
set(DEST_STATIC_DIR "$<TARGET_FILE_DIR:${PROJECT_NAME}>/static")
add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory "${DEST_STATIC_DIR}"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${STATIC_DIR}" "${DEST_STATIC_DIR}"
    COMMENT "Copying static directory to output directory"
)

# 为 MSVC 编译器添加特定标志
if(MSVC)
    target_compile_options(chat PRIVATE /wd4819 /utf-8)
endif()

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.chat)
endif()
set_target_properties(chat PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS chat
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(chat)
endif()
