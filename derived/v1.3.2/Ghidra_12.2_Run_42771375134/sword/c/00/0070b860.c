/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070b860; name: FUN_0070b860
 */


void FUN_0070b860(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[0x57];
  puVar1 = PTR_DAT_02715a00 + 0x68;
  puVar2 = PTR_DAT_02715a00 + 0xa8;
  *param_1 = (long)(PTR_DAT_02715a00 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0x58] == plVar4) {
      plVar3 = plVar4;
    }
    else {
      plVar3 = (long *)param_1[0x58];
      do {
        plVar5 = plVar3 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar5;
      } while (plVar4 != plVar5);
      plVar3 = (long *)param_1[0x57];
    }
    param_1[0x58] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x5a] + 0x18))
              ((long *)param_1[0x5a],plVar3,param_1[0x59] - (long)plVar3,8);
  }
  if (param_1[0x56] != 0) {
    (**(code **)(*(long *)(param_1[0x56] + 0x48) + 0x18))();
    param_1[0x56] = 0;
  }
  if (param_1[0x55] != 0) {
    (**(code **)(*(long *)(param_1[0x55] + 0x48) + 0x18))();
    param_1[0x55] = 0;
  }
  if (param_1[0x54] != 0) {
    (**(code **)(*(long *)(param_1[0x54] + 0x48) + 0x18))();
    param_1[0x54] = 0;
  }
  puVar1 = PTR_DAT_02715360 + 0x68;
  puVar2 = PTR_DAT_02715360 + 0xa8;
  *param_1 = (long)(PTR_DAT_02715360 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x52] != 0) {
    (**(code **)(*(long *)(param_1[0x52] + 0x48) + 0x18))();
    param_1[0x52] = 0;
  }
  FUN_006d0b20(param_1);
  return;
}


