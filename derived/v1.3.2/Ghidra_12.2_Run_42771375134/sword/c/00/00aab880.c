/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aab880; name: FUN_00aab880
 */


void FUN_00aab880(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_02719768 + 0x198;
  puVar2 = PTR_DAT_02719768 + 0x1d8;
  *param_1 = (long)(PTR_DAT_02719768 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x72] != 0) {
    (**(code **)(*(long *)(param_1[0x72] + 0x48) + 0x18))();
    param_1[0x72] = 0;
  }
  lVar3 = param_1[0x5b];
  if (lVar3 != 0) {
    param_1[0x5c] = lVar3;
    (**(code **)(*(long *)param_1[0x5e] + 0x18))
              ((long *)param_1[0x5e],lVar3,param_1[0x5d] - lVar3,8);
  }
  lVar3 = param_1[0x55];
  if (lVar3 != 0) {
    param_1[0x56] = lVar3;
    (**(code **)(*(long *)param_1[0x58] + 0x18))
              ((long *)param_1[0x58],lVar3,param_1[0x57] - lVar3,8);
  }
  FUN_006c5c80(param_1 + 0x44);
  plVar5 = (long *)param_1[0x3d];
  param_1[0x3c] = (long)(PTR_DAT_02719770 + 0x10);
  if (plVar5 != (long *)0x0) {
    if ((long *)param_1[0x3e] == plVar5) {
      plVar4 = plVar5;
    }
    else {
      plVar4 = (long *)param_1[0x3e];
      do {
        plVar6 = plVar4 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar4[-1] = 0;
        }
        plVar4 = plVar6;
      } while (plVar5 != plVar6);
      plVar4 = (long *)param_1[0x3d];
    }
    param_1[0x3e] = (long)plVar5;
    (**(code **)(*(long *)param_1[0x40] + 0x18))
              ((long *)param_1[0x40],plVar4,param_1[0x3f] - (long)plVar4,8);
  }
  FUN_0070ec90(param_1);
  return;
}


