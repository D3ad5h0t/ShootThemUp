// Shoot Them Up Game. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUHealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTTHEMUP_API USTUHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	USTUHealthComponent();

    float GetHealth() const { return Health; }

protected:

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Health", meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float MaxHealth = 100.0;
    
	virtual void BeginPlay() override;

private:
    float Health = 0.0f;
};
