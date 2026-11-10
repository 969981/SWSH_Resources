/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01031710; name: FUN_01031710
 */


void FUN_01031710(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01031c90(*(undefined8 *)(param_1 + 0x60));
  if ((uVar1 & 1) != 0) {
    FUN_010312f0(param_1,0);
    *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x1a) = 1;
  }
  return;
}


