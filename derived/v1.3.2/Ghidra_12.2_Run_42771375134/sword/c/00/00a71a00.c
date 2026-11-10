/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a71a00; name: FUN_00a71a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a71a00(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_00a67ff0(param_1,param_2,&local_30,&local_34,0);
  if (param_2 == 0xff) {
    _DAT_000003d8 = local_28;
    _DAT_000003d0 = local_30;
  }
  else {
    param_1 = param_1 + (ulong)param_2 * 8;
    lVar1 = *(long *)(param_1 + 0x580);
    plVar3 = (long *)(param_1 + 0x580);
    if (lVar1 == 0) {
      lVar1 = *plVar3;
      _DAT_000003d8 = local_28;
      _DAT_000003d0 = local_30;
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      *(undefined8 *)(lVar1 + 0x3d8) = local_28;
      *(undefined8 *)(lVar1 + 0x3d0) = local_30;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *plVar3;
    }
    if (lVar1 != 0) {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined8 *)(lVar1 + 0x458) = 0;
      *(ulong *)(lVar1 + 0x450) = (ulong)(uint)(float)local_34 << 0x20;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  uRam0000000000000458 = 0;
  _DAT_00000450 = (ulong)(uint)(float)local_34 << 0x20;
  return;
}


