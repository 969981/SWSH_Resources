/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bef870; name: FUN_00bef870
 */


void FUN_00bef870(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [104];
  long local_38;
  
  FUN_016bbeb0(*(undefined8 *)(param_1 + 0x840));
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x840),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x840),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x840),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x840),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x840),4);
  plVar2 = *(long **)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x670) = 0;
  if ((long *)(param_1 + 0x650) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00bef8f8:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00bef8f8;
  }
  plVar2 = *(long **)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x640) = 8;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  if ((long *)(param_1 + 0x690) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00bef930:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00bef930;
  }
  plVar2 = *(long **)(param_1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x680) = 8;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  if ((long *)(param_1 + 0x6d0) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00bef968:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00bef968;
  }
  plVar2 = *(long **)(param_1 + 0x730);
  *(undefined4 *)(param_1 + 0x6c0) = 8;
  *(undefined8 *)(param_1 + 0x730) = 0;
  if ((long *)(param_1 + 0x710) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00bef9a0:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00bef9a0;
  }
  plVar2 = *(long **)(param_1 + 0x770);
  *(undefined4 *)(param_1 + 0x700) = 8;
  *(undefined8 *)(param_1 + 0x770) = 0;
  if ((long *)(param_1 + 0x750) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00bef9d8:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00bef9d8;
  }
  plVar2 = *(long **)(param_1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x740) = 8;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  if ((long *)(param_1 + 0x790) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00befa10:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00befa10;
  }
  plVar2 = *(long **)(param_1 + 0x7f0);
  *(undefined4 *)(param_1 + 0x780) = 8;
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  if ((long *)(param_1 + 2000) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00befa48:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00befa48;
  }
  plVar2 = *(long **)(param_1 + 0x830);
  *(undefined4 *)(param_1 + 0x7c0) = 8;
  *(undefined8 *)(param_1 + 0x830) = 0;
  if ((long *)(param_1 + 0x810) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00befa84;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00befa84:
  *(undefined4 *)(param_1 + 0x800) = 8;
  lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_c0 = &local_38;
  local_38 = 0;
  local_b8 = (code *)0xecf72d521d07fad7;
  FUN_0108c840(lVar4,&local_c0,0);
  lVar1 = local_38;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar1 != 0) {
    local_b0 = (code *)0x0;
    local_a8 = 0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    pcVar3 = *(code **)(lVar1 + 0x138);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x140) = 0;
      *(undefined8 *)(lVar1 + 0x148) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      (*pcVar3)(lVar1 + 0x150);
      if (local_b0 != (code *)0x0) {
        (*local_b0)(auStack_a0,lVar1 + 0x150);
        *(undefined8 *)(lVar1 + 0x148) = local_a8;
        *(code **)(lVar1 + 0x138) = local_b8;
        *(code **)(lVar1 + 0x140) = local_b0;
        *(undefined8 *)(lVar1 + 0x130) = local_c0;
      }
    }
    pcVar3 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (code *)0x0;
      local_a8 = 0;
      local_c0 = (long *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar3)(auStack_a0);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_c0 = &local_38;
    local_38 = 0;
    local_b8 = (code *)0xecf734521d0806bc;
    FUN_0108c840(lVar4,&local_c0,0);
    lVar1 = local_38;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar1 != 0) {
      local_b0 = (code *)0x0;
      local_a8 = 0;
      local_c0 = (long *)0x0;
      local_b8 = (code *)0x0;
      pcVar3 = *(code **)(lVar1 + 0x138);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar1 + 0x140) = 0;
        *(undefined8 *)(lVar1 + 0x148) = 0;
        *(undefined8 *)(lVar1 + 0x130) = 0;
        *(undefined8 *)(lVar1 + 0x138) = 0;
        (*pcVar3)(lVar1 + 0x150);
        if (local_b0 != (code *)0x0) {
          (*local_b0)(auStack_a0,lVar1 + 0x150);
          *(undefined8 *)(lVar1 + 0x148) = local_a8;
          *(code **)(lVar1 + 0x138) = local_b8;
          *(code **)(lVar1 + 0x140) = local_b0;
          *(undefined8 *)(lVar1 + 0x130) = local_c0;
        }
      }
      pcVar3 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (code *)0x0;
        local_a8 = 0;
        local_c0 = (long *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar3)(auStack_a0);
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_c0 = &local_38;
      local_38 = 0;
      local_b8 = (code *)0xecf735521d08086f;
      FUN_0108c840(lVar4,&local_c0,0);
      lVar1 = local_38;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar1 != 0) {
        local_b0 = (code *)0x0;
        local_a8 = 0;
        local_c0 = (long *)0x0;
        local_b8 = (code *)0x0;
        pcVar3 = *(code **)(lVar1 + 0x138);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar1 + 0x140) = 0;
          *(undefined8 *)(lVar1 + 0x148) = 0;
          *(undefined8 *)(lVar1 + 0x130) = 0;
          *(undefined8 *)(lVar1 + 0x138) = 0;
          (*pcVar3)(lVar1 + 0x150);
          if (local_b0 != (code *)0x0) {
            (*local_b0)(auStack_a0,lVar1 + 0x150);
            *(undefined8 *)(lVar1 + 0x148) = local_a8;
            *(code **)(lVar1 + 0x138) = local_b8;
            *(code **)(lVar1 + 0x140) = local_b0;
            *(undefined8 *)(lVar1 + 0x130) = local_c0;
          }
        }
        pcVar3 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (code *)0x0;
          local_a8 = 0;
          local_c0 = (long *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar3)(auStack_a0);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        local_c0 = &local_38;
        local_38 = 0;
        local_b8 = (code *)0xecf72e521d07fc8a;
        FUN_0108c840(lVar4,&local_c0,0);
        lVar1 = local_38;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        if (lVar1 != 0) {
          local_b0 = (code *)0x0;
          local_a8 = 0;
          local_c0 = (long *)0x0;
          local_b8 = (code *)0x0;
          pcVar3 = *(code **)(lVar1 + 0x138);
          if (pcVar3 != (code *)0x0) {
            *(undefined8 *)(lVar1 + 0x140) = 0;
            *(undefined8 *)(lVar1 + 0x148) = 0;
            *(undefined8 *)(lVar1 + 0x130) = 0;
            *(undefined8 *)(lVar1 + 0x138) = 0;
            (*pcVar3)(lVar1 + 0x150);
            if (local_b0 != (code *)0x0) {
              (*local_b0)(auStack_a0,lVar1 + 0x150);
              *(undefined8 *)(lVar1 + 0x148) = local_a8;
              *(code **)(lVar1 + 0x138) = local_b8;
              *(code **)(lVar1 + 0x140) = local_b0;
              *(undefined8 *)(lVar1 + 0x130) = local_c0;
            }
          }
          pcVar3 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = (code *)0x0;
            local_a8 = 0;
            local_c0 = (long *)0x0;
            local_b8 = (code *)0x0;
            (*pcVar3)(auStack_a0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


