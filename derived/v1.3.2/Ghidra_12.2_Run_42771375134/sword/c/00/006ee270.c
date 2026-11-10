/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ee270; name: FUN_006ee270
 */


void FUN_006ee270(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
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
  puVar2 = PTR_DAT_027156d0;
  puVar1 = PTR_DAT_027156d0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027156d0 + 0x10);
  param_1[1] = lVar4;
  param_1[0xb] = (long)puVar1;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar2 + 0x90);
  FUN_006f3dc0(param_1 + 0xd,param_2,0);
  puVar1 = PTR_DAT_02715700;
  param_1[0x29] = (long)param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[0xb] = (long)(puVar1 + 0xc0);
  if (param_3 != (long *)0x0) {
    (**(code **)(param_3[9] + 0x10))();
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = -1;
  param_1[0x2d] = 0;
  (**(code **)(*param_3 + 0x28))(&local_60,param_3,param_4,param_5);
  param_1[0x2a] = local_60;
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  param_1[0x2b] = local_58;
  param_1[0x2c] = local_50;
  param_1[0x2d] = local_48;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  FUN_006f6820(&local_60);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_006f3fb0(param_1 + 0xd,param_4,param_1[0x2c]);
  return;
}


