/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaf9d0; name: FUN_00aaf9d0
 */


void FUN_00aaf9d0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_00aaf600();
  uVar1 = FUN_00895fd0(*(undefined8 *)(param_1 + 0x4b8),param_2);
  *(undefined4 *)(param_1 + 0x4d8) = uVar1;
  return;
}


