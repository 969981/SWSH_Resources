/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8200; name: FUN_006f8200
 */


void FUN_006f8200(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
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
  puVar1 = PTR_DAT_027157c0 + 0x10;
  param_1[9] = (long)(PTR_DAT_027157c0 + 0x58);
  *param_1 = (long)puVar1;
  param_1[1] = lVar4;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  lVar2 = param_2[3];
  param_1[0xd] = param_2[2];
  param_1[0xe] = lVar2;
  param_1[0xb] = lVar3;
  param_1[0xc] = lVar4;
  lVar3 = param_2[4];
  lVar4 = param_2[5];
  lVar2 = param_2[7];
  param_1[0x11] = param_2[6];
  param_1[0x12] = lVar2;
  param_1[0xf] = lVar3;
  param_1[0x10] = lVar4;
  return;
}


