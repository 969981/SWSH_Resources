/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c57340; name: FUN_00c57340
 */


void FUN_00c57340(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
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
  puVar2 = PTR_DAT_0271be20;
  *param_1 = (long)(PTR_DAT_0271be20 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x48);
  FUN_00c57500(param_1 + 0xb);
  param_1[0x709] = 0;
  param_1[0x708] = 0;
  param_1[0x707] = 0;
  param_1[0x706] = 0;
  FUN_00c63730(param_1 + 0xb,param_2);
  plVar5 = *(long **)(*(long *)PTR_DAT_027108e0 + 8);
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x48,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_00c62d70(lVar3,plVar5);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = param_1[0x706];
  param_1[0x706] = lVar3;
  if (lVar4 != 0) {
    FUN_00c631d0(lVar4);
    (**(code **)(*(long *)param_1[0x707] + 0x18))
              ((long *)param_1[0x707],lVar4,param_1[0x708],param_1[0x709]);
  }
  param_1[0x707] = (long)plVar5;
  param_1[0x708] = 0x48;
  param_1[0x709] = 8;
  return;
}


