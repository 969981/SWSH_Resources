/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e25e0; name: FUN_008e25e0
 */


void FUN_008e25e0(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + (param_2 & 0xff) * 0x1c + 0x2e0) == '\0') {
    lVar2 = param_1 + (param_2 & 0xff) * 0x1c;
    iVar1 = (uint)*(byte *)(lVar2 + 0x2cc) - (param_3 & 0xff);
    *(byte *)(lVar2 + 0x2cc) = (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    FUN_0087b5b0(*(undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}


