/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416ff0; name: FUN_00416ff0
 */


void FUN_00416ff0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  short sVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  char local_34 [4];
  
  sVar6 = *(short *)(param_1 + 0x42);
  if (sVar6 < 2) {
    if (sVar6 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
    if (*(uint *)(param_1 + 0x18) == 0) {
      return;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x10) + uVar7 * 0x18 + -0x18);
    local_34[0] = '\x01';
    while( true ) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      iVar4 = (int)uVar7;
      if ((*(uint *)(plVar9 + 6) | 2) == 2) goto LAB_004170d0;
      lVar8 = *(long *)(param_1 + 0x10) + uVar7 * 0x18;
      sVar6 = *(short *)(lVar8 + -0x10);
      if (sVar6 == 0) goto LAB_004170d0;
      if (1 < sVar6) break;
      plVar9 = (long *)plVar9[1];
      if (((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) | 2) == 2) &&
         (*(long **)(lVar8 + -8) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar8 + -8) + 0x10))();
        iVar4 = *(int *)(param_1 + 0x18);
      }
      uVar7 = (ulong)(iVar4 - 1U);
      *(uint *)(param_1 + 0x18) = iVar4 - 1U;
    }
    *(short *)(lVar8 + -0x10) = sVar6 + -1;
LAB_004170d0:
    do {
      uVar3 = FUN_00416e00(param_1,*(long *)(param_1 + 0x10) +
                                   (ulong)*(uint *)(param_1 + 0x18) * 0x18 + -0x18,local_34);
      cVar10 = local_34[0];
      if (local_34[0] == '\0') {
        plVar9 = *(long **)(plVar9[4] + (ulong)(uVar3 & 0xffff) * 8);
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
        if ((uVar7 & 1) != 0) goto LAB_0041721c;
        if (((int)plVar9[5] == 0) || (*(char *)((long)plVar9 + 0x42) == '\0')) {
          plVar9 = (long *)plVar9[1];
        }
        else {
          iVar4 = FUN_00416b70(param_1,plVar9);
          if (iVar4 != 1) {
            FUN_00416d00(param_1);
            return;
          }
        }
        cVar10 = '\x01';
        local_34[0] = '\x01';
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x10) + (ulong)uVar3 * 0x18;
        plVar9 = (long *)plVar9[1];
        if (((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) | 2) == 2) &&
           (plVar5 = *(long **)(lVar8 + -8), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x10))();
          uVar3 = *(uint *)(param_1 + 0x18);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        while( true ) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          if ((*(uint *)(plVar9 + 6) | 2) == 2) goto joined_r0x00417204;
          lVar8 = *(long *)(param_1 + 0x10) + (ulong)uVar3 * 0x18;
          sVar6 = *(short *)(lVar8 + -0x10);
          if (sVar6 == 0) goto joined_r0x00417204;
          if (1 < sVar6) break;
          plVar9 = (long *)plVar9[1];
          if (((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) | 2) == 2) &&
             (*(long **)(lVar8 + -8) != (long *)0x0)) {
            (**(code **)(**(long **)(lVar8 + -8) + 0x10))();
            uVar3 = *(uint *)(param_1 + 0x18);
          }
          uVar3 = uVar3 - 1;
          *(uint *)(param_1 + 0x18) = uVar3;
        }
        *(short *)(lVar8 + -0x10) = sVar6 + -1;
      }
joined_r0x00417204:
      if ((plVar9 == (long *)0x0) || (cVar10 == '\0')) goto LAB_0041721c;
    } while( true );
  }
  sVar6 = sVar6 + -1;
LAB_00417018:
  *(short *)(param_1 + 0x42) = sVar6;
  return;
LAB_0041721c:
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar8 = plVar9[4];
  *(int *)(param_1 + 0x20) = (int)lVar8;
  *(bool *)(param_1 + 0x28) = (int)lVar8 != 0;
  *(int *)(param_1 + 0x24) = (int)plVar9[2];
  sVar6 = *(short *)((long)plVar9 + 0x14);
  if (sVar6 == 0) {
    sVar6 = 0;
  }
  else if ((short)plVar9[3] != 0 || *(short *)((long)plVar9 + 0x16) != 0) {
    iVar4 = (int)*(short *)((long)plVar9 + 0x16) + (int)sVar6;
    iVar1 = (int)(short)iVar4;
    iVar2 = (int)(short)((short)plVar9[3] + sVar6);
    if (iVar4 < 1) {
      iVar1 = 1;
    }
    if (iVar2 != iVar1) {
      lVar8 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
      *(long *)PTR_DAT_02712b80 = lVar8;
      iVar2 = (1 - iVar1) + iVar2;
      sVar6 = 0;
      uVar7 = (ulong)lVar8 >> 0x21;
      if (iVar2 != 0) {
        sVar6 = (short)((int)(uint)uVar7 / iVar2);
      }
      sVar6 = ((short)uVar7 - sVar6 * (short)iVar2) + (short)iVar1;
    }
  }
  goto LAB_00417018;
}


