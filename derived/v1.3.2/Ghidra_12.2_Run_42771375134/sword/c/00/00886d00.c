/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886d00; name: FUN_00886d00
 */


void FUN_00886d00(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  long local_38;
  
  if (*(int *)(param_1 + 8) != param_2) {
    FUN_0087fec0(local_70,param_2);
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
    lVar2 = FUN_00866030();
    FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,0,local_70,0,
                 *(undefined8 *)(lVar2 + 0x290),0);
    local_178 = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((local_170 != 0) || (local_f0 != 0)) {
        FUN_006e1e70(local_38,&local_180,1);
      }
      FUN_006e1be0(local_38);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lVar2 = local_178;
    if (*(long *)(local_178 + 0x180) < 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(local_178 + 0x180) != 0) {
      memcpy((void *)(param_1 + 0xc),*(void **)(local_178 + 400),0x194);
    }
    local_180 = PTR_DAT_02710a48;
    *(int *)(param_1 + 8) = param_2;
    local_180 = local_180 + 0x10;
    if (lVar2 == 0) {
      local_178 = 0;
      pcVar1 = local_e8;
    }
    else {
      FUN_006e2100(lVar2,&local_180);
      lVar2 = local_178;
      local_178 = 0;
      pcVar1 = local_e8;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        pcVar1 = local_e8;
      }
    }
    local_e8 = pcVar1;
    if (pcVar1 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar1)(&local_d0);
    }
    pcVar1 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar1)(&local_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
    if ((local_58 != 0) && (local_70[0] != 0)) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
    local_70[0] = 0;
    local_70[1] = 0xcbf29ce484222645;
    local_60 = &DAT_01d38550;
    local_58 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
  }
  return;
}


