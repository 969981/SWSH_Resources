/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3e0d0; name: FUN_00c3e0d0
 */


void FUN_00c3e0d0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulong param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_5fc8;
  undefined2 local_5fc0;
  undefined2 uStack_5fbe;
  undefined4 uStack_5fbc;
  undefined4 uStack_5fb8;
  undefined4 uStack_5fb4;
  undefined4 uStack_5fb0;
  undefined4 local_5fac;
  undefined4 uStack_5fa8;
  undefined4 uStack_5fa4;
  long *local_5fa0;
  ulong local_5f98;
  undefined8 local_5f90;
  long local_5f88;
  undefined8 uStack_5f80;
  undefined8 local_5f78;
  undefined1 auStack_5f70 [11052];
  undefined8 uStack_3444;
  undefined8 uStack_343c;
  undefined8 uStack_3434;
  undefined8 local_3428;
  undefined8 local_3420;
  undefined8 local_3418;
  undefined8 local_3410;
  undefined8 local_3408;
  undefined1 *local_8c0;
  code *local_8b8;
  undefined1 *local_8b0;
  undefined1 *local_8a8;
  long *local_8a0;
  undefined4 local_898;
  undefined4 uStack_894;
  long local_890;
  long local_78;
  
  lVar3 = FUN_00c1d960();
  if (lVar3 == 0) {
    lVar3 = param_1[0xd];
  }
  else {
    FUN_00bd9f00(&local_8c0);
    if (((int)local_8c0 != 0) && (local_78 == 0x644)) {
      local_5fc0 = 0;
      local_5fac = 0;
      uStack_5fa8 = 0;
      uStack_5fb4 = 0;
      uStack_5fb0 = 0;
      uStack_5fbc = 0;
      uStack_5fb8 = 0;
      local_5f88 = 0;
      uStack_5f80 = 0;
      local_5fa0 = (long *)0x0;
      local_5f78 = 0x100000001;
      local_5f98 = 0;
      local_5f90 = 0;
      uStack_3434 = 0;
      uStack_343c = 0;
      uStack_3444 = 0;
      local_3408 = 0;
      local_3410 = 0;
      local_3418 = 0;
      local_3420 = 0;
      local_3428 = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_5f70,0,0x2b2a);
    }
    lVar3 = param_1[0xd];
  }
  if ((lVar3 != 0) && (puVar5 = *(undefined8 **)(lVar3 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        goto LAB_00c3e248;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00c3e248:
  uVar6 = FUN_00c1cbf0(puVar5);
  (**(code **)(*param_1 + 0x10))(&local_5fc8,param_1);
  lVar3 = local_5fc8;
  if (local_5fc8 != 0) {
    (**(code **)(*(long *)(local_5fc8 + 0x48) + 0x10))();
  }
  uStack_5fb0 = 0;
  local_5fac = 0;
  uStack_5fa8 = 0;
  uStack_5fa4 = 0;
  local_5f90 = CONCAT44(param_4,param_3);
  local_5f88 = lVar3;
  local_5fc0 = 0;
  uStack_5fbe = 0;
  uStack_5fbc = 0;
  uStack_5fb8 = 0;
  uStack_5fb4 = 0;
  local_5fa0 = param_1;
  local_5f98 = param_5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = local_5fc8;
  local_5fc0 = 0x150;
  uStack_5fbe = 0xc4;
  uStack_5fbc = 0;
  uStack_5fb8 = 0xc40210;
  uStack_5fb4 = 0;
  uStack_5fb0 = 0xc40250;
  local_5fac = 0;
  uStack_5fa8 = 0xc40280;
  uStack_5fa4 = 0;
  if (local_5fc8 != 0) {
    (**(code **)(*(long *)(local_5fc8 + 0x48) + 0x10))();
  }
  local_8a8 = (undefined1 *)0x0;
  local_8b0 = (undefined1 *)0x0;
  local_8b8 = (code *)0x0;
  local_8c0 = (undefined1 *)0x0;
  local_890 = lVar2;
  local_8a0 = param_1;
  local_898 = param_3;
  uStack_894 = param_4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_8c0 = &LAB_00c402b0;
  local_8b8 = FUN_00c40320;
  local_8b0 = &LAB_00c40360;
  local_8a8 = &LAB_00c40390;
  uVar7 = FUN_01282010(param_5 & 0xffffffff,0,uVar6,&local_5fc0,&local_8c0);
  pcVar1 = local_8b8;
  if (local_8b8 != (code *)0x0) {
    local_8a8 = (undefined1 *)0x0;
    local_8b0 = (undefined1 *)0x0;
    local_8b8 = (code *)0x0;
    local_8c0 = (undefined1 *)0x0;
    (*pcVar1)(&local_8a0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  pcVar1 = (code *)CONCAT44(uStack_5fb4,uStack_5fb8);
  if (pcVar1 != (code *)0x0) {
    uStack_5fb0 = 0;
    local_5fac = 0;
    uStack_5fa8 = 0;
    uStack_5fa4 = 0;
    local_5fc0 = 0;
    uStack_5fbe = 0;
    uStack_5fbc = 0;
    uStack_5fb8 = 0;
    uStack_5fb4 = 0;
    (*pcVar1)(&local_5fa0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  nn::os::GetSystemTick();
  lVar3 = nn::os::ConvertToTimeSpan();
  param_1[0xf] = lVar3;
  lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_5fc0 = (undefined2)lVar3;
  uStack_5fbe = (undefined2)((ulong)lVar3 >> 0x10);
  uStack_5fbc = (undefined4)((ulong)lVar3 >> 0x20);
  lVar3 = FUN_00fe2800(&local_5fc0);
  FUN_012ae720(*(undefined8 *)(lVar3 + 0x80));
  lVar3 = CONCAT44(uStack_5fbc,CONCAT22(uStack_5fbe,local_5fc0));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    local_5fc0 = 0;
    uStack_5fbe = 0;
    uStack_5fbc = 0;
  }
  if ((uVar7 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x13) = param_2;
  if (local_5fc8 != 0) {
    (**(code **)(*(long *)(local_5fc8 + 0x48) + 0x18))();
  }
  return;
}


