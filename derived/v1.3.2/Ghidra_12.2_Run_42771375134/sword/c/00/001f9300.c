/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f9300; name: FUN_001f9300
 */


void FUN_001f9300(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (param_1 == lVar1) {
    FUN_001f9390(param_1,param_2,param_3 & 1,1);
    return;
  }
  uVar2 = FUN_00400880();
  FUN_00400890(uVar2,8,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
               ,0x5b,"%s not assigned to scene or assigned to another scene. Call will be ignored!",
               "PxScene::removeArticulation(): Articulation");
  return;
}


