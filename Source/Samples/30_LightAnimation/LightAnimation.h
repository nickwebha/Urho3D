// Copyright (c) 2008-2023 the Urho3D project
// License: MIT

#pragma once

#include "Sample.h"

namespace Urho3D
{

class Node;
class Scene;

}

/// Light animation example.
/// This sample is base on StaticScene, and it demonstrates:
///     - Usage of attribute animation for light color & UI animation
class LightAnimation : public Sample
{
    URHO3D_OBJECT(LightAnimation, Sample);

public:
    /// Construct.
    explicit LightAnimation(Context* context);

    /// Setup after engine initialization and before running the main loop.
    void Start() override;

private:
    /// Construct the scene content.
    void CreateScene();
    /// Construct an instruction text to the UI.
    void CreateInstructions();
    /// Set up a viewport for displaying the scene.
    void SetupViewport();
    /// Read input and moves the camera.
    void MoveCamera(float timeStep);
    /// Subscribe to application-wide logic update events.
    void SubscribeToEvents();
    /// Handle the logic update event.
    void HandleUpdate(StringHash eventType, VariantMap& eventData);
};
