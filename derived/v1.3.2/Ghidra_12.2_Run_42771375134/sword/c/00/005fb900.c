/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fb900; name: FUN_005fb900
 */


void FUN_005fb900(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_027143e0 + 0x10;
  puVar1 = PTR_DAT_027143e0 + 0x1d0;
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  if (param_1[5] != 0) {
    FUN_005f96f0(param_1[4],param_1);
    puVar4 = (undefined *)*param_1;
    param_1[5] = 0;
  }
  (**(code **)(puVar4 + 0x98))(param_1);
  param_1[0x3e] = (long)(PTR_DAT_027143f0 + 0x10);
  plVar3 = param_1 + 0x43;
  if (((*(byte *)(param_1 + 0x47) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = (long *)param_1[0x3f];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x47] = 0;
  *plVar3 = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x34] = (long)(PTR_DAT_027143e8 + 0x10);
  plVar3 = param_1 + 0x39;
  if (((*(byte *)(param_1 + 0x3d) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = (long *)param_1[0x35];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3d] = 0;
  *plVar3 = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    if (param_1[8] != 0) {
      plVar3 = (long *)param_1[7];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[8],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[8] = 0;
    }
    param_1[8] = 0;
  }
  FUN_005bf750(param_1 + 2);
  return;
}


