/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00549840; name: FUN_00549840
 */


void FUN_00549840(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = (long)(PTR_DAT_02713bc0 + 0x10);
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    uVar2 = uVar1 + *(long *)(uVar1 - 8) * 0x18;
    do {
      uVar2 = uVar2 - 0x18;
    } while (uVar1 <= uVar2);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,param_1[5] + -8);
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,param_1[6] + -8);
    param_1[6] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
    param_1[0xf] = 0;
  }
  FUN_00545e90(param_1);
  return;
}


