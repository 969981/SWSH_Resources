/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01507570; name: FUN_01507570
 */


int FUN_01507570(long param_1,long *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long local_58;
  
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00866110(lVar6,param_2);
  *(long **)(lVar6 + 8) = param_2;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0xb8;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  bVar1 = lVar6 != 0;
  if (bVar1) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  plVar7 = (long *)(param_1 + 0x50a60);
  if ((*plVar7 == 0) || (iVar2 = FUN_0150b1c0(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    uVar8 = 0;
    iVar2 = 0;
    if (bVar1) {
      do {
        local_58 = lVar6;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(lVar6 + 0x48);
        iVar3 = FUN_015073c0(param_1,uVar8,&local_58,param_3 & 1);
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(lVar6 + 0x48);
        local_58 = 0;
        iVar2 = iVar3 + iVar2;
        uVar8 = uVar8 + 1;
        uVar4 = FUN_0150b1c0(*plVar7);
      } while (uVar8 < uVar4);
    }
    else {
      do {
        local_58 = lVar6;
        iVar3 = FUN_015073c0(param_1,uVar8,&local_58,param_3 & 1);
        iVar2 = iVar3 + iVar2;
        uVar8 = uVar8 + 1;
        uVar4 = FUN_0150b1c0(*plVar7);
      } while (uVar8 < uVar4);
    }
  }
  if (bVar1) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return iVar2;
}


