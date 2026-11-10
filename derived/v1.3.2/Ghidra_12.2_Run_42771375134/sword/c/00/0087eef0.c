/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087eef0; name: FUN_0087eef0
 */


void FUN_0087eef0(long param_1)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_008660d0(0x100);
  } while ((uVar1 & 7) == 0);
  if ((uVar1 & 0xf0) != 0) {
    uVar1 = uVar1 & 7;
  }
  FUN_00873b40(*(undefined8 *)(param_1 + 0x98),(uVar1 & 0xfffffff3 | uVar1 << 4) + 1);
  return;
}


