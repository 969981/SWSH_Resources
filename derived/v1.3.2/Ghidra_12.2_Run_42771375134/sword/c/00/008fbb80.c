/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fbb80; name: FUN_008fbb80
 */


void FUN_008fbb80(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_02717ce0 + 0x48;
  *param_1 = (long)(PTR_DAT_02717ce0 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)puVar1;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_02717be8;
  param_1[0x27] = -0x7d5d4e8add6295a5;
  param_1[0x23] = -0x7d5d4e8add6295a5;
  param_1[0x24] = 0;
  *(undefined1 *)((long)param_1 + 0x262) = 0;
  param_1[0x21] = (long)(puVar1 + 0x10);
  param_1[0x22] = 0xf4b17a579f18960;
  param_1[0x25] = (long)(puVar1 + 0x10);
  param_1[0x26] = 0xf4b17a579f18960;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x28,0,0x118);
}


