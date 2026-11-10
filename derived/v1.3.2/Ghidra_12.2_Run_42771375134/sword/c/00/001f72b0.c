/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f72b0; name: FUN_001f72b0
 */


void FUN_001f72b0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long local_30;
  char local_24 [4];
  
  local_30 = param_2;
  switch(*(undefined2 *)(param_2 + 8)) {
  case 6:
    FUN_001f7510(param_1,param_2,0);
    return;
  case 7:
    FUN_001f73d0(param_1,param_2,0);
    return;
  default:
    goto switchD_001f72e8_caseD_8;
  case 0xb:
    FUN_001ceec0(param_1 + 0x10,param_2 + 0x28);
    plVar1 = (long *)FUN_00200b40(param_1 + 0x26e8,&local_30,local_24);
    break;
  case 0xc:
  case 0xd:
    FUN_001ced20(param_1 + 0x10,param_2 + 0x28);
    plVar1 = (long *)FUN_002009d0(param_1 + 0x26b0,&local_30,local_24);
    break;
  case 0x10:
    uVar2 = FUN_00400880();
    FUN_00400890(uVar2,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x1c0,
                 "PxScene::addActor(): Individual articulation links can not be added to the scene")
    ;
    return;
  }
  if (local_24[0] == '\0') {
    *plVar1 = local_30;
    return;
  }
switchD_001f72e8_caseD_8:
  return;
}


