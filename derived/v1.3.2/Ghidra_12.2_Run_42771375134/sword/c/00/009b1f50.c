/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b1f50; name: FUN_009b1f50
 */


uint FUN_009b1f50(long param_1,char param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  string *this;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  string *psVar12;
  void *__dest;
  undefined8 *local_c0;
  ulong local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 auStack_98 [8];
  long *local_90;
  undefined8 *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  plVar9 = *(long **)(param_1 + 0x120);
  lVar5 = *(long *)(param_1 + 0x128);
  if ((lVar5 == 0) || ((char)plVar9[1] == param_2)) {
    plVar7 = plVar9;
  }
  else {
    lVar6 = lVar5 * 0x10;
    plVar8 = plVar9;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) goto LAB_009b20c8;
      plVar7 = plVar8 + 2;
      plVar1 = plVar8 + 3;
      plVar8 = plVar7;
    } while ((char)*plVar1 != param_2);
  }
  if (plVar7 == plVar9 + lVar5 * 2) {
LAB_009b20c8:
    uVar3 = 0;
    goto LAB_009b22e0;
  }
  local_68 = *plVar7;
  if (local_68 == 0) {
    uVar3 = 0;
    goto LAB_009b22e0;
  }
  plVar9 = *(long **)(param_1 + 0x80);
  local_90 = plVar9;
  puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  FUN_009bc810(puVar4);
  plVar7 = local_90;
  local_78 = 0x30;
  local_70 = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_a0 = puVar4;
  local_88 = puVar4;
  plStack_80 = plVar9;
  FUN_0075efb0(auStack_98,local_90,0,1);
  local_b8 = 0;
  local_b0 = (void *)0x0;
  psVar12 = *(string **)PTR_DAT_02716d10;
  local_c0 = (undefined8 *)0x0;
  if (0xffffffffffffffef < param_4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  puVar11 = local_a0 + 4;
  if (param_4 < 0x17) {
    local_c0 = (undefined8 *)(ulong)(byte)((int)param_4 << 1);
    __dest = (void *)((ulong)&local_c0 | 1);
    if (param_4 != 0) goto LAB_009b20fc;
  }
  else {
    uVar10 = param_4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar10);
    local_c0 = (undefined8 *)(uVar10 | 1);
    local_b8 = param_4;
    local_b0 = __dest;
LAB_009b20fc:
    memcpy(__dest,param_3,param_4);
  }
  *(undefined1 *)((long)__dest + param_4) = 0;
  this = (string *)*puVar11;
  if (this == psVar12) {
    FUN_009b58d0(puVar11);
  }
  else {
    std::string::operator=(this,(string *)&local_c0);
  }
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_0075f0a0(auStack_98);
  local_c0 = puVar4;
  FUN_0075efb0(&local_b8,plVar7,0,1);
  *(uint *)(local_c0 + 3) = (uint)*(byte *)(param_1 + 0x90);
  FUN_0075f0a0(&local_b8);
  local_c0 = puVar4;
  FUN_0075efb0(&local_b8,plVar7,0,1);
  *(undefined4 *)(local_c0 + 5) = *(undefined4 *)PTR_DAT_02718608;
  FUN_0075f0a0(&local_b8);
  local_c0 = puVar4;
  FUN_0075efb0(&local_b8,plVar7,0,1);
  *(undefined4 *)((long)local_c0 + 0x14) = 1;
  FUN_0075f0a0(&local_b8);
  FUN_009b2310(&local_c0,*(undefined8 *)(param_1 + 0x80),(undefined8 *)(param_1 + 0x80));
  puVar11 = local_c0;
  local_c0 = (undefined8 *)0x0;
  lVar5 = *(long *)(param_1 + 0x3e0);
  puVar2 = (ulong *)(param_1 + 1000);
  *(undefined8 **)(param_1 + 0x3e0) = puVar11;
  if (lVar5 == 0) {
    *(void **)(param_1 + 0x3f0) = local_b0;
    *(undefined8 *)(param_1 + 0x3f8) = local_a8;
    *puVar2 = local_b8;
    local_c0 = (undefined8 *)0x0;
  }
  else {
    FUN_009b5b00(puVar2);
    puVar11 = local_c0;
    *puVar2 = local_b8;
    *(void **)(param_1 + 0x3f0) = local_b0;
    *(undefined8 *)(param_1 + 0x3f8) = local_a8;
    local_c0 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_009b5b00(&local_b8);
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x3e0);
  FUN_0075efb0(&local_c0,*puVar11,0,1);
  FUN_009bd300(puVar11[1],puVar4);
  FUN_0075f0a0(&local_c0);
  uVar3 = FUN_009b2420(param_1,&local_90,&local_68);
  FUN_0075efb0(&local_c0,plVar7,0,1);
  (**(code **)*puVar4)(puVar4);
  (**(code **)(*plVar9 + 0x18))(plVar9,puVar4,0x30,8);
  FUN_0075f0a0(&local_c0);
LAB_009b22e0:
  return uVar3 & 1;
}


