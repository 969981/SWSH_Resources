/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d78f0; name: FUN_014d78f0
 */


undefined4 FUN_014d78f0(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  long *local_160;
  long lStack_158;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  long *local_e0;
  long lStack_d8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  pbVar1 = (byte *)(param_1 + 0x8377);
  if ((*pbVar1 == 0) && (*(int *)((long)param_1 + 0x8c) == 0)) {
    (**(code **)(*param_1 + 0x10))(&local_48,param_1);
    lVar7 = local_48;
    local_78 = 1;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    lStack_d8 = lVar7;
    local_e0 = param_1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar4 = local_48;
    local_100 = &LAB_014d8940;
    local_f8 = FUN_014d89b0;
    local_f0 = &LAB_014d89f0;
    puStack_e8 = &LAB_014d8a20;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_170 = (undefined1 *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    lStack_158 = lVar4;
    local_160 = param_1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_180 = &LAB_014d8a50;
    local_178 = FUN_014d8a80;
    local_170 = &LAB_014d8ac0;
    puStack_168 = &LAB_014d8af0;
    bVar5 = FUN_01281670(&local_78,&local_100,&local_180);
    pcVar3 = local_178;
    *pbVar1 = bVar5 & 1;
    if (local_178 != (code *)0x0) {
      local_170 = (undefined1 *)0x0;
      puStack_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar3)(&local_160);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    pcVar3 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar3)(&local_e0);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (*pbVar1 != 0) {
      uVar6 = 0;
      plVar2 = param_1 + 0x106da;
      lVar7 = (long)param_1 + 0x94;
      *(int *)plVar2 = 0;
      do {
        FUN_0154e6d0(uVar6 & 0xffffffff,lVar7);
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)plVar2 = (int)*plVar2 + 1;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x2308;
      } while (uVar6 != 0x1e);
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return *(undefined4 *)((long)param_1 + 0x8c);
}


