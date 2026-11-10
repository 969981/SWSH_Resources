/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc5ef0; name: FUN_00bc5ef0
 */


undefined8 FUN_00bc5ef0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00bd3220(*(undefined8 *)(param_1 + 0x5f0));
  if ((uVar1 & 1) == 0) {
    FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),3,0);
    return 1;
  }
  return 0;
}


