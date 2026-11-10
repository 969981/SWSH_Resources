/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa550; name: FUN_008fa550
 */


undefined8 FUN_008fa550(long param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01') || (*(short *)(param_1 + 0x164) != 0)
     ) {
    uVar1 = FUN_009015a0(*(undefined8 *)(param_1 + (ulong)*(byte *)(param_1 + 0x174) * 8 + 0x198));
    return uVar1;
  }
  return 0;
}


