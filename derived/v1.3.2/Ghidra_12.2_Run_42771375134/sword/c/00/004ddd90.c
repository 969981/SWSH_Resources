/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ddd90; name: FUN_004ddd90
 */


undefined8 FUN_004ddd90(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((int)uVar1 == 1) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
  }
  return uVar1;
}


