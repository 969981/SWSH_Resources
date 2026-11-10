/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4d50; name: FUN_004a4d50
 */


void FUN_004a4d50(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,long *param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (((((*param_5 != 0) || ((int)param_5[1] != 0)) || ((int)param_5[2] != 0)) ||
      (((char)param_5[3] != -1 || ((char)param_5[4] != -1)))) || (param_5[5] != 0)) {
    if (param_6 == (undefined8 *)0x0) {
      FUN_004a4f60(param_1,param_2,param_3,param_4);
      return;
    }
    FUN_004a5150(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  uVar7 = 1L << ((ulong)param_4 & 0x3f);
  lVar2 = *(long *)(param_3 + 8);
  lVar5 = *(long *)(lVar2 + 0x10);
  uVar1 = *(uint *)(lVar2 + 0x18);
  uVar3 = (ulong)uVar1;
  uVar4 = *(ulong *)(lVar2 + 8) & uVar7;
  if (param_6 == (undefined8 *)0x0) {
    if (uVar4 == 0) {
      if (uVar1 != 0) {
        lVar2 = uVar3 << 6;
        puVar6 = (undefined8 *)(lVar5 + 0x38);
        do {
          if ((puVar6[-1] & uVar7) != 0) {
            (**(code **)(*(long *)*puVar6 + 0x10))(param_1,param_2,(long *)*puVar6,param_4);
          }
          lVar2 = lVar2 + -0x40;
          puVar6 = puVar6 + 8;
        } while (lVar2 != 0);
      }
    }
    else if (uVar1 != 0) {
      lVar2 = uVar3 << 6;
      puVar6 = (undefined8 *)(lVar5 + 0x38);
      do {
        (**(code **)(*(long *)*puVar6 + 0x10))(param_1,param_2,(long *)*puVar6,param_4);
        lVar2 = lVar2 + -0x40;
        puVar6 = puVar6 + 8;
      } while (lVar2 != 0);
    }
  }
  else if (uVar4 == 0) {
    if (uVar1 != 0) {
      lVar2 = uVar3 << 6;
      do {
        if (((*(ulong *)(lVar5 + 0x30) & uVar7) != 0) &&
           (uVar3 = (**(code **)*param_6)(param_6,lVar5), (uVar3 & 1) == 0)) {
          (**(code **)(**(long **)(lVar5 + 0x38) + 0x10))
                    (param_1,param_2,*(long **)(lVar5 + 0x38),param_4);
        }
        lVar5 = lVar5 + 0x40;
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
  }
  else if (uVar1 != 0) {
    lVar2 = uVar3 << 6;
    do {
      uVar3 = (**(code **)*param_6)(param_6,lVar5);
      if ((uVar3 & 1) == 0) {
        (**(code **)(**(long **)(lVar5 + 0x38) + 0x10))
                  (param_1,param_2,*(long **)(lVar5 + 0x38),param_4);
      }
      lVar5 = lVar5 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  return;
}


