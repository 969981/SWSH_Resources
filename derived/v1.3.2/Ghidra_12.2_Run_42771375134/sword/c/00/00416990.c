/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416990; name: FUN_00416990
 */


undefined8 FUN_00416990(long *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  short sVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  char local_34 [4];
  
  *(undefined1 *)(param_1 + 5) = 1;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  plVar9 = (long *)(*param_1 + 0xf8);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  do {
    uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
    if ((uVar5 & 1) != 0) {
      lVar8 = plVar9[4];
      *(int *)(param_1 + 4) = (int)lVar8;
      *(bool *)(param_1 + 5) = (int)lVar8 != 0;
      *(int *)((long)param_1 + 0x24) = (int)plVar9[2];
      sVar7 = *(short *)((long)plVar9 + 0x14);
      if (sVar7 == 0) {
        sVar7 = 0;
      }
      else if ((short)plVar9[3] != 0 || *(short *)((long)plVar9 + 0x16) != 0) {
        iVar3 = (int)*(short *)((long)plVar9 + 0x16) + (int)sVar7;
        iVar1 = (int)(short)iVar3;
        iVar2 = (int)(short)((short)plVar9[3] + sVar7);
        if (iVar3 < 1) {
          iVar1 = 1;
        }
        if (iVar2 != iVar1) {
          lVar8 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_02712b80 = lVar8;
          iVar2 = (1 - iVar1) + iVar2;
          sVar7 = 0;
          uVar5 = (ulong)lVar8 >> 0x21;
          if (iVar2 != 0) {
            sVar7 = (short)((int)(uint)uVar5 / iVar2);
          }
          sVar7 = ((short)uVar5 - sVar7 * (short)iVar2) + (short)iVar1;
        }
      }
      *(short *)((long)param_1 + 0x42) = sVar7;
      return 1;
    }
    if (((int)plVar9[5] == 0) || (*(char *)((long)plVar9 + 0x42) == '\0')) {
      plVar9 = (long *)plVar9[1];
      if (plVar9 == (long *)0x0) {
        return 2;
      }
    }
    else {
      iVar3 = FUN_00416b70(param_1,plVar9);
      if (iVar3 != 1) {
        FUN_00416d00(param_1);
        return 2;
      }
    }
    local_34[0] = '\0';
    uVar4 = *(uint *)(param_1 + 3);
    while (uVar4 = FUN_00416e00(param_1,param_1[2] + (ulong)uVar4 * 0x18 + -0x18,local_34),
          local_34[0] != '\0') {
      uVar4 = *(uint *)(param_1 + 3);
      lVar8 = param_1[2] + (ulong)uVar4 * 0x18;
      lVar10 = plVar9[1];
      if (((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) | 2) == 2) &&
         (plVar6 = *(long **)(lVar8 + -8), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x10))();
        uVar4 = *(uint *)(param_1 + 3);
      }
      uVar4 = uVar4 - 1;
      *(uint *)(param_1 + 3) = uVar4;
      if (lVar10 == 0) {
        return 2;
      }
    }
    plVar9 = *(long **)(plVar9[4] + (ulong)(uVar4 & 0xffff) * 8);
    if (plVar9 == (long *)0x0) {
      return 2;
    }
  } while( true );
}


