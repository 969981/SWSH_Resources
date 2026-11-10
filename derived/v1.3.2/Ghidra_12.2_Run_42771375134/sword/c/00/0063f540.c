/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063f540; name: FUN_0063f540
 */


ulong FUN_0063f540(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x108))(param_2);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    piVar5 = (int *)(param_1 + 0x138c);
    lVar6 = 0x4e2;
    do {
      if (iVar2 == piVar5[-1]) {
        return lVar6 - 0x4e2;
      }
      if (iVar2 == *piVar5) {
        return lVar6 - 0x4e1;
      }
      uVar7 = lVar6 - 0x4e0;
      lVar6 = lVar6 + 2;
      piVar5 = piVar5 + 2;
    } while (uVar7 < 0x40);
  }
  if (param_3 != 0) {
    lVar6 = 0;
    if (plVar3 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar3 + 0x88))(plVar3);
    }
    puVar1 = PTR_DAT_02714828;
    if (0 < *(int *)(param_3 + 0x88)) {
      if (lVar6 == 0) {
        lVar6 = 0;
        lVar10 = 0x50;
        uVar8 = 0;
        do {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_3 + 0xa0) + lVar10) + 0x88))();
          uVar7 = FUN_0063f6e0(uVar4,puVar1);
          uVar9 = (uint)lVar6;
          if ((uVar7 & 1) == 0) {
            uVar9 = uVar8;
          }
          lVar6 = lVar6 + 1;
          lVar10 = lVar10 + 0x58;
          uVar8 = uVar9;
        } while (lVar6 < *(int *)(param_3 + 0x88));
      }
      else {
        lVar10 = 0;
        lVar11 = 0x50;
        uVar8 = 0;
        do {
          uVar4 = (**(code **)(**(long **)(*(long *)(param_3 + 0xa0) + lVar11) + 0x88))();
          uVar7 = FUN_0063f6e0(lVar6,uVar4);
          uVar9 = (uint)lVar10;
          if ((uVar7 & 1) != 0) break;
          uVar7 = FUN_0063f6e0(uVar4,puVar1);
          if ((uVar7 & 1) == 0) {
            uVar9 = uVar8;
          }
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0x58;
          uVar8 = uVar9;
        } while (lVar10 < *(int *)(param_3 + 0x88));
      }
      return (ulong)~uVar9;
    }
  }
  return 0xffffffff;
}


