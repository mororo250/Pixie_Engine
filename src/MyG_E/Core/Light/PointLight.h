#pragma once

#include "Core\Light\Light.h"

class PointLight : public Light
{
public:
	PointLight(const Vector<float, 3>& position, const Vector<float, 3>& color = Vector<float, 3>({ 1.0f, 1.0f, 1.0f }));
	~PointLight() = default;
	
	inline Vector<float, 3> GetAttenuationConstants() const { return m_attenuation_constants; }
	inline float GetConstant() const { return m_attenuation_constants[0]; }
	inline float GetLinear() const { return m_attenuation_constants[1]; }
	inline float GetQuadratic() const { return m_attenuation_constants[2]; }
	inline void SetAttenuationConstants(const Vector<float, 3>& constants) { m_attenuation_constants = constants; }

	void ImGuiRenderer() override;

private:
	// Attenuation (constant, linear, quadratic).
	Vector<float, 3> m_attenuation_constants;
};