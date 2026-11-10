/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dcdc0; name: FUN_005dcdc0
 */


void FUN_005dcdc0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_027141f0 + 0xa0;
  puVar2 = PTR_DAT_027141f0 + 0xd8;
  puVar3 = PTR_DAT_027141f0 + 0x108;
  *param_1 = (long)(PTR_DAT_027141f0 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)puVar3;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))();
    param_1[0x18] = 0;
  }
  puVar7 = (ulong *)(param_1 + 0x1b);
  uVar6 = *puVar7;
  plVar4 = param_1 + 0x1e;
  if (uVar6 != 0) {
    uVar8 = 0;
    do {
      plVar5 = *(long **)(*plVar4 + uVar8 * 8);
      if (plVar5 != (long *)0x0) {
        *(undefined8 *)(*plVar4 + uVar8 * 8) = 0;
        (**(code **)(*plVar5 + 0x18))();
        uVar6 = *puVar7;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (*plVar4 != 0)) {
    plVar5 = (long *)param_1[0x1a];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar7 = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  *plVar4 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_005dcac0(param_1);
  param_1[0x19] = (long)(PTR_DAT_027141e0 + 0x10);
  if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (*plVar4 != 0)) {
    plVar5 = (long *)param_1[0x1a];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar7 = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  *plVar4 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_005dc8a0(param_1);
  return;
}


