/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877a30; name: FUN_00877a30
 */


void FUN_00877a30(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long local_70;
  long *local_68;
  long local_60;
  long local_58;
  
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
  puVar2 = PTR_DAT_027173d0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x50);
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00866520(&local_70,param_2);
  lVar3 = local_70;
  local_70 = 0;
  lVar4 = *plVar6;
  *plVar6 = lVar3;
  if (lVar4 == 0) {
    param_1[0xd] = local_60;
    param_1[0xe] = local_58;
    param_1[0xc] = (long)local_68;
    local_70 = 0;
  }
  else {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar4,param_1[0xd],param_1[0xe]);
    lVar3 = local_70;
    param_1[0xc] = (long)local_68;
    param_1[0xd] = local_60;
    param_1[0xe] = local_58;
    local_70 = 0;
    if (lVar3 != 0) {
      (**(code **)(*local_68 + 0x18))(local_68,lVar3,local_60,local_58);
    }
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_008678e0(lVar3);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar5 = (undefined8 *)param_1[0x13];
  param_1[0x13] = lVar3;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],puVar5,param_1[0x15],param_1[0x16]);
    lVar3 = param_1[0x13];
  }
  param_1[0x14] = (long)param_2;
  param_1[0x15] = 0x20;
  param_1[0x16] = 8;
  FUN_00867920(lVar3,*plVar6,0);
  return;
}


