/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4130; name: FUN_007d4130
 */


void FUN_007d4130(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_02716d00 + 0x50;
  puVar2 = PTR_DAT_02716d00 + 0x68;
  puVar3 = PTR_DAT_02716d00 + 0x88;
  *param_1 = (long)(PTR_DAT_02716d00 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)puVar3;
  FUN_007d4350();
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x18))
              ((long *)param_1[0x2e],param_1[0x36],param_1[0x38] * 0x30,8);
  }
  plVar4 = (long *)param_1[0x34];
  if (param_1 + 0x30 == plVar4) {
    pcVar6 = *(code **)(*plVar4 + 0x20);
LAB_007d41b8:
    (*pcVar6)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar6 = *(code **)(*plVar4 + 0x28);
    goto LAB_007d41b8;
  }
  plVar4 = (long *)param_1[0x2c];
  if (param_1 + 0x28 == plVar4) {
    pcVar6 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_007d41e8;
    pcVar6 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar6)();
LAB_007d41e8:
  lVar7 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar7 != 0) {
    FUN_007d79a0(lVar7);
    (**(code **)(*(long *)param_1[0x23] + 0x18))
              ((long *)param_1[0x23],lVar7,param_1[0x24],param_1[0x25]);
  }
  lVar7 = param_1[0x1e];
  param_1[0x1e] = 0;
  if (lVar7 != 0) {
    FUN_007d29f0(lVar7);
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],lVar7,param_1[0x20],param_1[0x21]);
  }
  lVar7 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar7 != 0) {
    FUN_007d9cc0(lVar7);
    (**(code **)(*(long *)param_1[0x1b] + 0x18))
              ((long *)param_1[0x1b],lVar7,param_1[0x1c],param_1[0x1d]);
  }
  lVar7 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar7 != 0) {
    FUN_007cd940(lVar7);
    (**(code **)(*(long *)param_1[0x17] + 0x18))
              ((long *)param_1[0x17],lVar7,param_1[0x18],param_1[0x19]);
  }
  lVar7 = param_1[0xe];
  if (lVar7 != 0) {
    param_1[0xf] = lVar7;
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],lVar7,param_1[0x10] - lVar7,8);
  }
  plVar4 = (long *)param_1[8];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[9] == plVar4) {
      plVar5 = plVar4;
    }
    else {
      plVar5 = (long *)param_1[9];
      do {
        plVar8 = plVar5 + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar8;
      } while (plVar4 != plVar8);
      plVar5 = (long *)param_1[8];
    }
    param_1[9] = (long)plVar4;
    (**(code **)(*(long *)param_1[0xb] + 0x18))
              ((long *)param_1[0xb],plVar5,param_1[10] - (long)plVar5,8);
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
    param_1[7] = 0;
  }
  return;
}


