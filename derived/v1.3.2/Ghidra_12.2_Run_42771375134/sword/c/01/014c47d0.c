/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c47d0; name: FUN_014c47d0
 */


void FUN_014c47d0(long *param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
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
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar4 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_0272a368 + 0x10;
  param_1[9] = (long)(PTR_DAT_0272a368 + 0x48);
  *param_1 = (long)puVar1;
  param_1[1] = lVar4;
  FUN_01992f10(param_1 + 0x2e27);
  *(undefined1 *)(param_1 + 0x3200) = 0;
  param_1[0x3202] = (long)param_2;
  param_1[0x3203] = 0x1fffffffffffffff;
  param_1[0x3208] = 0;
  param_1[0x320a] = (long)param_2;
  param_1[0x320b] = 0x1fffffffffffffff;
  param_1[0x3210] = 0;
  param_1[0x3214] = 0;
  param_1[0x3213] = 0;
  param_1[0x3212] = 0;
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,8,8);
  FUN_014c5060(param_1 + 0x320a,uVar3,1,param_1[0x3212] + param_1[0x3213] * 8,0,0);
  param_1[0x3216] = 0;
  FUN_01992ca0(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x2d21) = *param_3;
  *(undefined4 *)(param_1 + 0x2d0e) = 0;
  *(undefined4 *)(param_1 + 0xb) = param_3[1];
  *(undefined4 *)((long)param_1 + 0x5c) = param_3[2];
  param_1[0x2d20] = (long)(int)param_3[3];
  *(undefined8 *)((long)param_1 + 0x168ec) = 0;
  *(undefined8 *)((long)param_1 + 0x168e4) = 0;
  *(undefined8 *)((long)param_1 + 0x168dc) = 0;
  *(undefined8 *)((long)param_1 + 0x168d4) = 0;
  *(undefined8 *)((long)param_1 + 0x168cc) = 0;
  *(undefined8 *)((long)param_1 + 0x168c4) = 0;
  *(undefined8 *)((long)param_1 + 0x168bc) = 0;
  *(undefined8 *)((long)param_1 + 0x168b4) = 0;
  *(undefined8 *)((long)param_1 + 0x168ac) = 0;
  *(undefined8 *)((long)param_1 + 0x168a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1689c) = 0;
  *(undefined8 *)((long)param_1 + 0x16894) = 0;
  *(undefined8 *)((long)param_1 + 0x1688c) = 0;
  *(undefined8 *)((long)param_1 + 0x16884) = 0;
  *(undefined8 *)((long)param_1 + 0x1687c) = 0;
  *(undefined8 *)((long)param_1 + 0x16874) = 0;
  return;
}


