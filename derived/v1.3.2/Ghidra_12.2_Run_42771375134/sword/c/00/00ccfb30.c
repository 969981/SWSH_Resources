/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccfb30; name: FUN_00ccfb30
 */


void FUN_00ccfb30(long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0271c800;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0271c800 + 0x20);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0xa8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x130);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x1b8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  return;
}


