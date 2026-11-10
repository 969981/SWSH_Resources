/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e58d0; name: FUN_008e58d0
 */


bool FUN_008e58d0(long param_1)

{
  long lVar1;
  int iVar2;
  
  if ((*(ushort *)(param_1 + 0x87) >> 9 & 1) != 0) {
    return true;
  }
  lVar1 = 0x70;
  if ((*(ushort *)(param_1 + 0x87) & 0x20) != 0) {
    lVar1 = 0x2a0;
  }
  iVar2 = FUN_008ec470(*(undefined2 *)(param_1 + lVar1),*(undefined1 *)(param_1 + 0x33d),0x35);
  return iVar2 == 0;
}


