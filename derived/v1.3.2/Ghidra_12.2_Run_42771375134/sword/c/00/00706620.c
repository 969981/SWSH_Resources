/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00706620; name: FUN_00706620
 */


void FUN_00706620(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  plVar11 = (long *)param_1[2];
  if (plVar11 != (long *)param_1[3]) goto LAB_00706808;
  plVar7 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if (plVar7 <= plVar6 && (long)plVar6 - (long)plVar7 != 0) {
    lVar2 = (long)plVar6 - (long)plVar7 >> 3;
    lVar3 = lVar2 + 2;
    if (-1 < lVar2 + 1) {
      lVar3 = lVar2 + 1;
    }
    lVar3 = lVar3 >> 1;
    if (plVar6 == plVar11) {
      plVar6 = plVar6 + -lVar3;
    }
    else {
      do {
        if (plVar6[-lVar3] != 0) {
          (**(code **)(*(long *)(plVar6[-lVar3] + 0x48) + 0x18))();
          plVar6[-lVar3] = 0;
        }
        lVar2 = *plVar6;
        *plVar6 = 0;
        plVar6[-lVar3] = lVar2;
        plVar6 = plVar6 + 1;
      } while (plVar11 != plVar6);
      plVar11 = (long *)param_1[1];
      plVar6 = plVar6 + -lVar3;
    }
    param_1[1] = (long)(plVar11 + -lVar3);
    param_1[2] = (long)plVar6;
    goto LAB_00706808;
  }
  lVar3 = param_1[3] - (long)plVar7;
  puVar8 = (undefined8 *)param_1[4];
  uVar4 = lVar3 >> 2;
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    lVar3 = 0;
    plVar7 = (long *)0x0;
    if (plVar6 == plVar11) goto LAB_0070679c;
LAB_00706718:
    puVar1 = PTR_DAT_02710860;
    plVar12 = plVar7;
    do {
      uVar10 = *puVar8;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00706884;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar5 = *plVar6;
      plVar9 = plVar6 + 1;
      *plVar6 = 0;
      plVar13 = plVar12 + 1;
      *plVar12 = lVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      plVar6 = plVar9;
      plVar12 = plVar13;
    } while (plVar11 != plVar9);
    plVar11 = (long *)param_1[2];
    plVar6 = (long *)param_1[1];
  }
  else {
    lVar3 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,uVar4 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*puVar8 + 0xb8))();
    }
    plVar6 = (long *)param_1[1];
    plVar11 = (long *)param_1[2];
    plVar7 = (long *)(lVar3 + (uVar4 >> 2) * 8);
    if (plVar6 != plVar11) goto LAB_00706718;
LAB_0070679c:
    plVar13 = plVar7;
    plVar6 = plVar11;
  }
  lVar5 = *param_1;
  *param_1 = lVar3;
  param_1[1] = (long)plVar7;
  lVar2 = param_1[3];
  param_1[2] = (long)plVar13;
  param_1[3] = lVar3 + uVar4 * 8;
  if (plVar11 != plVar6) {
    do {
      plVar7 = plVar11 + -1;
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        plVar11[-1] = 0;
      }
      plVar11 = plVar7;
    } while (plVar6 != plVar7);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)*puVar8 + 0x18))((long *)*puVar8,lVar5,lVar2 - lVar5,8);
  }
LAB_00706808:
  uVar10 = *(undefined8 *)param_1[4];
  puVar8 = (undefined8 *)param_1[2];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar10 = *param_2;
    *param_2 = 0;
    *puVar8 = uVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB_00706884:
                    /* WARNING: Subroutine does not return */
  abort();
}


