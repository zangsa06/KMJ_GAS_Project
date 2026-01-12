// Fill out your copyright notice in the Description page of Project Settings.

#include "GASCharacter.h"
#include "AbilitySystemComponent.h"
#include "MyAttributeSet.h"

AGASCharacter::AGASCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    AttributeSet = CreateDefaultSubobject<UMyAttributeSet>(TEXT("AttributeSet"));
}

void AGASCharacter::BeginPlay()
{
    Super::BeginPlay();

}

void AGASCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AGASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UAbilitySystemComponent* AGASCharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}