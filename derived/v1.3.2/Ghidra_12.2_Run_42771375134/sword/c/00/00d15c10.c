/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d15c10; name: FUN_00d15c10
 */


void FUN_00d15c10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00d67c40(*(undefined8 *)(param_1 + 0x2b8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_00d67bc0(*(undefined8 *)(param_1 + 0x2b8),param_2);
  return;
}


