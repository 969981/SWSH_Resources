/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5330; name: FUN_008d5330
 */


void FUN_008d5330(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
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
  puVar1 = PTR_DAT_02717be0;
  param_1[0xd] = param_4;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_5;
  param_1[9] = (long)(puVar1 + 0x48);
  *(undefined1 *)(param_1 + 0xe) = 5;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x52] = (long)(PTR_DAT_02717be8 + 0x10);
  param_1[0x53] = 0xf4b17a579f18960;
  param_1[0x54] = -0x7d5d4e8add6295a5;
  param_1[0x55] = 0;
  FUN_008ed590(param_1 + 0x52,param_6);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x15,0,0x1e0);
}


