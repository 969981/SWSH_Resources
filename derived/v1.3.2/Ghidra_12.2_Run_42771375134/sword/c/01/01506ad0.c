/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01506ad0; name: FUN_01506ad0
 */


undefined8 FUN_01506ad0(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_00866110(lVar2,param_3);
  *(long **)(lVar2 + 8) = param_3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (lVar2 != 0) {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((param_4 < 0x20) && (param_5 < 0x1e)) {
    FUN_008664b0(lVar2,param_1 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158 + 0x60);
  }
  if (lVar2 == 0) {
    uVar3 = FUN_008787d0(0);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto joined_r0x01506cec;
    }
LAB_01506c60:
    FUN_008664a0(lVar1,param_1 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158 + 0x60);
    if (lVar2 == 0) {
      uVar4 = 1;
      goto joined_r0x01506cec;
    }
    uVar4 = 1;
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    uVar3 = FUN_008787d0(lVar2);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    if ((uVar3 & 1) != 0) goto LAB_01506c60;
    uVar4 = 0;
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
joined_r0x01506cec:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar4;
}


