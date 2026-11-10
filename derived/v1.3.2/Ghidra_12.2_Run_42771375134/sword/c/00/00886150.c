/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886150; name: FUN_00886150
 */


void FUN_00886150(long param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *local_190;
  long local_188;
  long local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
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
  long local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
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
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  if ((*(int *)(param_1 + 8) != param_2) || ((uint)*(ushort *)(param_1 + 0xc) != (param_3 & 0xffff))
     ) {
    FUN_0087f600(param_2,param_3);
    FUN_00880040(local_78);
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_178 = (code *)0x0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
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
    local_170 = 0;
    uStack_168 = 0;
    local_190 = PTR_DAT_02710ac8 + 0x10;
    local_180 = 0;
    lVar5 = FUN_00866030();
    FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,local_78,0,
                 *(undefined8 *)(lVar5 + 0x290),0);
    local_188 = local_48;
    if (local_48 != 0) {
      plVar8 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      if ((local_180 != 0) || (local_100 != 0)) {
        FUN_006e1e70(local_48,&local_190,1);
      }
      FUN_006e1be0(local_48);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (*(long *)(local_188 + 0x180) < 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(local_188 + 0x180) != 0) {
      puVar7 = *(undefined8 **)(local_188 + 400);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      *puVar6 = *puVar7;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[4];
      puVar6[3] = puVar7[3];
      puVar6[4] = uVar3;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      uVar1 = puVar7[5];
      uVar2 = puVar7[6];
      uVar3 = puVar7[8];
      puVar6[7] = puVar7[7];
      puVar6[8] = uVar3;
      puVar6[5] = uVar1;
      puVar6[6] = uVar2;
    }
    *(int *)(param_1 + 8) = param_2;
    local_190 = PTR_DAT_02710a48;
    *(short *)(param_1 + 0xc) = (short)param_3;
    local_190 = local_190 + 0x10;
    if (local_188 == 0) {
      local_188 = 0;
      pcVar4 = local_f8;
    }
    else {
      FUN_006e2100(local_188,&local_190);
      lVar5 = local_188;
      local_188 = 0;
      pcVar4 = local_f8;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
        pcVar4 = local_f8;
      }
    }
    local_f8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar4)(&local_e0);
    }
    pcVar4 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar4)(&local_160);
    }
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
      local_188 = 0;
    }
    if ((local_60 != 0) && (local_78[0] != 0)) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
    }
    local_78[0] = 0;
    local_78[1] = 0xcbf29ce484222645;
    local_68 = &DAT_01d38550;
    local_60 = 0;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  return;
}


