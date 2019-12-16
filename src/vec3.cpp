//
// Created by marten on 08-12-19.
//

#include "../include/vec3.h"

vec3::vec3(){

}

vec3::vec3(float e0, float e1, float e2) {
    e[0] = e0;
    e[1] = e1;
    e[2] = e2;
}

vec3::~vec3() {

}

vec3& vec3::operator+=(const vec3 &v2){
    e[0] += v2[0];
    e[1] += v2[1];
    e[2] += v2[2];
    return *this;
}

vec3& vec3::operator-=(const vec3 &v2){
    e[0] -= v2[0];
    e[1] -= v2[1];
    e[2] -= v2[2];
    return *this;
}

vec3& vec3::operator*=(const vec3 &v2){
    e[0] *= v2[0];
    e[1] *= v2[1];
    e[2] *= v2[2];
    return *this;
}

vec3& vec3::operator/=(const vec3 &v2){
    e[0] /= v2[0];
    e[1] /= v2[1];
    e[2] /= v2[2];
    return *this;
}

vec3& vec3::operator*=(const float t){
    e[0] *= t;
    e[1] *= t;
    e[2] *= t;
    return *this;
}

vec3& vec3::operator/=(const float t){
    float k = 1.0 / t;
    e[0] *= k;
    e[1] *= k;
    e[2] *= k;
    return *this;
}

vec3 vec3::make_unit_vector(vec3 v){
    return v / v.length();
}

vec3 vec3::unit_vector(){
    return *this / this->length();
}