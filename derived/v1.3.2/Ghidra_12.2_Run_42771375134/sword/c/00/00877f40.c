/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877f40; name: FUN_00877f40
 */


void FUN_00877f40(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
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
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_027173d0;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[9] = (long)(puVar2 + 0x50);
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar7;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_00866660(&local_50,param_2,param_3);
  lVar5 = local_50;
  local_50 = 0;
  lVar7 = param_1[0xb];
  param_1[0xb] = lVar5;
  if (lVar7 == 0) {
    param_1[0xd] = local_40;
    param_1[0xe] = local_38;
    param_1[0xc] = (long)local_48;
    local_50 = 0;
  }
  else {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar7,param_1[0xd],param_1[0xe]);
    lVar5 = local_50;
    param_1[0xc] = (long)local_48;
    param_1[0xd] = local_40;
    param_1[0xe] = local_38;
    local_50 = 0;
    if (lVar5 != 0) {
      (**(code **)(*local_48 + 0x18))(local_48,lVar5,local_40,local_38);
    }
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  FUN_008678e0(lVar5);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  puVar8 = (undefined8 *)param_1[0x13];
  param_1[0x13] = lVar5;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],puVar8,param_1[0x15],param_1[0x16]);
    lVar5 = param_1[0x13];
  }
  param_1[0x14] = (long)param_2;
  param_1[0x15] = 0x20;
  param_1[0x16] = 8;
  FUN_008679a0(lVar5,param_1[0xb],0);
  FUN_00877e90(param_1);
  iVar3 = FUN_00868cc0(param_1[0x13]);
  uVar4 = FUN_0086b360(param_1[0x13]);
  if ((iVar3 != 0) && (uVar6 = FUN_00864990(iVar3,uVar4), (uVar6 & 1) == 0)) {
    FUN_0086eb40(param_1[0x13],1);
  }
  return;
}


