/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011983a0; name: FUN_011983a0
 */


void FUN_011983a0(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long local_50;
  long lStack_48;
  
  puVar1 = PTR_DAT_027104b0;
  uVar6 = *(undefined8 *)PTR_DAT_027104b0;
  bVar2 = FUN_007b5690(uVar6);
  *(byte *)(param_1 + 0xa1) = bVar2 & 1;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf0);
  plVar8 = *(long **)(param_1 + 0x80);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x380,0x10);
  if (lVar4 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_011a1170(lVar4,*(undefined8 *)(param_1 + 0x80),0x14);
  *(long **)(lVar4 + 8) = plVar8;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x380;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar4;
  lVar3 = FUN_007b5710(uVar6);
  if (*(long *)(lVar3 + 0x48) != 0) {
    lVar4 = *(long *)(lVar3 + 0x48) << 3;
    puVar7 = *(undefined8 **)(lVar3 + 0x40);
    do {
      FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x2a0),*puVar7);
      lVar4 = lVar4 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a2260(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(long *)(param_1 + 0xb0) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a27f0(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(long *)(param_1 + 0xb8) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a2d50(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x118) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(long *)(param_1 + 0x118) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a32b0(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x140) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(long *)(param_1 + 0x140) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a2d50(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x150) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(long *)(param_1 + 0x150) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a32b0(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x268) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  *(long *)(param_1 + 0x268) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a3810(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x300) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  *(long *)(param_1 + 0x300) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a3da0(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  *(long *)(param_1 + 0x358) = local_50;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(lVar4 + 0x100);
  *(long *)(lVar4 + 0x100) = lVar3 + 1;
  FUN_011a4320(&local_50,lVar4 + 0xd0,lVar3,0,0);
  if (*(long *)(param_1 + 0x128) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  lVar3 = 0x308;
  *(long *)(param_1 + 0x128) = local_50;
  do {
    lVar5 = *(long *)(param_1 + 0x88);
    lVar4 = *(long *)(lVar5 + 0x100);
    *(long *)(lVar5 + 0x100) = lVar4 + 1;
    FUN_011a48b0(&local_50,lVar5 + 0xd0,lVar4,0,0);
    plVar8 = (long *)(param_1 + lVar3) + -0x35;
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
    }
    *plVar8 = local_50;
    lVar5 = *(long *)(param_1 + 0x88);
    lVar4 = *(long *)(lVar5 + 0x100);
    *(long *)(lVar5 + 0x100) = lVar4 + 1;
    FUN_011a32b0(&local_50,lVar5 + 0xd0,lVar4,0,0);
    lVar4 = *(long *)(param_1 + lVar3);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + lVar3) = 0;
    }
    *(long *)(param_1 + lVar3) = local_50;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x348);
  FUN_011988b0(*(undefined8 *)(param_1 + 0x88),0,1);
  *(long *)(*(long *)(param_1 + 0x88) + 0x2c0) = param_1 + 0x68;
  lVar3 = *(long *)(param_1 + 0x88);
  if (*(long *)(lVar3 + 0x2a8) != 0) {
    *(long *)(*(long *)(lVar3 + 0x2a8) + 0x168) = param_1 + 0x70;
    lVar3 = *(long *)(param_1 + 0x88);
  }
  if (*(long *)(lVar3 + 0x2b0) != 0) {
    *(long *)(*(long *)(lVar3 + 0x2b0) + 0x168) = param_1 + 0x78;
  }
  lVar3 = *(long *)puVar1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) {
      plVar8 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    lStack_48 = param_1 + 0x60;
    local_50 = lVar4;
    FUN_007b58c0(lVar3,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
  }
  return;
}


