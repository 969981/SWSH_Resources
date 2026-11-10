/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d0f50; name: FUN_005d0f50
 */


void FUN_005d0f50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  
  plVar4 = param_1 + 8;
  *param_1 = (long)(PTR_DAT_02714170 + 0x10);
  puVar5 = (ulong *)(param_1 + 5);
  uVar3 = *puVar5;
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      plVar1 = *(long **)(*plVar4 + uVar6 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar4 + uVar6 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *puVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xc) & 1) == 0) && (*plVar4 != 0)) {
    plVar1 = (long *)param_1[4];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar5 = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  *plVar4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  (**(code **)(*param_1 + 0x60))(param_1);
  param_1[0xd] = (long)(PTR_DAT_02714180 + 0x10);
  plVar1 = param_1 + 0x12;
  if (((*(byte *)(param_1 + 0x16) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0xe];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  *plVar1 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[3] = (long)(PTR_DAT_02714178 + 0x10);
  if (((*(byte *)(param_1 + 0xc) & 1) == 0) && (*plVar4 != 0)) {
    plVar1 = (long *)param_1[4];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar5 = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  *plVar4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


