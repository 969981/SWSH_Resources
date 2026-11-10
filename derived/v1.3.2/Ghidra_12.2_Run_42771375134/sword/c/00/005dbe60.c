/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dbe60; name: FUN_005dbe60
 */


void FUN_005dbe60(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar4 = PTR_DAT_027141d8;
  puVar1 = PTR_DAT_027141d8 + 0xb0;
  *param_1 = (long)(PTR_DAT_027141d8 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)(puVar4 + 0xe8);
  param_1[3] = (long)(puVar4 + 0x118);
  puVar8 = (ulong *)(param_1 + 0x1a);
  uVar7 = *puVar8;
  plVar2 = param_1 + 0x1d;
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      plVar5 = *(long **)(*plVar2 + uVar9 * 8);
      if (plVar5 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar9 * 8) = 0;
        (**(code **)(*plVar5 + 0x18))();
        uVar7 = *puVar8;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar2 != 0)) {
    plVar5 = (long *)param_1[0x19];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *puVar8 = 0;
  param_1[0x1b] = 0;
  puVar3 = (ulong *)(param_1 + 0x24);
  param_1[0x21] = 0;
  plVar5 = param_1 + 0x27;
  *plVar2 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar7 = param_1[0x24];
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      plVar6 = *(long **)(*plVar5 + uVar9 * 8);
      if (plVar6 != (long *)0x0) {
        *(undefined8 *)(*plVar5 + uVar9 * 8) = 0;
        (**(code **)(*plVar6 + 0x18))();
        uVar7 = *puVar3;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (((*(byte *)(param_1 + 0x2b) & 1) == 0) && (*plVar5 != 0)) {
    plVar6 = (long *)param_1[0x23];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x48))
                (plVar6,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  *puVar3 = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  *plVar5 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_005dcac0(param_1);
  puVar1 = PTR_DAT_027141e0 + 0x10;
  param_1[0x22] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x2b) & 1) == 0) && (*plVar5 != 0)) {
    plVar6 = (long *)param_1[0x23];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x48))
                (plVar6,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  *puVar3 = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  *plVar5 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x18] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar2 != 0)) {
    plVar5 = (long *)param_1[0x19];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *puVar8 = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  *plVar2 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_005dc8a0(param_1);
  return;
}


