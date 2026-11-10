/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01531dc0; name: FUN_01531dc0
 */


void FUN_01531dc0(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_008664a0(*param_2,param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x310) = *param_3;
  *(undefined4 *)(param_1 + 0x314) = param_3[1];
  return;
}


