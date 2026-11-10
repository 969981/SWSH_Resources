/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c16520; name: FUN_00c16520
 */


void FUN_00c16520(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *local_120;
  code *local_118;
  code *local_110;
  undefined1 *local_108;
  long alStack_100 [12];
  undefined **local_a0;
  long lStack_98;
  undefined ***local_80;
  undefined **local_70;
  long lStack_68;
  undefined ***local_50;
  long local_38;
  
  if (param_2 != 0) {
    return;
  }
  FUN_00beefb0(param_1,"msg_ui_btlspot_help_08");
  local_70 = &PTR_LAB_0263c798;
  lStack_68 = param_1;
  local_50 = &local_70;
  FUN_00bef0c0(param_1,0,&local_70);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
LAB_00c16590:
    (*pcVar3)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_50)[5];
    goto LAB_00c16590;
  }
  local_a0 = &PTR_LAB_0263c7e0;
  lStack_98 = param_1;
  local_80 = &local_a0;
  FUN_00bef0c0(param_1,1,&local_a0);
  if (&local_a0 == local_80) {
    pcVar3 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00c165e0;
    pcVar3 = (code *)(*local_80)[5];
  }
  (*pcVar3)();
LAB_00c165e0:
  FUN_00bef170(param_1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_120 = &local_38;
  local_38 = 0;
  local_118 = (code *)0xecf72d521d07fad7;
  FUN_0108c840(lVar4,&local_120,0);
  lVar1 = local_38;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar1 != 0) {
    FUN_016b2d70(lVar1,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_120 = &local_38;
    local_38 = 0;
    local_118 = (code *)0xecf72e521d07fc8a;
    FUN_0108c840(lVar4,&local_120,0);
    lVar1 = local_38;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar1 != 0) {
      FUN_016b2d70(lVar1,0);
      uVar2 = FUN_00beec50(param_1);
      FUN_016b2d70(uVar2,1);
      local_120 = (long *)&LAB_00c17050;
      local_118 = FUN_00c170c0;
      local_110 = FUN_00c170d0;
      local_108 = &LAB_00c170e0;
      alStack_100[0] = param_1;
      lVar4 = FUN_00beec50(param_1);
      pcVar3 = *(code **)(lVar4 + 0x168);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x170) = 0;
        *(undefined8 *)(lVar4 + 0x178) = 0;
        *(undefined8 *)(lVar4 + 0x160) = 0;
        *(undefined8 *)(lVar4 + 0x168) = 0;
        (*pcVar3)(lVar4 + 0x180);
      }
      if (local_110 != (code *)0x0) {
        (*local_110)(alStack_100,lVar4 + 0x180);
        *(undefined1 **)(lVar4 + 0x178) = local_108;
        *(code **)(lVar4 + 0x168) = local_118;
        *(code **)(lVar4 + 0x170) = local_110;
        *(undefined8 *)(lVar4 + 0x160) = local_120;
      }
      pcVar3 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (code *)0x0;
        local_108 = (undefined1 *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar3)(alStack_100);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


