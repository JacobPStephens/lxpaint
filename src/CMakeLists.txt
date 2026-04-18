add_executable(game)

target_sources(game
    PRIVATE
        ./main.cpp
        ./LXPaint.cpp
)

target_link_libraries(game
    PRIVATE
        glad
        glm::glm
        glfw
)