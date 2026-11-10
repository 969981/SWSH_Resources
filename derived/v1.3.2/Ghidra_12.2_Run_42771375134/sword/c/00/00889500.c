/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889500; name: FUN_00889500
 */


void FUN_00889500(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined8 local_c2;
  undefined4 local_ba;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ae;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar1 = FUN_0087f070(param_3);
  uVar2 = FUN_0087f070(param_4);
  local_78 = param_3;
  uStack_70 = param_4;
  iVar3 = FUN_0087ccf0(param_3);
  FUN_0087ccf0(param_4);
  if (iVar3 == 1) {
    uVar7 = param_3;
    uVar9 = param_4;
    local_78 = param_4;
    uStack_70 = param_3;
  }
  else {
    uVar7 = param_4;
    uVar9 = param_3;
  }
  FUN_0087ccf0(uVar9);
  iVar3 = FUN_0087ccf0(uVar7);
  if (iVar3 == 0) {
    uVar8 = uVar9;
    local_78 = uVar7;
    uStack_70 = uVar9;
  }
  else {
    uVar8 = uVar7;
    uVar7 = uVar9;
  }
  iVar3 = FUN_008783b0(uVar7);
  iVar4 = FUN_0087ccf0(uVar8);
  if ((iVar3 == 0x84) && (iVar4 == 2)) {
    local_78 = uVar8;
    uStack_70 = uVar7;
  }
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0x3ffffffff;
  local_d0 = 899;
  local_cc = 0xffff00ff00010000;
  local_90 = 0;
  uStack_88 = 0;
  local_c4 = 0x1ff;
  local_b4 = 0xffff;
  local_ae = 0x1000100;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0xffffffffffffffff;
  local_b0 = 0;
  local_ba = 0xffffffff;
  local_c2 = 0xffffffffffffffff;
  local_80 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_00889770(param_2,&local_f8,&local_78,param_5);
  FUN_0087f0c0(param_3,uVar1 & 1);
  FUN_0087f0c0(param_4,uVar2 & 1);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00877f40(lVar6,param_2,&local_f8);
  *(long **)(lVar6 + 8) = param_2;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0xb8;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  *param_1 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_00889e40(param_2,lVar6,&local_f8);
  return;
}


