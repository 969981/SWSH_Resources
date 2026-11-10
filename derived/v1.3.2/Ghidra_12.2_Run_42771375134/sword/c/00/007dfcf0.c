/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dfcf0; name: FUN_007dfcf0
 */


void FUN_007dfcf0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = std::__next_prime(3);
  uVar3 = param_1[0x1f];
  if (uVar3 < uVar1) {
LAB_007dfd80:
    FUN_007f8890(param_1 + 0x1e,uVar1);
  }
  else if (uVar1 < uVar3) {
    uVar2 = (ulong)((float)(ulong)param_1[0x21] / *(float *)(param_1 + 0x22));
    if (uVar3 < 3 || (uVar3 - 1 & uVar3) != 0) {
      uVar2 = std::__next_prime(uVar2);
LAB_007dfdf4:
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
    }
    else {
      if (uVar2 < 2) goto LAB_007dfdf4;
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
    }
    uVar1 = uVar2;
    if (uVar1 < uVar3) goto LAB_007dfd80;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar1 = std::__next_prime(3);
  uVar3 = param_1[0x24];
  if (!(uVar3 <= uVar1 && uVar1 != uVar3)) {
    if (uVar3 <= uVar1) goto LAB_007dfecc;
    uVar2 = (ulong)((float)(ulong)param_1[0x26] / *(float *)(param_1 + 0x27));
    if (uVar3 < 3 || (uVar3 - 1 & uVar3) != 0) {
      uVar2 = std::__next_prime(uVar2);
LAB_007dfeb4:
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
    }
    else {
      if (uVar2 < 2) goto LAB_007dfeb4;
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
    }
    uVar1 = uVar2;
    if (uVar3 <= uVar1) goto LAB_007dfecc;
  }
  FUN_007f99e0(param_1 + 0x23,uVar1);
LAB_007dfecc:
  param_1[0x28] = param_1 + 0x29;
  param_1[0x29] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x2a] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return;
}


