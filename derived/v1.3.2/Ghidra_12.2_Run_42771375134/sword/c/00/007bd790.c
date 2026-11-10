/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007bd790; name: FUN_007bd790
 */


undefined8 FUN_007bd790(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = *(long *)PTR_DAT_027104b0;
  if ((lVar3 == 0) || (lVar1 = FUN_007b5710(lVar3), *(long *)(lVar1 + 0x48) == 0)) {
    return 0;
  }
  FUN_007bd630(param_1);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(*(long *)(param_1 + 0x80) + 0x168) = param_1 + 0x68;
    lVar4 = *(long *)PTR_DAT_02716750;
    if (lVar4 != 0) {
      (**(code **)(**(long **)(param_1 + 0x80) + 0x10))(&local_98);
      local_68 = local_98;
      local_98 = 0;
      FUN_007daeb0(lVar4,&local_68,0);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = plVar5;
  uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x130,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_007cd890(uVar2,*(undefined8 *)(param_1 + 0x70),0x61,&local_98);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = uVar2;
  if (lVar4 != 0) {
    FUN_007cd940(lVar4);
    (**(code **)(**(long **)(param_1 + 0x170) + 0x18))
              (*(long **)(param_1 + 0x170),lVar4,*(undefined8 *)(param_1 + 0x178),
               *(undefined8 *)(param_1 + 0x180));
    uVar2 = *(undefined8 *)(param_1 + 0x168);
  }
  *(long **)(param_1 + 0x170) = plVar5;
  *(undefined8 *)(param_1 + 0x178) = 0x130;
  *(undefined8 *)(param_1 + 0x180) = 0x10;
  FUN_007cdb20(uVar2);
  if (*(long *)(lVar1 + 0x48) != 0) {
    lVar4 = *(long *)(lVar1 + 0x40);
    lVar1 = *(long *)(lVar1 + 0x48) << 3;
    do {
      FUN_007bda70(param_1,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
    if (param_1 == 0) {
      local_a8 = 0;
      local_a0 = 0;
      goto LAB_007bd9e0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    local_a0 = param_1 + 0x60;
    local_a8 = 0;
  }
  else {
    plVar5 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_a8 = lVar1;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_a0 = param_1 + 0x60;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
LAB_007bd9e0:
  FUN_007b58c0(lVar3,&local_a8);
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  *(undefined1 *)(param_1 + 0x7c) = param_2;
  if (*(int *)(param_1 + 0x78) != 4) {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  if (local_98 != 0) {
    local_90 = local_98;
    (**(code **)(*local_80 + 0x18))(local_80,local_98,local_88 - local_98,8);
  }
  return 1;
}


