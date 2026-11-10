/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8b60; name: FUN_00ff8b60
 */


void FUN_00ff8b60(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_02723398 + 0x48;
  *param_1 = (long)(PTR_DAT_02723398 + 0x10);
  param_1[9] = (long)puVar1;
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  plVar3 = (long *)param_1[0xf];
  if (plVar3 != (long *)0x0) {
    if ((long *)param_1[0x10] == plVar3) {
      plVar2 = plVar3;
    }
    else {
      plVar2 = (long *)param_1[0x10];
      do {
        plVar4 = plVar2 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar4;
      } while (plVar3 != plVar4);
      plVar2 = (long *)param_1[0xf];
    }
    param_1[0x10] = (long)plVar3;
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],plVar2,param_1[0x11] - (long)plVar2,8);
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


