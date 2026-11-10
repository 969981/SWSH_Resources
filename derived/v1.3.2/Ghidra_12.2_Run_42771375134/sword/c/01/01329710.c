/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01329710; name: FUN_01329710
 */


void FUN_01329710(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02727fd0;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x48);
  lVar3 = *param_2;
  lVar4 = param_2[1];
  *(int *)(param_1 + 0xd) = (int)param_2[2];
  param_1[0xb] = lVar3;
  param_1[0xc] = lVar4;
  lVar3 = param_2[3];
  param_1[0xe] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar3 = param_2[5];
  param_1[0xf] = param_2[4];
  param_1[0x10] = lVar3;
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  lVar1 = param_2[9];
  param_1[0x13] = param_2[8];
  param_1[0x14] = lVar1;
  param_1[0x11] = lVar3;
  param_1[0x12] = lVar4;
  lVar5 = param_2[0xc];
  lVar3 = param_2[10];
  lVar4 = param_2[0xb];
  lVar1 = param_2[0xd];
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x15] = lVar3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(int *)(param_1 + 0x18) = (int)lVar1;
  param_1[0x16] = lVar4;
  param_1[0x17] = lVar5;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 1;
  return;
}


