/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8f80; name: FUN_001b8f80
 */


undefined8 FUN_001b8f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (DAT_02737320 == 0) {
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                 ,0x281,"Articulations not registered: returned NULL.");
    return 0;
  }
  uVar1 = FUN_001b8880(param_2,param_3,param_4);
  return uVar1;
}


