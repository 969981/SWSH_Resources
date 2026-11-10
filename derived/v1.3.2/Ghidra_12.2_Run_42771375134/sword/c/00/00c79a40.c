/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c79a40; name: FUN_00c79a40
 */


void FUN_00c79a40(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *local_48;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_0271c358;
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
  param_1[0xc] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x48);
  plVar5 = param_1 + 0xb;
  *plVar5 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xa0,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  local_48 = param_1;
  (**(code **)(param_1[9] + 0x10))();
  FUN_00c7a750(lVar3,&local_48,param_2,param_3,param_4);
  if (local_48 != (long *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
    local_48 = (long *)0x0;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *plVar5;
  *plVar5 = lVar3;
  if (lVar4 != 0) {
    FUN_00c7ab20(lVar4);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar4,param_1[0xd],param_1[0xe]);
  }
  param_1[0xc] = (long)param_2;
  param_1[0xd] = 0xa0;
  param_1[0xe] = 8;
  return;
}


