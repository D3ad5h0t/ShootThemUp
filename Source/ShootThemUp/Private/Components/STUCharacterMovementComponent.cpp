// Shoot Them Up Game. All Rights Reserved


#include "Components/STUCharacterMovementComponent.h"
#include "Player/STUBaseCharacter.h"

float USTUCharacterMovementComponent::GetMaxSpeed() const
{
    const float maxSpeed = Super::GetMaxSpeed();
    const ASTUBaseCharacter* player = Cast<ASTUBaseCharacter>(GetPawnOwner());

    return player && player->IsRunning() ? maxSpeed * RunModifier : maxSpeed;
}
