#pragma once

class FPSDrawer : public rfe::Component
{
public:
	std::shared_ptr<rfe::Transform> transform;
protected:
	void OnLoad() override
	{
		if (!transform)
		{
			transform = GetEntity()->GetComponent<rfe::Transform>();
		}
	}
	void OnUpdate() override
	{
		rfe::Application::GetActive()->fnBufferScreen.Push([&]() { DrawFPS((int)transform->position.x, (int)transform->position.y); });
	}
};

