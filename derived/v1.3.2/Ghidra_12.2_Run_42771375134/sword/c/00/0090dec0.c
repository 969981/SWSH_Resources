/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090dec0; name: FUN_0090dec0
 */


void FUN_0090dec0(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

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
  puVar1 = PTR_DAT_02717d58;
  *(undefined1 *)((long)param_1 + 0x54) = 0x31;
  param_1[9] = (long)(puVar1 + 0x48);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0xc4] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  FUN_008eb990(param_3);
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  FUN_0090dff0(param_1,param_6);
  FUN_0090e100(param_1,param_6);
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}


