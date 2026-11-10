/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d68e0; name: FUN_006d68e0
 */


void FUN_006d68e0(long *param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
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
  puVar1 = PTR_DAT_02715380 + 0x60;
  puVar2 = PTR_DAT_02715380 + 0x90;
  *param_1 = (long)(PTR_DAT_02715380 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)puVar1;
  param_1[0xb] = (long)puVar2;
  FUN_006cee40(param_1 + 0xc,param_2,param_3 & 1);
  return;
}


