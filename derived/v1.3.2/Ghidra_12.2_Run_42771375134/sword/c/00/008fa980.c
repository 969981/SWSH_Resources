/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa980; name: FUN_008fa980
 */


undefined8 FUN_008fa980(long param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x198);
}


