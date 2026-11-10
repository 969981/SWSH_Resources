/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b83f0; name: FUN_001b83f0
 */


long FUN_001b83f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (DAT_02737310 == 0) {
    uVar4 = FUN_00400880();
    FUN_00400890(uVar4,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                 ,0x1a8,"Cloth not registered: returned NULL.");
  }
  else {
    lVar2 = FUN_001b7fd0(*(undefined8 *)PTR_DAT_02711048);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_001e57f0(lVar2,param_2);
    if ((uVar3 & 1) != 0) {
      FUN_001b81a0(param_1,lVar2,1);
      return lVar2;
    }
    iVar1 = FUN_003ff490(lVar2 + 0x18);
    if (iVar1 == 0) {
      (**(code **)(*(long *)(lVar2 + 0x10) + 0x10))();
    }
  }
  return 0;
}


