/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00492080; name: FUN_00492080
 */


long * FUN_00492080(long param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  
  if (*(char *)(param_1 + 0xfd) < '\0') {
    plVar9 = *(long **)(param_1 + 0xe0);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
      if (plVar9 != (long *)0x0) {
        FUN_00494320(plVar9,param_2);
        iVar3 = FUN_00494360(plVar9,*(undefined2 *)(param_1 + 0xfa));
        if (iVar3 != 1) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          *(undefined8 *)(param_1 + 0xe0) = 0;
          return (long *)0x0;
        }
        if ((*(byte *)(param_1 + 0xfd) >> 3 & 1) != 0) {
          uVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x68))();
          *(undefined4 *)(plVar9 + 1) = uVar4;
          *(undefined4 *)((long)plVar9 + 0xc) = uVar4;
        }
      }
      *(long **)(param_1 + 0xe0) = plVar9;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xd8) + -1;
    if (-1 < iVar3) {
      lVar6 = *(long *)(param_1 + 0xd0);
      iVar7 = 0;
      do {
        while( true ) {
          iVar2 = iVar3 - iVar7;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar1 = iVar7 + (iVar2 >> 1);
          uVar8 = *(ulong *)(lVar6 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                     (ulong)uVar1 << 4));
          if (param_3 > uVar8 || uVar8 == param_3) break;
          iVar3 = uVar1 - 1;
          if (iVar3 < iVar7) goto LAB_00492184;
        }
        if (param_3 <= uVar8) {
          if (lVar6 + (long)(int)uVar1 * 0x10 != 0) {
            return *(long **)(lVar6 + (long)(int)uVar1 * 0x10 + 8);
          }
          break;
        }
        iVar7 = uVar1 + 1;
      } while (iVar7 <= iVar3);
    }
LAB_00492184:
    plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
    plVar9 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_00494320(plVar5,param_2);
      iVar3 = FUN_00494360(plVar5,*(undefined2 *)(param_1 + 0xfa));
      if (iVar3 == 1) {
        if ((*(byte *)(param_1 + 0xfd) >> 3 & 1) != 0) {
          uVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x68))();
          *(undefined4 *)(plVar5 + 1) = uVar4;
          *(undefined4 *)((long)plVar5 + 0xc) = uVar4;
        }
        lVar6 = FUN_00485d10(param_3);
        if (((lVar6 != 0) && (iVar3 = FUN_00495f80(lVar6,param_1), iVar3 == 1)) &&
           (lVar6 = FUN_00491cc0((long *)(param_1 + 0xd0),param_3), lVar6 != 0)) {
          *(long **)(lVar6 + 8) = plVar5;
          return plVar5;
        }
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar9 = (long *)0x0;
    }
  }
  return plVar9;
}


