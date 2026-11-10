/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002055c0; name: FUN_002055c0
 */


void FUN_002055c0(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar1 = (byte *)(param_1 + 0x90);
    if ((*(byte *)(param_1 + 0x38) & 0x40) != 0) {
      pbVar1 = (byte *)(*(long *)(param_1 + 0x40) + 0x34);
    }
    if ((*pbVar1 >> 1 & 1) != 0) {
      lVar2 = FUN_001e1e70();
      lVar3 = FUN_001e18a0(*(undefined8 *)(param_1 + 0x28));
      if (lVar2 != 0) {
        uVar4 = FUN_00207f80(lVar3,param_1);
        FUN_0039a730(lVar2 + 0x2430,uVar4);
      }
      if (*(long *)(lVar3 + 0x20) != 0) {
        uVar4 = FUN_00400880();
        FUN_00400890(uVar4,8,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShape.cpp"
                     ,0xe8,param_2);
        FUN_00396ea0(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(param_1 + 0x28));
        return;
      }
    }
  }
  return;
}


