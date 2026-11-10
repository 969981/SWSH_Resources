/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb8fe0; name: FUN_00cb8fe0
 */


void FUN_00cb8fe0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[0x13];
  puVar1 = PTR_DAT_0271c5e8 + 0xa8;
  puVar2 = PTR_DAT_0271c5e8 + 0xe8;
  *param_1 = (long)(PTR_DAT_0271c5e8 + 0x10);
  param_1[0x13] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_02710808 + 0x10);
    if (plVar5[1] == 0) {
      plVar5[1] = 0;
      pcVar4 = (code *)plVar5[0x13];
    }
    else {
      FUN_006e2100(plVar5[1],plVar5);
      lVar3 = plVar5[1];
      plVar5[1] = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar4 = (code *)plVar5[0x13];
    }
    if (pcVar4 != (code *)0x0) {
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      (*pcVar4)(plVar5 + 0x16);
    }
    pcVar4 = (code *)plVar5[3];
    if (pcVar4 != (code *)0x0) {
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      (*pcVar4)(plVar5 + 6);
    }
    if (plVar5[1] != 0) {
      (**(code **)(*(long *)(plVar5[1] + 0x48) + 0x18))();
      plVar5[1] = 0;
    }
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],plVar5,param_1[0x15],param_1[0x16]);
  }
  puVar1 = PTR_DAT_0271c350 + 0xa8;
  puVar2 = PTR_DAT_0271c350 + 0xe8;
  *param_1 = (long)(PTR_DAT_0271c350 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


