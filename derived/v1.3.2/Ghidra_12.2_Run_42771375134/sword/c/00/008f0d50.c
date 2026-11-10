/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f0d50; name: FUN_008f0d50
 */


void FUN_008f0d50(long *param_1,long param_2,long param_3)

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
  puVar1 = PTR_DAT_02717c68;
  param_1[0xb] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x48);
  lVar2 = FUN_009e4890(param_3,0);
  param_1[0xc] = lVar2;
  lVar2 = FUN_009e4890(param_3,1);
  param_1[0xd] = lVar2;
  lVar2 = FUN_009e4890(param_3,2);
  param_1[0xe] = lVar2;
  param_1[0xf] = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  lVar2 = FUN_009e4890(param_3,0xb);
  puVar1 = PTR_DAT_02717be8;
  param_1[0x16] = 0;
  param_1[0x14] = 0xf4b17a579f18960;
  param_1[0x15] = -0x7d5d4e8add6295a5;
  param_1[0x12] = 0;
  param_1[0x13] = (long)(puVar1 + 0x10);
  param_1[0x10] = lVar2;
  param_1[0x11] = param_2;
  *(undefined8 *)((long)param_1 + 0x145) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 1;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined2 *)((long)param_1 + 0x174) = 0x500;
  *(undefined1 *)((long)param_1 + 0x182) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x2f] = 0;
  *(byte *)((long)param_1 + 0x183) = *(byte *)((long)param_1 + 0x183) & 0xe0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x31,0,0x270);
}


