#pragma once
#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
	unsigned int ID;

	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);

	void Use();

	void SetBool(const std::string& name, bool value) const;
	void Setint(const std::string& name, int value) const;
	void SetFloat(const std::string& name, float value) const;
};