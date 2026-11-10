/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bef3d0; name: FUN_00bef3d0
 */


void FUN_00bef3d0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  long local_28;
  
  if (*(long *)(param_1 + 0x670) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_b0 = &local_28;
    local_28 = 0;
    local_a8 = (code *)0xecf72d521d07fad7;
    FUN_0108c840(lVar3,&local_b0,0);
    lVar1 = local_28;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (lVar1 == 0) goto LAB_00bef83c;
    pcVar2 = *(code **)(lVar1 + 0x138);
    local_b0 = (long *)&LAB_00bf1910;
    local_a8 = FUN_00bf1920;
    local_a0 = FUN_00bf1930;
    local_98 = &LAB_00bf1940;
    alStack_90[0] = param_1;
    if (pcVar2 == (code *)0x0) {
LAB_00bef4ac:
      (*local_a0)(alStack_90,lVar1 + 0x150);
      *(undefined1 **)(lVar1 + 0x148) = local_98;
      *(code **)(lVar1 + 0x138) = local_a8;
      *(code **)(lVar1 + 0x140) = local_a0;
      *(undefined8 *)(lVar1 + 0x130) = local_b0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x140) = 0;
      *(undefined8 *)(lVar1 + 0x148) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      (*pcVar2)(lVar1 + 0x150);
      if (local_a0 != (code *)0x0) goto LAB_00bef4ac;
    }
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (code *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar2)(alStack_90);
    }
  }
  if (*(long *)(param_1 + 0x6f0) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_b0 = &local_28;
    local_28 = 0;
    local_a8 = (code *)0xecf734521d0806bc;
    FUN_0108c840(lVar3,&local_b0,0);
    lVar1 = local_28;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (lVar1 == 0) goto LAB_00bef83c;
    pcVar2 = *(code **)(lVar1 + 0x138);
    local_b0 = (long *)&LAB_00bf1950;
    local_a8 = FUN_00bf1960;
    local_a0 = FUN_00bf1970;
    local_98 = &LAB_00bf1980;
    alStack_90[0] = param_1;
    if (pcVar2 == (code *)0x0) {
LAB_00bef5bc:
      (*local_a0)(alStack_90,lVar1 + 0x150);
      *(undefined1 **)(lVar1 + 0x148) = local_98;
      *(code **)(lVar1 + 0x138) = local_a8;
      *(code **)(lVar1 + 0x140) = local_a0;
      *(undefined8 *)(lVar1 + 0x130) = local_b0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x140) = 0;
      *(undefined8 *)(lVar1 + 0x148) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      (*pcVar2)(lVar1 + 0x150);
      if (local_a0 != (code *)0x0) goto LAB_00bef5bc;
    }
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (code *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar2)(alStack_90);
    }
  }
  if (*(long *)(param_1 + 0x730) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_b0 = &local_28;
    local_28 = 0;
    local_a8 = (code *)0xecf735521d08086f;
    FUN_0108c840(lVar3,&local_b0,0);
    lVar1 = local_28;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (lVar1 == 0) goto LAB_00bef83c;
    pcVar2 = *(code **)(lVar1 + 0x138);
    local_b0 = (long *)&LAB_00bf1990;
    local_a8 = FUN_00bf19a0;
    local_a0 = FUN_00bf19b0;
    local_98 = &LAB_00bf19c0;
    alStack_90[0] = param_1;
    if (pcVar2 == (code *)0x0) {
LAB_00bef6cc:
      (*local_a0)(alStack_90,lVar1 + 0x150);
      *(undefined1 **)(lVar1 + 0x148) = local_98;
      *(code **)(lVar1 + 0x138) = local_a8;
      *(code **)(lVar1 + 0x140) = local_a0;
      *(undefined8 *)(lVar1 + 0x130) = local_b0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x140) = 0;
      *(undefined8 *)(lVar1 + 0x148) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      (*pcVar2)(lVar1 + 0x150);
      if (local_a0 != (code *)0x0) goto LAB_00bef6cc;
    }
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (code *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar2)(alStack_90);
    }
  }
  if (*(long *)(param_1 + 0x6b0) == 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_b0 = &local_28;
  local_28 = 0;
  local_a8 = (code *)0xecf72e521d07fc8a;
  FUN_0108c840(lVar3,&local_b0,0);
  lVar1 = local_28;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
LAB_00bef83c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  pcVar2 = *(code **)(lVar1 + 0x138);
  local_b0 = (long *)&LAB_00bf19d0;
  local_a8 = FUN_00bf19e0;
  local_a0 = FUN_00bf19f0;
  local_98 = &LAB_00bf1a00;
  alStack_90[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    (*pcVar2)(lVar1 + 0x150);
    if (local_a0 == (code *)0x0) goto LAB_00bef80c;
  }
  (*local_a0)(alStack_90,lVar1 + 0x150);
  *(undefined1 **)(lVar1 + 0x148) = local_98;
  *(code **)(lVar1 + 0x138) = local_a8;
  *(code **)(lVar1 + 0x140) = local_a0;
  *(undefined8 *)(lVar1 + 0x130) = local_b0;
LAB_00bef80c:
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(alStack_90);
  }
  return;
}


