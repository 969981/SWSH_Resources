/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c08b0; name: FUN_003c08b0
 */


undefined8 FUN_003c08b0(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ushort uVar6;
  long *plVar7;
  
  uVar6 = *(ushort *)((long)param_1 + 0xb4);
  if ((uVar6 >> 10 & 1) == 0) {
    uVar4 = 0;
    if ((uVar6 >> 9 & 1) == 0) {
      uVar6 = uVar6 & 0xfffb | 0x200;
    }
    else {
      uVar6 = uVar6 & 63999 | 0x400;
    }
    *(ushort *)((long)param_1 + 0xb4) = uVar6;
  }
  else {
    *(ushort *)((long)param_1 + 0xb4) = uVar6 & 0xfbff;
    *(undefined4 *)(param_1[10] + 0x9c) = 0;
    if (param_1[0x18] == 0) {
      FUN_00113e30(*(undefined8 *)(param_1[9] + 0x748),(int)param_1[0x16]);
    }
    FUN_00113e70(*(undefined8 *)(param_1[9] + 0x748),(int)param_1[0x16]);
    if (*(uint *)(param_1 + 0x17) < 0xfffffffe) {
      FUN_003dd7e0(param_1[9],param_1);
      uVar3 = *(uint *)((long)param_1 + 0x34);
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          uVar1 = uVar5 + 1;
          uVar2 = (uint)uVar1;
          if (uVar3 - 1 <= uVar1) {
            uVar2 = uVar3 - 1;
          }
          Hint_Prefetch(*(undefined8 *)(param_1[5] + (ulong)uVar2 * 8),0,0,0);
          plVar7 = *(long **)(param_1[5] + uVar5 * 8);
          if ((((*(char *)((long)plVar7 + 0x24) != '\0') &&
               (*(char *)((long)plVar7 + 0x24) != '\x02' &&
                (*(byte *)((long)plVar7 + 0x25) & 0x40) != 0)) &&
              (uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,0), (uVar5 & 1) != 0)) &&
             (*(byte *)((long)plVar7 + 0x24) < 3)) {
            FUN_003ddb00(param_1[9],plVar7);
          }
          uVar5 = uVar1;
        } while (uVar3 != uVar1);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    uVar4 = 1;
  }
  return uVar4;
}


