/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130b630; name: FUN_0130b630
 */


void FUN_0130b630(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  float fVar4;
  
  if (*(uint *)(param_1 + 0x4d4) != param_2) {
    *(uint *)(param_1 + 0x4d4) = param_2;
    if ((param_3 & 1) == 0) {
      if (*(float *)(param_1 + 0x4e0) == 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x4e8) * 8))
                                 (*(float *)(param_1 + 0x4e4) / *(float *)(param_1 + 0x4e0));
        fVar4 = *(float *)(param_1 + 0x4d8) +
                fVar4 * (*(float *)(param_1 + 0x4dc) - *(float *)(param_1 + 0x4d8));
      }
    }
    else {
      fVar4 = *(float *)(&DAT_0216c070 + (long)(int)param_2 * 4);
    }
    uVar3 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2;
    uVar1 = *(undefined4 *)(&DAT_0216c070 + uVar3);
    uVar2 = *(undefined4 *)(&DAT_0216c088 + uVar3);
    *(float *)(param_1 + 0x4d8) = fVar4;
    *(undefined4 *)(param_1 + 0x4dc) = uVar1;
    *(undefined4 *)(param_1 + 0x4e0) = uVar2;
    *(undefined8 *)(param_1 + 0x4e4) = 0x300000000;
  }
  return;
}


