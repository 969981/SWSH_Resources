/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a0730; name: FUN_005a0730
 */


void FUN_005a0730(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    uVar2 = uVar1 + *(long *)(uVar1 - 8) * 0xc;
    do {
      uVar2 = uVar2 - 0xc;
    } while (uVar1 <= uVar2);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[4] = 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


