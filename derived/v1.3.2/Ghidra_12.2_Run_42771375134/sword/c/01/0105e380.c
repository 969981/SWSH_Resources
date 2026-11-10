/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105e380; name: FUN_0105e380
 */


void FUN_0105e380(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[0x18];
  *param_1 = (long)(PTR_DAT_02723a88 + 0x10);
  param_1[0x18] = 0;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      if (plVar1[5] != 0) {
        (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
        plVar1[5] = 0;
      }
      (**(code **)(*(long *)plVar2[6] + 0x18))((long *)plVar2[6],plVar1,0x330,0x10);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],lVar3,plVar2[1] << 3,0x10);
    }
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],plVar2,param_1[0x1a],param_1[0x1b]);
  }
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      if (plVar1[5] != 0) {
        (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
        plVar1[5] = 0;
      }
      (**(code **)(*(long *)plVar2[6] + 0x18))((long *)plVar2[6],plVar1,0x150,8);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],lVar3,plVar2[1] << 3,8);
    }
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],plVar2,param_1[0x16],param_1[0x17]);
  }
  plVar2 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      if (plVar1[5] != 0) {
        (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
        plVar1[5] = 0;
      }
      (**(code **)(*(long *)plVar2[6] + 0x18))((long *)plVar2[6],plVar1,0x150,8);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],lVar3,plVar2[1] << 3,8);
    }
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],plVar2,param_1[0x12],param_1[0x13]);
  }
  lVar3 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    FUN_0105e7e0(param_1 + 0xd);
  }
  lVar3 = param_1[8];
  param_1[8] = 0;
  if (lVar3 != 0) {
    FUN_0105e6f0(param_1 + 9);
  }
  lVar3 = param_1[4];
  param_1[4] = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_0105e600(param_1 + 5);
  return;
}


