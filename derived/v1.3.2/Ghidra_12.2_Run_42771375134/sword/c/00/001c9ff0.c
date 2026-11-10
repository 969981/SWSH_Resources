/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c9ff0; name: FUN_001c9ff0
 */


void FUN_001c9ff0(long *param_1,uint param_2,byte param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0x3000e;
  param_1[2] = 0;
  puVar1 = PTR_DAT_02711078;
  param_1[4] = 0;
  param_1[5] = (long)param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(byte *)(param_1 + 7) = param_3 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(uint *)((long)param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 3) = 0xa000000;
  if (param_2 == 0) {
    param_1[9] = 0;
    return;
  }
  plVar2 = (long *)FUN_00400d30();
  lVar3 = (**(code **)(*plVar2 + 0x10))
                    (plVar2,(ulong)param_2 << 3,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpAggregate.cpp"
                     ,0x3b);
  param_1[9] = lVar3;
  return;
}


