/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dd5b0; name: FUN_007dd5b0
 */


void FUN_007dd5b0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
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
  plVar3 = (long *)0x0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x80) == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = *(long **)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = (long)plVar3;
  *PTR_DAT_02716dd8 = 1;
  puVar1 = PTR_DAT_02716de0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = (long)(puVar1 + 0x40);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xe] = (long)plVar3;
  param_1[0xf] = 0x7ffffffffffffff;
  param_1[0x16] = (long)plVar3;
  param_1[0x17] = 0x7ffffffffffffff;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0xa0,8);
  FUN_007ddd80(param_1 + 0x16,uVar4,5,param_1[0x1e] + param_1[0x1f] * 0x20,0,0);
  return;
}


