/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f43960; name: FUN_00f43960
 */


int FUN_00f43960(float param_1,float param_2,float param_3,float param_4,long param_5,uint *param_6,
                uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (uint)((param_3 - *(float *)(param_5 + 0x270)) / *(float *)(param_5 + 0x280));
  uVar4 = (uint)((param_4 - *(float *)(param_5 + 0x274)) / *(float *)(param_5 + 0x284));
  uVar5 = (uVar5 | uVar5 << 8) & 0xff00ff;
  uVar4 = (uVar4 | uVar4 << 8) & 0xff00ff;
  uVar5 = (uVar5 | uVar5 << 4) & 0xf0f0f0f;
  uVar4 = (uVar4 | uVar4 << 4) & 0xf0f0f0f;
  uVar5 = (uVar5 | uVar5 << 2) & 0x33333333;
  uVar4 = (uVar4 | uVar4 << 2) & 0x33333333;
  uVar1 = *(uint *)(param_5 + 0x294);
  uVar5 = ((uVar4 | uVar4 << 1) & 0x55555555) << 1 | (uVar5 | uVar5 << 1) & 0x55555555;
  if (uVar1 == 0) {
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = (uint)((param_2 - *(float *)(param_5 + 0x274)) / *(float *)(param_5 + 0x284));
    uVar6 = (uint)((param_1 - *(float *)(param_5 + 0x270)) / *(float *)(param_5 + 0x280));
    uVar4 = (uVar4 | uVar4 << 8) & 0xff00ff;
    uVar6 = (uVar6 | uVar6 << 8) & 0xff00ff;
    uVar4 = (uVar4 | uVar4 << 4) & 0xf0f0f0f;
    uVar6 = (uVar6 | uVar6 << 4) & 0xf0f0f0f;
    uVar4 = (uVar4 | uVar4 << 2) & 0x33333333;
    uVar6 = (uVar6 | uVar6 << 2) & 0x33333333;
    uVar6 = (((uVar4 | uVar4 << 1) & 0x55555555) << 1 | (uVar6 | uVar6 << 1) & 0x55555555) ^ uVar5;
    if (uVar1 == 1) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = 0;
      uVar7 = 0;
      uVar8 = 2;
      do {
        uVar3 = uVar8 - 2;
        uVar2 = uVar8 & 0x1f;
        uVar8 = uVar8 + 4;
        if ((3 << (ulong)(uVar3 & 0x1f) & uVar6) != 0) {
          uVar4 = uVar7 + 1;
        }
        uVar7 = uVar7 + 2;
        if ((3 << (ulong)uVar2 & uVar6) != 0) {
          uVar4 = uVar7;
        }
      } while (uVar1 - (uVar1 & 1) != uVar7);
    }
    uVar8 = uVar4;
    if ((3 << (ulong)((uVar7 & 0xf) << 1) & uVar6) != 0) {
      uVar8 = uVar7 + 1;
    }
    if ((uVar1 & 1) != 0) {
      uVar4 = uVar8;
    }
    uVar1 = uVar4 << 1;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar4;
  }
  uVar5 = uVar5 >> (ulong)(uVar1 & 0x1f);
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar5;
  }
  return (*(int *)(param_5 + (ulong)(*(int *)(param_5 + 0x294) - uVar4) * 4 + 0x1b8) - 1U) / 3 +
         uVar5;
}


