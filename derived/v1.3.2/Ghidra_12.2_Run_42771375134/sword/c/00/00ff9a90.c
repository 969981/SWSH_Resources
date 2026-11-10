/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff9a90; name: FUN_00ff9a90
 */


void FUN_00ff9a90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_027233b8 + 0xa8;
  puVar2 = PTR_DAT_027233b8 + 0xe8;
  *param_1 = (long)(PTR_DAT_027233b8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb8] != 0) {
    (**(code **)(*(long *)(param_1[0xb8] + 0x48) + 0x18))();
    param_1[0xb8] = 0;
  }
  plVar4 = (long *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)plVar4[3];
    *plVar4 = (long)(PTR_DAT_027233d0 + 0x10);
    if (plVar5 != (long *)0x0) {
      if ((long *)plVar4[4] == plVar5) {
        plVar3 = plVar5;
      }
      else {
        plVar3 = (long *)plVar4[4];
        do {
          plVar6 = plVar3 + -1;
          if (*plVar6 != 0) {
            (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
            plVar3[-1] = 0;
          }
          plVar3 = plVar6;
        } while (plVar5 != plVar6);
        plVar3 = (long *)plVar4[3];
      }
      plVar4[4] = (long)plVar5;
      (**(code **)(*(long *)plVar4[6] + 0x18))((long *)plVar4[6],plVar3,plVar4[5] - (long)plVar3,8);
    }
    if (plVar4[2] != 0) {
      (**(code **)(*(long *)(plVar4[2] + 0x48) + 0x18))();
      plVar4[2] = 0;
    }
    if (plVar4[1] != 0) {
      (**(code **)(*(long *)(plVar4[1] + 0x48) + 0x18))();
      plVar4[1] = 0;
    }
    (**(code **)(*(long *)param_1[0xb5] + 0x18))
              ((long *)param_1[0xb5],plVar4,param_1[0xb6],param_1[0xb7]);
  }
  FUN_00ff9cc0(param_1 + 0x20);
  if ((param_1[0x18] != 0) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  param_1[0x15] = 0;
  param_1[0x16] = -0x340d631b7bddd9bb;
  param_1[0x17] = (long)&DAT_01d38550;
  param_1[0x18] = 0;
  if (param_1[0x19] != 0) {
    (**(code **)(*(long *)(param_1[0x19] + 0x48) + 0x18))();
    param_1[0x19] = 0;
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((param_1[0x12] != 0) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = -0x340d631b7bddd9bb;
  param_1[0x11] = (long)&DAT_01d38550;
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
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


