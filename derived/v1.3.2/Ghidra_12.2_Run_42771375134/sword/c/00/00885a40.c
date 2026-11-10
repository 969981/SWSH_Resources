/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885a40; name: FUN_00885a40
 */


void FUN_00885a40(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  long *plVar5;
  ulong __n;
  size_t __n_00;
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
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_48;
  
  FUN_0087fe20(local_80);
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
  lVar3 = FUN_00866030();
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,local_80,0,*(undefined8 *)(lVar3 + 0x290)
               ,0);
  local_188 = local_48;
  if (local_48 != 0) {
    plVar5 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((local_180 != 0) || (local_100 != 0)) {
      FUN_006e1e70(local_48,&local_190,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  __n = *(ulong *)(local_188 + 0x180);
  if ((long)__n < 0) {
LAB_00885d4c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (__n != 0) {
    __n_00 = (__n / 0x104) * 0x104;
    if (__n != __n_00) goto LAB_00885d4c;
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,__n_00,2);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
    lVar4 = *(long *)(lVar3 + 0x80);
    *(long *)(lVar3 + 0x80) = lVar4 + 1;
    puVar2 = PTR_DAT_02717418;
    if (0x103 < __n) {
                    /* WARNING: Subroutine does not return */
      memset(__dest,0,__n_00);
    }
    *(long *)(lVar3 + 0x80) = lVar4;
    lVar3 = *(long *)puVar2;
    *(void **)puVar2 = __dest;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),lVar3,*(undefined8 *)(puVar2 + 0x10),
                 *(undefined8 *)(puVar2 + 0x18));
      __dest = *(void **)puVar2;
    }
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(long **)(puVar2 + 8) = param_1;
    *(size_t *)(puVar2 + 0x10) = __n_00;
    memcpy(__dest,*(void **)(local_188 + 400),__n);
  }
  local_190 = PTR_DAT_02710a48 + 0x10;
  if (local_188 == 0) {
    local_188 = 0;
    pcVar1 = local_f8;
  }
  else {
    FUN_006e2100(local_188,&local_190);
    lVar3 = local_188;
    local_188 = 0;
    pcVar1 = local_f8;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      pcVar1 = local_f8;
    }
  }
  local_f8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar1)(&local_e0);
  }
  pcVar1 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar1)(&local_160);
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


