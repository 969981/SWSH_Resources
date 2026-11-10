/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01382ca0; name: FUN_01382ca0
 */


void FUN_01382ca0(float param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0.0) {
    uVar1 = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_2 + 0xfc) = 0;
    *(undefined4 *)(param_2 + 0xec) = uVar1;
    *(undefined4 *)(param_2 + 0xf0) = uVar1;
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_2 + 0xb0);
    *(float *)(param_2 + 0xf8) = param_1;
  }
  return;
}


