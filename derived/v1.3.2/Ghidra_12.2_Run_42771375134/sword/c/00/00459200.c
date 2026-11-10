/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00459200; name: FUN_00459200
 */


undefined8 FUN_00459200(undefined4 param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = *(int *)(param_2 + 0x20) + -1;
  if (-1 < iVar3) {
    lVar2 = *(long *)(param_2 + 0x18);
    iVar4 = 0;
    do {
      while( true ) {
        iVar1 = iVar3 - iVar4;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar4 + (iVar1 >> 1);
        lVar5 = (long)iVar1;
        uVar6 = *(ulong *)(lVar2 + (long)iVar1 * 0x18);
        if ((uVar6 <= param_3) &&
           ((param_3 != uVar6 || (*(uint *)(lVar2 + lVar5 * 0x18 + 8) <= param_4)))) break;
        iVar3 = iVar1 + -1;
        if (iVar3 < iVar4) goto LAB_004592b8;
      }
      if ((param_3 <= uVar6) &&
         ((param_3 != uVar6 || (param_4 <= *(uint *)(lVar2 + lVar5 * 0x18 + 8))))) {
        lVar2 = lVar2 + lVar5 * 0x18;
        if (lVar2 != 0) goto LAB_0045932c;
        break;
      }
      iVar4 = iVar1 + 1;
    } while (iVar4 <= iVar3);
  }
LAB_004592b8:
  lVar2 = FUN_00458bb0(param_2,param_3);
  if ((param_3 == 0xffffffffffffffff) || (lVar2 == 0)) {
    if (lVar2 == 0) {
      return 0;
    }
  }
  else if ((((ulong *)(lVar2 + -0x18) < *(ulong **)(param_2 + 0x18)) ||
           (*(ulong *)(lVar2 + -0x18) != param_3)) &&
          ((*(ulong **)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 3 + -3 <
            (ulong *)(lVar2 + 0x18U) || (*(ulong *)(lVar2 + 0x18U) != param_3)))) {
    FUN_004e7fa0(param_2 + 0x28,param_3);
  }
LAB_0045932c:
  *(undefined4 *)(lVar2 + 0x10) = param_1;
  return 1;
}


