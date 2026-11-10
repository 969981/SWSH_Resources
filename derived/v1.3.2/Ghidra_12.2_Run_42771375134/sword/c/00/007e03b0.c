/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e03b0; name: FUN_007e03b0
 */


void FUN_007e03b0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = std::__next_prime(3);
  uVar3 = param_1[1];
  if (uVar1 >= uVar3 && uVar1 != uVar3) {
    FUN_007f9c70(param_1,uVar1);
    return;
  }
  if (uVar1 < uVar3) {
    uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if (uVar3 < 3 || (uVar3 - 1 & uVar3) != 0) {
      uVar2 = std::__next_prime(uVar2);
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
    }
    else {
      if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
    }
    if (uVar2 < uVar3) {
      FUN_007f9c70(param_1);
      return;
    }
  }
  return;
}


