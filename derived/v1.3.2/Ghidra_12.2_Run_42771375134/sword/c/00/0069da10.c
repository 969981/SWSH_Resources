/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069da10; name: FUN_0069da10
 */


void FUN_0069da10(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1[0x48] != 0) {
    (**(code **)(*(long *)(param_1[0x48] + 0x48) + 0x18))();
    param_1[0x48] = 0;
  }
  lVar2 = param_1[0x3d];
  if (lVar2 != 0) {
    param_1[0x3e] = lVar2;
    (**(code **)(*(long *)param_1[0x40] + 0x18))
              ((long *)param_1[0x40],lVar2,param_1[0x3f] - lVar2,8);
  }
  lVar2 = param_1[0x37];
  if (lVar2 != 0) {
    param_1[0x38] = lVar2;
    (**(code **)(*(long *)param_1[0x3a] + 0x18))
              ((long *)param_1[0x3a],lVar2,param_1[0x39] - lVar2,8);
  }
  lVar2 = param_1[0x31];
  if (lVar2 != 0) {
    param_1[0x32] = lVar2;
    (**(code **)(*(long *)param_1[0x34] + 0x18))
              ((long *)param_1[0x34],lVar2,param_1[0x33] - lVar2,8);
  }
  plVar4 = (long *)param_1[0x2b];
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)param_1[0x2c];
    if (plVar5 == plVar4) {
      plVar5 = plVar4;
    }
    else {
      do {
        plVar5 = plVar5 + -1;
        puVar1 = (undefined8 *)*plVar5;
        *plVar5 = 0;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)();
        }
      } while (plVar4 != plVar5);
      plVar5 = (long *)param_1[0x2b];
    }
    param_1[0x2c] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x2e] + 0x18))
              ((long *)param_1[0x2e],plVar5,param_1[0x2d] - (long)plVar5,8);
  }
  plVar4 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  lVar2 = param_1[0x26];
  param_1[0x26] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x27] + 0x18))
              ((long *)param_1[0x27],lVar2,param_1[0x28],param_1[0x29]);
  }
  lVar2 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x23] + 0x18))
              ((long *)param_1[0x23],lVar2,param_1[0x24],param_1[0x25]);
  }
  *param_1 = (long)(PTR_DAT_027150b8 + 0x10);
  if (param_1[1] == 0) {
    param_1[1] = 0;
    pcVar3 = (code *)param_1[0x13];
  }
  else {
    FUN_006e2100(param_1[1],param_1);
    lVar2 = param_1[1];
    param_1[1] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x13];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar3)(param_1 + 0x16);
  }
  pcVar3 = (code *)param_1[3];
  if (pcVar3 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar3)(param_1 + 6);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


