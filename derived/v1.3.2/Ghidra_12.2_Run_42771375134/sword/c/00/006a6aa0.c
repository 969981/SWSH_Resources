/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a6aa0; name: FUN_006a6aa0
 */


void FUN_006a6aa0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_027150f8 + 0x10);
  FUN_006a6ea0(param_1 + 0x14);
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    lVar1 = param_1[0xf];
    if (param_1[0xf] == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        if (*(long *)(lVar1 + -0x28) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x28) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x28) = 0;
        }
        lVar3 = lVar1 + -0x70;
        if (*(long *)(lVar1 + -0x48) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x48) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x48) = 0;
        }
        lVar1 = lVar3;
      } while (lVar2 != lVar3);
      lVar1 = param_1[0xe];
    }
    param_1[0xf] = lVar2;
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],lVar1,param_1[0x10] - lVar1,0x10);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    lVar1 = param_1[9];
    if (param_1[9] == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        if (*(long *)(lVar1 + -0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x10) = 0;
        }
        lVar3 = lVar1 + -0x58;
        if (*(long *)(lVar1 + -0x30) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x30) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x30) = 0;
        }
        lVar1 = lVar3;
      } while (lVar2 != lVar3);
      lVar1 = param_1[8];
    }
    param_1[9] = lVar2;
    (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],lVar1,param_1[10] - lVar1,8);
  }
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1[3];
  if (param_1[3] == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      if (*(long *)(lVar1 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x10) = 0;
      }
      lVar3 = lVar1 + -0x58;
      if (*(long *)(lVar1 + -0x30) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x30) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x30) = 0;
      }
      lVar1 = lVar3;
    } while (lVar2 != lVar3);
    lVar1 = param_1[2];
  }
  param_1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x006a6c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar1,param_1[4] - lVar1,8);
  return;
}


