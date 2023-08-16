# Use the srzzumix/googletest image as the base, contains c++20 and Gtest
FROM srzzumix/googletest

# Optional: Set the maintainer label
LABEL maintainer="your-email@example.com"

# Optional: Set the working directory inside the container
WORKDIR /usr/src/myapp

# Copy the current directory contents into the container at /usr/src/myapp
COPY ./ /usr/src/myapp/

# Compile the application using C++20 standard and run the app
RUN g++ -fdiagnostics-color=always -g util.cpp tests.cpp -o myapp /usr/local/lib/libgtest.a -lgtest -lgtest_main -pthread\
    && ./myapp

# Metadata as defined above
LABEL Name=cipipelinebasic Version=0.0.1
