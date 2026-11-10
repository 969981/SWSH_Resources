/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb4b50; name: FUN_00cb4b50
 */


void FUN_00cb4b50(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0271c5d8 + 0x10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)puVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_027194a8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[2] = (long)(puVar1 + 0x10);
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_00cb4bc8;
  }
  lVar2 = FUN_0075ecb0();
LAB_00cb4bc8:
  param_1[0x29] = lVar2;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[0x2f] = lVar2;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}


