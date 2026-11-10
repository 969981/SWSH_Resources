/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064fbf0; name: FUN_0064fbf0
 */


void FUN_0064fbf0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  *param_1 = (long)(PTR_DAT_02714aa0 + 0x10);
  FUN_0064fe70();
  uVar4 = param_1[0x2a];
  plVar1 = param_1 + 0x2d;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = param_1[0x2a];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = (long *)param_1[0x29];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  puVar2 = PTR_DAT_02714aa8;
  param_1[0x28] = (long)(PTR_DAT_02714aa8 + 0x10);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *plVar1 = 0;
  puVar6 = (ulong *)(param_1 + 0x1f);
  uVar4 = *puVar6;
  plVar1 = param_1 + 0x22;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = *puVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (((*(byte *)(param_1 + 0x26) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = (long *)param_1[0x1e];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x1d] = (long)(puVar2 + 0x10);
  *puVar6 = 0;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  *plVar1 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar6 = (ulong *)(param_1 + 0x14);
  uVar4 = *puVar6;
  plVar1 = param_1 + 0x17;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = *puVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (((*(byte *)(param_1 + 0x1b) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = (long *)param_1[0x13];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x12] = (long)(puVar2 + 0x10);
  *puVar6 = 0;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  *plVar1 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar6 = (ulong *)(param_1 + 9);
  uVar4 = *puVar6;
  plVar1 = param_1 + 0xc;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = *puVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = (long *)param_1[8];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[7] = (long)(puVar2 + 0x10);
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  *plVar1 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


