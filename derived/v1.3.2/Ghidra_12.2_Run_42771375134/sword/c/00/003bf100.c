/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bf100; name: FUN_003bf100
 */


void FUN_003bf100(long *param_1,byte param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (((param_3 & 1) != 0) || (((*(uint *)(param_1 + 0x17) < 0xfffffffe ^ param_2) & 1) != 0)) {
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        FUN_003dd7e0(param_1[9],param_1);
      }
      uVar3 = *(uint *)((long)param_1 + 0x34);
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          uVar1 = uVar4 + 1;
          uVar2 = (uint)uVar1;
          if (uVar3 - 1 <= uVar1) {
            uVar2 = uVar3 - 1;
          }
          Hint_Prefetch(*(undefined8 *)(param_1[5] + (ulong)uVar2 * 8),0,0,0);
          plVar5 = *(long **)(param_1[5] + uVar4 * 8);
          if ((((*(char *)((long)plVar5 + 0x24) != '\0') &&
               (*(char *)((long)plVar5 + 0x24) != '\x02' &&
                (*(byte *)((long)plVar5 + 0x25) & 0x40) != 0)) &&
              (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,param_3), (uVar4 & 1) != 0)) &&
             (*(byte *)((long)plVar5 + 0x24) < 3)) {
            FUN_003ddb00(param_1[9],plVar5);
          }
          uVar4 = uVar1;
        } while (uVar3 != uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x003bf2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))(param_1);
      return;
    }
    if ((param_3 & 1) == 0) {
      FUN_003dd720(param_1[9],param_1);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar3 = *(uint *)((long)param_1 + 0x34);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        uVar1 = uVar4 + 1;
        uVar2 = (uint)uVar1;
        if (uVar3 - 1 <= uVar1) {
          uVar2 = uVar3 - 1;
        }
        Hint_Prefetch(*(undefined8 *)(param_1[5] + (ulong)uVar2 * 8),0,0,0);
        plVar5 = *(long **)(param_1[5] + uVar4 * 8);
        if ((((*(byte *)((long)plVar5 + 0x24) | 2) != 2 &&
              (*(byte *)((long)plVar5 + 0x25) & 0x40) == 0) &&
            (uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0), (uVar4 & 1) != 0)) &&
           (*(byte *)((long)plVar5 + 0x24) < 3)) {
          FUN_003ddaa0(param_1[9],plVar5);
        }
        uVar4 = uVar1;
      } while (uVar3 != uVar1);
    }
  }
  return;
}


