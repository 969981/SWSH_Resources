/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3ca80; name: FUN_00c3ca80
 */


void FUN_00c3ca80(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulong param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  long *local_170;
  undefined4 local_168;
  long local_160;
  undefined *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long *local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  long local_c0;
  long local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  
  if ((*(long *)PTR_DAT_02716748 == 0) || (lVar4 = FUN_007ad1c0(), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x13) = param_4;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x10);
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    if ((param_5 & 0xff) != 0) {
      local_108 = (code *)((ulong)local_108 & 0xffffffffffffff00);
      local_110 = PTR_DAT_0271bbf0 + 0x10;
      local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,(int)(param_5 >> 0x20));
      local_100 = (undefined1 *)lVar4;
      FUN_00c1c150(&local_80,&local_110);
    }
    if ((param_7 & 0xff) != 0) {
      local_108 = (code *)((ulong)local_108 & 0xffffffffffffff00);
      uVar6 = (undefined4)(param_7 >> 0x20);
      local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,uVar6);
      local_110 = PTR_DAT_0271bbf0 + 0x10;
      if (local_78 == plStack_70) {
        local_100 = (undefined1 *)lVar4;
        FUN_00c1c150(&local_80,&local_110);
      }
      else {
        *local_78 = (long)(PTR_DAT_0271bbf8 + 0x10);
        *(undefined1 *)(local_78 + 1) = 0;
        local_78[2] = lVar4;
        *(undefined4 *)(local_78 + 3) = uVar6;
        *local_78 = (long)local_110;
        local_78 = local_78 + 4;
        local_100 = (undefined1 *)lVar4;
      }
    }
    (**(code **)(*param_1 + 0x10))(&local_88,param_1);
    lVar4 = local_88;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
    }
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_c0 = lVar4;
    local_110 = (undefined *)0x0;
    local_108 = (code *)0x0;
    local_f0 = param_1;
    uStack_e8 = param_5;
    local_e0 = param_6;
    uStack_d8 = param_7;
    local_d0 = param_8;
    local_c8 = param_3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar2 = local_88;
    local_110 = &LAB_00c3fd60;
    local_108 = FUN_00c3fe10;
    local_100 = &LAB_00c3fe50;
    local_f8 = &LAB_00c3fe90;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
    }
    local_180 = (undefined1 *)0x0;
    puStack_178 = (undefined1 *)0x0;
    local_160 = lVar2;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    local_170 = param_1;
    local_168 = param_4;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_190 = &LAB_00c3fed0;
    local_188 = FUN_00c3ff00;
    local_180 = &LAB_00c3ff40;
    puStack_178 = &LAB_00c3ff70;
    uVar5 = FUN_0122eb80(&local_80,&local_110,&local_190);
    pcVar1 = local_188;
    if (local_188 != (code *)0x0) {
      local_180 = (undefined1 *)0x0;
      puStack_178 = (undefined1 *)0x0;
      local_190 = (undefined1 *)0x0;
      local_188 = (code *)0x0;
      (*pcVar1)(&local_170);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    pcVar1 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar1)(&local_f0);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    puVar8 = *(undefined **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    if (puVar8 != (undefined *)0x0) {
      (**(code **)(*(long *)(puVar8 + 0x48) + 0x10))();
    }
    local_110 = puVar8;
    lVar4 = FUN_00fe2800(&local_110);
    FUN_012ae720(*(undefined8 *)(lVar4 + 0x80));
    if (local_110 != (undefined *)0x0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = (undefined *)0x0;
    }
    if ((uVar5 & 1) == 0) {
      param_2 = param_4;
    }
    *(undefined4 *)(param_1 + 0x13) = param_2;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    plVar3 = local_80;
    plVar7 = local_78;
    if (local_80 != (long *)0x0) {
      while (plVar7 != plVar3) {
        plVar7 = plVar7 + -4;
        (**(code **)*plVar7)(plVar7);
      }
      local_78 = plVar3;
      FUN_017cd7a0(local_80);
    }
  }
  return;
}


