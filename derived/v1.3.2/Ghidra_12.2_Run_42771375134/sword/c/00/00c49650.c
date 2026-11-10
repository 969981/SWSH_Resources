/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c49650; name: FUN_00c49650
 */


void FUN_00c49650(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long *local_140;
  undefined4 local_138;
  long local_130;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  undefined4 local_b8;
  long local_b0;
  long local_58;
  
  if ((char)param_1[0x15] == '\0') {
    *(undefined4 *)(param_1 + 0x11) = param_4;
  }
  else {
    lVar1 = param_1[0x16];
    (**(code **)(*param_1 + 0x10))(&local_58,param_1);
    lVar3 = local_58;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_b0 = lVar3;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    local_c0 = param_1;
    local_b8 = param_3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = local_58;
    local_e0 = &LAB_00c4a6a0;
    local_d8 = FUN_00c4a8f0;
    local_d0 = &LAB_00c4a930;
    puStack_c8 = &LAB_00c4a960;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_130 = lVar4;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    local_140 = param_1;
    local_138 = param_4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_160 = &LAB_00c4a990;
    local_158 = FUN_00c4a9c0;
    local_150 = &LAB_00c4aa00;
    puStack_148 = &LAB_00c4aa30;
    uVar5 = FUN_0122e2b0((int)lVar1,&local_e0,&local_160);
    pcVar2 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar2)(&local_140);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    pcVar2 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      puStack_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar2)(&local_c0);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if ((uVar5 & 1) == 0) {
      param_2 = param_4;
    }
    *(undefined4 *)(param_1 + 0x11) = param_2;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  return;
}


