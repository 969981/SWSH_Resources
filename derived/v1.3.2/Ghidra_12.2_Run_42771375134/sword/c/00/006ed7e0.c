/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ed7e0; name: FUN_006ed7e0
 */


void FUN_006ed7e0(long *param_1,long *param_2,ulong param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
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
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_027156d0;
  puVar1 = PTR_DAT_027156d0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027156d0 + 0x10);
  param_1[1] = lVar5;
  param_1[0xb] = (long)puVar1;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar2 + 0x90);
  FUN_006f3dc0(param_1 + 0xd,param_2,0);
  puVar1 = PTR_DAT_027156d8;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[0xb] = (long)(puVar1 + 0xc0);
  FUN_0199e7d0(param_1 + 0x2d);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_0199bf50(&local_60);
  local_60 = CONCAT44(local_60._4_4_,param_4);
  lVar3 = FUN_0199e7b0(PTR_DAT_027155e8,&local_60);
  param_3 = -lVar3 & param_3;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_3,lVar3);
  lVar4 = param_1[0x29];
  param_1[0x29] = lVar5;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],lVar4,param_1[0x2b],param_1[0x2c]);
    lVar5 = param_1[0x29];
  }
  param_1[0x2a] = (long)param_2;
  param_1[0x2b] = param_3;
  param_1[0x2c] = lVar3;
  local_60 = CONCAT44((int)param_3,(undefined4)local_60);
  local_58 = lVar5;
  FUN_0199e800(param_1 + 0x2d,PTR_DAT_027155e8,&local_60);
  FUN_006f3fb0(param_1 + 0xd,param_3,0);
  return;
}


