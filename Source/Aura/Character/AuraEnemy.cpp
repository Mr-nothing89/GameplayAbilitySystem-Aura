// Lucio Martinez


#include "AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);
}

void AAuraEnemy::HighlightActor()
{
}

void AAuraEnemy::UnHighlightActor()
{
}
