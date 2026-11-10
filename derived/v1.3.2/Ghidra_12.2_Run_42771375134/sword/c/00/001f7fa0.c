/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f7fa0; name: FUN_001f7fa0
 */


void FUN_001f7fa0(long param_1,long *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *local_38;
  
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  local_38 = param_2;
  switch(uVar1) {
  case 0:
    FUN_001f8990(param_1,param_2,param_3 & 1,param_4 & 1);
    return;
  case 1:
    FUN_001f8ac0(param_1,param_2,param_3 & 1,param_4 & 1);
    return;
  case 2:
  case 3:
    FUN_001cede0(param_1 + 0x10,param_2 + 5,0);
    FUN_001e7650(param_1 + 0x26b0,&local_38);
    break;
  case 4:
    uVar2 = FUN_00400880();
    FUN_00400890(uVar2,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x30f,
                 "PxScene::removeActor(): Individual articulation links can not be removed from the scene"
                );
    return;
  case 5:
    FUN_001cefd0(param_1 + 0x10,param_2 + 5);
    FUN_001feed0(param_1 + 0x26e8,&local_38);
  }
  return;
}


