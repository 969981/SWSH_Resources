/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c0d10; name: FUN_003c0d10
 */


void FUN_003c0d10(undefined4 param_1,long *param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  param_2[0x18] = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x16) = 0xffffffc1;
  }
  else {
    param_5 = *(uint *)(param_3 + 0x48) & 0xffffffc0 | param_5;
    lVar5 = param_2[10];
    *(uint *)(param_2 + 0x16) = param_5;
    *(undefined4 *)(lVar5 + 0x9c) = param_1;
    if ((*(byte *)(lVar5 + 0x2c) >> 5 & 1) != 0) {
      lVar5 = param_2[9];
      FUN_00190b50(lVar5 + 0x1f80,(param_5 >> 6) + 1);
      lVar5 = *(long *)(lVar5 + 0x1f80);
      lVar6 = (ulong)(param_5 >> 0xb) * 4;
      *(uint *)(lVar5 + lVar6) = *(uint *)(lVar5 + lVar6) | 1 << (ulong)(param_5 >> 6 & 0x1f);
    }
    if ((param_4 & 1) == 0) {
      if (0xfffffffd < *(uint *)(param_2 + 0x17)) {
        FUN_003dd720(param_2[9],param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar3 = *(uint *)((long)param_2 + 0x34);
        if (uVar3 != 0) {
          uVar4 = 0;
          do {
            uVar1 = uVar4 + 1;
            uVar2 = (uint)uVar1;
            if (uVar3 - 1 <= uVar1) {
              uVar2 = uVar3 - 1;
            }
            Hint_Prefetch(*(undefined8 *)(param_2[5] + (ulong)uVar2 * 8),0,0,0);
            plVar7 = *(long **)(param_2[5] + uVar4 * 8);
            if ((((*(byte *)((long)plVar7 + 0x24) | 2) != 2 &&
                  (*(byte *)((long)plVar7 + 0x25) & 0x40) == 0) &&
                (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0), (uVar4 & 1) != 0)) &&
               (*(byte *)((long)plVar7 + 0x24) < 3)) {
              FUN_003ddaa0(param_2[9],plVar7);
            }
            uVar4 = uVar1;
          } while (uVar3 != uVar1);
        }
      }
      FUN_00113df0(*(undefined8 *)(param_2[9] + 0x748),(int)param_2[0x16]);
      return;
    }
    if (param_2[0x18] == 0) {
      FUN_00113e30(*(undefined8 *)(param_2[9] + 0x748),(int)param_2[0x16]);
    }
    FUN_00113e70(*(undefined8 *)(param_2[9] + 0x748),(int)param_2[0x16]);
    if (*(uint *)(param_2 + 0x17) < 0xfffffffe) {
      FUN_003dd7e0(param_2[9],param_2);
      uVar3 = *(uint *)((long)param_2 + 0x34);
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          uVar1 = uVar4 + 1;
          uVar2 = (uint)uVar1;
          if (uVar3 - 1 <= uVar1) {
            uVar2 = uVar3 - 1;
          }
          Hint_Prefetch(*(undefined8 *)(param_2[5] + (ulong)uVar2 * 8),0,0,0);
          plVar7 = *(long **)(param_2[5] + uVar4 * 8);
          if (((*(char *)((long)plVar7 + 0x24) != '\0') &&
              (*(char *)((long)plVar7 + 0x24) != '\x02' &&
               (*(byte *)((long)plVar7 + 0x25) & 0x40) != 0)) &&
             ((uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,0), (uVar4 & 1) != 0 &&
              (*(byte *)((long)plVar7 + 0x24) < 3)))) {
            FUN_003ddb00(param_2[9],plVar7);
          }
          uVar4 = uVar1;
        } while (uVar3 != uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x003c0e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2);
      return;
    }
  }
  return;
}


