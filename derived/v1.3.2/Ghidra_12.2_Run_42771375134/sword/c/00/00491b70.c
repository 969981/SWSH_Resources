/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00491b70; name: FUN_00491b70
 */


long * FUN_00491b70(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0xfd) < '\0') {
    plVar4 = *(long **)(param_1 + 0xe0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
      if (plVar4 != (long *)0x0) {
        FUN_00494d30(plVar4);
      }
      *(long **)(param_1 + 0xe0) = plVar4;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xd8) + -1;
    if (-1 < iVar3) {
      lVar5 = *(long *)(param_1 + 0xd0);
      iVar6 = 0;
      do {
        while( true ) {
          iVar2 = iVar3 - iVar6;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar1 = iVar6 + (iVar2 >> 1);
          uVar7 = *(ulong *)(lVar5 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                     (ulong)uVar1 << 4));
          if (param_2 > uVar7 || uVar7 == param_2) break;
          iVar3 = uVar1 - 1;
          if (iVar3 < iVar6) goto LAB_00491c38;
        }
        if (param_2 <= uVar7) {
          if (lVar5 + (long)(int)uVar1 * 0x10 != 0) {
            return *(long **)(lVar5 + (long)(int)uVar1 * 0x10 + 8);
          }
          break;
        }
        iVar6 = uVar1 + 1;
      } while (iVar6 <= iVar3);
    }
LAB_00491c38:
    plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    if (plVar4 != (long *)0x0) {
      FUN_00494d30(plVar4);
      lVar5 = FUN_00485d10(param_2);
      if (((lVar5 == 0) || (iVar3 = FUN_00495f80(lVar5,param_1), iVar3 != 1)) ||
         (lVar5 = FUN_00491cc0((long *)(param_1 + 0xd0),param_2), lVar5 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar4 = (long *)0x0;
      }
      else {
        *(long **)(lVar5 + 8) = plVar4;
      }
    }
  }
  return plVar4;
}


