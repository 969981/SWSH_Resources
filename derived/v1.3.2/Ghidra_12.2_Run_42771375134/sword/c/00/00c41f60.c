/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c41f60; name: FUN_00c41f60
 */


void FUN_00c41f60(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  long local_138;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b8;
  long local_70 [2];
  
  if ((char)param_1[0x15] == '\0') {
    *(undefined4 *)(param_1 + 0x11) = param_4;
    return;
  }
  lVar2 = param_1[0x16];
  (**(code **)(*param_1 + 0x10))(local_70,param_1);
  lVar4 = local_70[0];
  if (local_70[0] == 0) {
    lVar8 = 0;
  }
  else {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    lVar8 = local_70[0];
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c41ffc;
    }
  }
  bVar1 = true;
LAB_00c41ffc:
  lVar5 = FUN_007ad1c0(*(undefined8 *)PTR_DAT_02716748);
  uVar7 = param_4;
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x10);
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    local_b8 = lVar4;
    local_d0 = param_1;
    uStack_c8 = param_5;
    local_c0 = param_3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_f0 = &LAB_00c44360;
    local_e8 = FUN_00c44490;
    local_e0 = &LAB_00c444d0;
    local_d8 = &LAB_00c44500;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_150 = param_1;
    uStack_148 = param_5;
    local_140 = param_3;
    local_138 = lVar8;
    if (!bVar1) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_170 = &LAB_00c44530;
    local_168 = FUN_00c44650;
    local_160 = &LAB_00c44690;
    puStack_158 = &LAB_00c446c0;
    uVar6 = FUN_01230520((int)lVar2,uVar9,&local_f0,&local_170);
    pcVar3 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar3)(&local_150);
    }
    pcVar3 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar3)(&local_d0);
    }
    uVar7 = param_2;
    if ((uVar6 & 1) == 0) {
      uVar7 = param_4;
    }
  }
  *(undefined4 *)(param_1 + 0x11) = uVar7;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


