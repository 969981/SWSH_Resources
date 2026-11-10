/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bffa0; name: FUN_003bffa0
 */


void FUN_003bffa0(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(uint *)(param_1 + 0x17) < 0xfffffffe) {
    FUN_003dd7e0(param_1[9],param_1);
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
            (uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,0), (uVar4 & 1) != 0)) &&
           (*(byte *)((long)plVar5 + 0x24) < 3)) {
          FUN_003ddb00(param_1[9],plVar5);
        }
        uVar4 = uVar1;
      } while (uVar3 != uVar1);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  FUN_00113e70(*(undefined8 *)(param_1[9] + 0x748),(int)param_1[0x16]);
  *(ushort *)((long)param_1 + 0xb4) = *(ushort *)((long)param_1 + 0xb4) & 63999;
  return;
}


