/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c64f0; name: FUN_003c64f0
 */


void FUN_003c64f0(long param_1)

{
  long lVar1;
  
  FUN_003c6e50(param_1,1);
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  if ((~*(byte *)(*(long *)(param_1 + 0x28) + 0x88) & 6) == 0) {
    FUN_003dffd0(lVar1);
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    FUN_00113eb0(*(undefined8 *)(lVar1 + 0x748));
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_003ba5c0(*(undefined8 *)(param_1 + 8),param_1);
  FUN_003ba5c0(*(undefined8 *)(param_1 + 0x10),param_1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x80);
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x78) != 0) {
    FUN_003c0cc0();
  }
  if (lVar1 != 0) {
    FUN_003c0cc0(lVar1);
  }
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xbf;
  return;
}


