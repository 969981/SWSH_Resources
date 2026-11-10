/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fa7f0; name: FUN_011fa7f0
 */


void FUN_011fa7f0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
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
  puVar2 = PTR_DAT_02725d98;
  puVar1 = PTR_DAT_02725d90;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar5;
  *puVar2 = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x40);
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_011fa600(param_1 + 0xb);
  param_1[0x1c] = (long)param_3;
  param_1[0x14] = (long)param_3;
  param_1[0x15] = 0xfffffffffffffff;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0xfffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  uVar4 = (**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  FUN_011fb2b0(param_1 + 0x1c,uVar4,8,param_1[0x24] + param_1[0x25] * 0x10,0,0);
  lVar3 = *param_2;
  param_1[0x28] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[0x29] = param_2[1];
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)param_3;
  *(undefined2 *)((long)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return;
}


