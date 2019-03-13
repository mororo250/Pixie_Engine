#pragma once

#include "Math.h"

class Shader
{
public: 

	Shader(const std::string& filepath);
	~Shader();

	void bind() const;
	void unbind() const;
	void SetUniform1i(int Location, int value);
	void SetUniform1f(int Location, float value);
	void SetUniform4f(int Location, float v1, float v2, float v3, float v4);
	void SetUniformMatrix3f(int Location, Matrix< float, 3, 3>);
	int GetUniformLocation(const std::string& name) const;

	inline unsigned int GetProgram()const { return mShaderProgram; }

private:
	enum ShaderType { NONE, VERTEX, FRAGMENT };

	void ReadShader_File(const std::string& filepath, std::string& VertexString, std::string& FragString);
	bool CreateShader(const std::string& filepath);
	unsigned int CompileShader(const std::string& Shader, const unsigned int ShaderType);
	
	unsigned int mShaderProgram;

};