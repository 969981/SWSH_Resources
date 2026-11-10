/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dd5f0; name: FUN_005dd5f0
 */


void FUN_005dd5f0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_02714208;
  puVar1 = PTR_DAT_02714208 + 0xb0;
  *param_1 = (long)(PTR_DAT_02714208 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)(puVar3 + 0xe8);
  param_1[3] = (long)(puVar3 + 0x118);
  puVar6 = (ulong *)(param_1 + 0x19);
  uVar5 = *puVar6;
  plVar2 = param_1 + 0x1c;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      plVar4 = *(long **)(*plVar2 + uVar7 * 8);
      if (plVar4 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar7 * 8) = 0;
        (**(code **)(*plVar4 + 0x18))();
        uVar5 = *puVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (*plVar2 != 0)) {
    plVar4 = (long *)param_1[0x18];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *puVar6 = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  *plVar2 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_005dcac0(param_1);
  param_1[0x17] = (long)(PTR_DAT_027141b8 + 0x10);
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (*plVar2 != 0)) {
    plVar4 = (long *)param_1[0x18];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *puVar6 = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  *plVar2 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_005dc8a0(param_1);
  return;
}


