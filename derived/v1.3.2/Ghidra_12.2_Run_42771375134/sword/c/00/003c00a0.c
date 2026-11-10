/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c00a0; name: FUN_003c00a0
 */


void FUN_003c00a0(float param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2[0x18] != 0) {
    FUN_003bc540();
    return;
  }
  lVar5 = param_2[10];
  if (((*(byte *)(lVar5 + 0x2c) & 1) == 0) && (*(float *)(lVar5 + 0x9c) < param_1)) {
    *(float *)(lVar5 + 0x9c) = param_1;
    (**(code **)(**(long **)(param_2[9] + 0x760) + 0x30))
              (*(long **)(param_2[9] + 0x760),param_2 + 0xc,*(uint *)(param_2 + 0x16) >> 6);
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
          plVar6 = *(long **)(param_2[5] + uVar4 * 8);
          if ((((*(byte *)((long)plVar6 + 0x24) | 2) != 2 &&
                (*(byte *)((long)plVar6 + 0x25) & 0x40) == 0) &&
              (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0), (uVar4 & 1) != 0)) &&
             (*(byte *)((long)plVar6 + 0x24) < 3)) {
            FUN_003ddaa0(param_2[9],plVar6);
          }
          uVar4 = uVar1;
        } while (uVar3 != uVar1);
      }
    }
    FUN_00113df0(*(undefined8 *)(param_2[9] + 0x748),(int)param_2[0x16]);
    *(ushort *)((long)param_2 + 0x7c) = *(ushort *)((long)param_2 + 0x7c) & 0xfffe;
  }
  return;
}


