/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7d20; name: FUN_004e7d20
 */


void FUN_004e7d20(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_004e4050();
    FUN_00404870(uVar1,*(undefined8 *)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


