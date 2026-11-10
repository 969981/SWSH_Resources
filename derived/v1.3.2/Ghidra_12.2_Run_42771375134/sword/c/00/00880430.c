/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880430; name: FUN_00880430
 */


void FUN_00880430(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *local_180;
  long local_178;
  long local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_0087ff80(local_68,param_2);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_168 = (code *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_180 = PTR_DAT_02710ac8 + 0x10;
  local_170 = 0;
  lVar4 = FUN_00866030();
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,0,local_68,0,*(undefined8 *)(lVar4 + 0x290)
               ,0);
  local_178 = local_38;
  if (local_38 != 0) {
    plVar7 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((local_170 != 0) || (local_f0 != 0)) {
      FUN_006e1e70(local_38,&local_180,1);
    }
    FUN_006e1be0(local_38);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (*(long *)(local_178 + 0x180) < 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(local_178 + 0x180) != 0) {
    puVar5 = *(undefined8 **)(local_178 + 400);
    *param_1 = *puVar5;
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar6 = puVar5[4];
    param_1[3] = puVar5[3];
    param_1[4] = uVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    uVar6 = puVar5[7];
    uVar1 = puVar5[5];
    uVar2 = puVar5[6];
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(puVar5 + 8);
    param_1[6] = uVar2;
    param_1[7] = uVar6;
    param_1[5] = uVar1;
  }
  local_180 = PTR_DAT_02710a48 + 0x10;
  if (local_178 == 0) {
    local_178 = 0;
    pcVar3 = local_e8;
  }
  else {
    FUN_006e2100(local_178,&local_180);
    lVar4 = local_178;
    local_178 = 0;
    pcVar3 = local_e8;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      pcVar3 = local_e8;
    }
  }
  local_e8 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(&local_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(&local_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  if ((local_50 != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


