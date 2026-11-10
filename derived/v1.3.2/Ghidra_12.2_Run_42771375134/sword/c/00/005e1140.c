/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e1140; name: FUN_005e1140
 */


void FUN_005e1140(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_02714288;
  param_1[0x2d] = 0;
  param_1[2] = (long)(puVar1 + 0xd8);
  param_1[3] = (long)(puVar1 + 0x108);
  plVar4 = param_1 + 0x28;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0xa0);
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[0x24];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  *plVar4 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))();
    param_1[0x18] = 0;
  }
  puVar6 = (ulong *)(param_1 + 0x1b);
  uVar5 = *puVar6;
  plVar2 = param_1 + 0x1e;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + uVar7 * 8);
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar7 * 8) = 0;
        (**(code **)(*plVar3 + 0x18))();
        uVar5 = *puVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (*plVar2 != 0)) {
    plVar3 = (long *)param_1[0x1a];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *puVar6 = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *plVar2 = 0;
  FUN_005dcac0(param_1);
  param_1[0x23] = (long)(PTR_DAT_02714290 + 0x10);
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x24];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  *plVar4 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x19] = (long)(PTR_DAT_02714280 + 0x10);
  if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (*plVar2 != 0)) {
    plVar4 = (long *)param_1[0x1a];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *puVar6 = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  *plVar2 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_005dc8a0(param_1);
  return;
}


