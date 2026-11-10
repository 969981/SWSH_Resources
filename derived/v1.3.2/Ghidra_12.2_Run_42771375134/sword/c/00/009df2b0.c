/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009df2b0; name: FUN_009df2b0
 */


void FUN_009df2b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  FUN_009df410(param_2);
  plVar4 = (long *)*param_1;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x628,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_0090dec0(lVar2,param_1[0x11],param_1[0x10],param_1[0x12],param_1[0x14],*param_1);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x628;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*param_2 != 0) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    *param_2 = 0;
  }
  *param_2 = lVar2;
  FUN_009df540(param_1,param_2);
  FUN_009df7d0(param_1,param_2);
  uVar3 = FUN_008f0c80(*(undefined4 *)(param_1 + 0xd));
  if ((uVar3 & 1) != 0) {
    FUN_009df960(param_1,param_2);
  }
  if (*(char *)((long)param_1 + 0x7c) == '\0') {
    FUN_008fe4a0(param_2[(ulong)*(uint *)(param_1 + 0xf) + 1],*param_2);
    return;
  }
  return;
}


