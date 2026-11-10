/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd5210; name: FUN_00cd5210
 */


ulong FUN_00cd5210(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long local_38;
  
  plVar5 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar5;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_00866110(lVar2,plVar5);
  *(long **)(lVar2 + 8) = plVar5;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 == 0) {
    local_38 = 0;
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_38 = lVar2;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  uVar3 = FUN_014adeb0(&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar3 & 1) == 0) {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar1 == 0) {
      uVar4 = FUN_01522310(0);
      uVar6 = 0;
      uVar3 = 0;
      if ((uVar4 & 1) != 0) goto joined_r0x00cd5394;
    }
    else {
      plVar5 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar3 = FUN_01522310(lVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      if ((uVar3 & 1) != 0) {
        uVar6 = 0;
        uVar3 = 0;
        goto joined_r0x00cd5394;
      }
    }
    uVar3 = 0xc00000000;
    uVar6 = 1;
  }
  else {
    uVar3 = 0xd00000000;
    uVar6 = 1;
  }
joined_r0x00cd5394:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar3 | uVar6;
}


