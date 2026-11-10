/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015060c0; name: FUN_015060c0
 */


undefined8 FUN_015060c0(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_4 + 0x10))(param_4,0xb8,8);
  if (lVar3 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_00866110(lVar3,param_4);
  *(long **)(lVar3 + 8) = param_4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0xb8;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  bVar1 = lVar3 != 0;
  if (bVar1) {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((param_2 < 0x20) && (param_3 < 0x1e)) {
    FUN_008664b0(lVar3,param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x60);
  }
  if (bVar1) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  uVar4 = FUN_008787d0(lVar3);
  if (((uVar4 & 1) == 0) &&
     (((param_5 & 1) != 0 || (uVar4 = FUN_0087d610(lVar3,2), (uVar4 & 1) == 0)))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (bVar1) {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return uVar5;
}


