/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00181f80; name: FUN_00181f80
 */


byte FUN_00181f80(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x18);
  *(ushort *)(param_3 + 0x1c) = (ushort)bVar1;
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  return bVar1;
}


