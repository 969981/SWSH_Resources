/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155ad60; name: FUN_0155ad60
 */


int FUN_0155ad60(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_4 == (long *)0x0) {
    plVar4 = *(long **)(*(long *)PTR_DAT_02710788 + 8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0155af30;
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0xb0,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_006e7ce0(lVar3,param_2,param_3,0);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0xb0;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_0155af30:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_4 + 0x10))(param_4,0xb0,8);
    if (lVar3 == 0) {
      (**(code **)(*param_4 + 0xb8))(param_4);
    }
    FUN_006e7ce0(lVar3,param_2,param_3,0);
    *(long **)(lVar3 + 8) = param_4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0xb0;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = lVar3;
  iVar1 = FUN_006e7e20(lVar3);
  if ((iVar1 != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return iVar1;
}


