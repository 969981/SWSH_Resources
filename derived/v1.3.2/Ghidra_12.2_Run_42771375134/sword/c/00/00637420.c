/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00637420; name: FUN_00637420
 */


void FUN_00637420(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_02714620 + 0x10;
  puVar1 = PTR_DAT_02714620 + 0x128;
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  if (param_1[5] != 0) {
    FUN_005f96f0(param_1[4],param_1);
    puVar4 = (undefined *)*param_1;
    param_1[5] = 0;
  }
  (**(code **)(puVar4 + 0xb0))(param_1);
  param_1[0x2e] = (long)(PTR_DAT_02714628 + 0x10);
  plVar3 = param_1 + 0x33;
  if (((*(byte *)(param_1 + 0x37) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = (long *)param_1[0x2f];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x37] = 0;
  *plVar3 = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    if (param_1[7] != 0) {
      plVar3 = (long *)param_1[6];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[7],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[7] = 0;
    }
    param_1[7] = 0;
  }
  FUN_00638e70(param_1 + 2);
  return;
}


