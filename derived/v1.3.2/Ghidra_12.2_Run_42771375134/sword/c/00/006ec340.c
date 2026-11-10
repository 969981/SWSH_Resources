/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ec340; name: FUN_006ec340
 */


void FUN_006ec340(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
  puVar1 = PTR_DAT_02715518;
  *param_1 = (long)(PTR_DAT_02715518 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x50);
  FUN_006f6640(param_1 + 0xb);
  FUN_006f6640(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  FUN_006f66d0(param_1 + 0xb,0x800,param_2,param_3,param_4);
  FUN_006f66d0(param_1 + 0x19,0x800,param_2,param_3,param_4);
  puVar1 = PTR_DAT_027156a8 + 0x50;
  *param_1 = (long)(PTR_DAT_027156a8 + 0x10);
  param_1[9] = (long)puVar1;
  return;
}


