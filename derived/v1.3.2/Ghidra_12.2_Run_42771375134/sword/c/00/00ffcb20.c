/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffcb20; name: FUN_00ffcb20
 */


void FUN_00ffcb20(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long ***local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  long local_170;
  long lStack_168;
  long *local_110;
  undefined8 uStack_108;
  long alStack_100 [4];
  long *local_e0;
  long *local_d0;
  long local_c8;
  long local_c0;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_80;
  long **local_70 [2];
  
  if (*(long *)(param_1 + 0x3c0) == 0) {
    return;
  }
  local_110 = *(long **)(param_1 + 0x10);
  local_c8 = 0;
  local_c0 = 0;
  local_80 = (long *)0x0;
  uStack_a8 = 0x1fffffffffffffff;
  local_e0 = (long *)0x0;
  local_d0 = (long *)0x0;
  uStack_108 = 0x1fffffffffffffff;
  local_b0 = local_110;
  uVar1 = (**(code **)(*local_110 + 0x10))(local_110,0x400,8);
  FUN_00fff990(&local_110,uVar1,0x80,0,0,0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_190 = local_70;
  local_70[0] = &local_110;
  FUN_00fffb90(lVar3,&local_190,0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  local_180 = (code *)0x0;
  local_178 = (undefined1 *)0x0;
  local_190 = (long ***)0x0;
  local_188 = (code *)0x0;
  if (local_c8 != 0) {
    lVar3 = local_c8 << 3;
    plVar4 = local_d0;
    do {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      pcVar2 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = (code *)0x0;
        local_178 = (undefined1 *)0x0;
        local_190 = (long ***)0x0;
        local_188 = (code *)0x0;
        (*pcVar2)(&local_170);
      }
      local_190 = (long ***)&LAB_01000240;
      local_188 = FUN_01000260;
      local_180 = FUN_01000270;
      local_178 = &LAB_01000280;
      pcVar2 = *(code **)(lVar5 + 0x158);
      local_170 = param_1;
      lStack_168 = lVar5;
      if (pcVar2 == (code *)0x0) {
LAB_00ffcca0:
        (*local_180)(&local_170,lVar5 + 0x170);
        *(undefined1 **)(lVar5 + 0x168) = local_178;
        *(code **)(lVar5 + 0x158) = local_188;
        *(code **)(lVar5 + 0x160) = local_180;
        *(undefined8 *)(lVar5 + 0x150) = local_190;
      }
      else {
        *(undefined8 *)(lVar5 + 0x160) = 0;
        *(undefined8 *)(lVar5 + 0x168) = 0;
        *(undefined8 *)(lVar5 + 0x150) = 0;
        *(undefined8 *)(lVar5 + 0x158) = 0;
        (*pcVar2)(lVar5 + 0x170);
        if (local_180 != (code *)0x0) goto LAB_00ffcca0;
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      pcVar2 = local_188;
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    if (local_188 != (code *)0x0) {
      local_180 = (code *)0x0;
      local_178 = (undefined1 *)0x0;
      local_190 = (long ***)0x0;
      local_188 = (code *)0x0;
      (*pcVar2)(&local_170);
    }
    if (local_c8 != 0) {
      lVar3 = local_c8;
      plVar4 = local_d0;
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  if (local_c0 != 0) {
    (**(code **)(*local_110 + 0x18))(local_110,local_d0,local_c0 << 3,8);
  }
  if (alStack_100 == local_e0) {
    pcVar2 = *(code **)(*local_e0 + 0x20);
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_00ffcd88;
    pcVar2 = *(code **)(*local_e0 + 0x28);
  }
  (*pcVar2)();
LAB_00ffcd88:
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x28))();
  }
  return;
}


