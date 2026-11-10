/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fd690; name: FUN_001fd690
 */


void FUN_001fd690(long param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(*(long *)(param_1 + 8) + 4);
    do {
      pfVar3[-1] = *param_2 + pfVar3[-1];
      *pfVar3 = param_2[1] + *pfVar3;
      uVar2 = uVar2 + 1;
      pfVar3[1] = param_2[2] + pfVar3[1];
      pfVar3 = pfVar3 + 4;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(*(long *)(param_1 + 0x18) + 0x10);
    do {
      pfVar3[-4] = *param_2 + pfVar3[-4];
      pfVar3[-3] = param_2[1] + pfVar3[-3];
      pfVar3[-2] = param_2[2] + pfVar3[-2];
      *pfVar3 = *param_2 + *pfVar3;
      pfVar3[1] = param_2[1] + pfVar3[1];
      uVar2 = uVar2 + 1;
      pfVar3[2] = param_2[2] + pfVar3[2];
      pfVar3 = pfVar3 + 8;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(*(long *)(param_1 + 0x28) + 0x14);
    do {
      pfVar3[-5] = *param_2 + pfVar3[-5];
      pfVar3[-4] = param_2[1] + pfVar3[-4];
      pfVar3[-3] = param_2[2] + pfVar3[-3];
      pfVar3[-1] = *param_2 + pfVar3[-1];
      *pfVar3 = param_2[1] + *pfVar3;
      pfVar3[1] = param_2[2] + pfVar3[1];
      pfVar3[3] = *param_2 + pfVar3[3];
      pfVar3[4] = param_2[1] + pfVar3[4];
      uVar2 = uVar2 + 1;
      pfVar3[5] = param_2[2] + pfVar3[5];
      pfVar3 = pfVar3 + 0xc;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(*(long *)(param_1 + 0x38) + 4);
    do {
      pfVar3[-1] = *param_2 + pfVar3[-1];
      *pfVar3 = param_2[1] + *pfVar3;
      uVar2 = uVar2 + 1;
      pfVar3[1] = param_2[2] + pfVar3[1];
      pfVar3 = pfVar3 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}


