/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecabe0; name: FUN_00ecabe0
 */


void FUN_00ecabe0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long local_48;
  
  lVar8 = *(long *)PTR_DAT_027194d8;
  if ((*(long *)(param_1 + 0x60) == 0) || (*(int *)(*(long *)(param_1 + 0x60) + 0x54) == 0)) {
    plVar10 = *(long **)(lVar8 + 0xb8);
    for (plVar9 = *(long **)(lVar8 + 0xb0); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      plVar5 = (long *)*plVar9;
      uVar3 = FUN_015b5320(plVar5 + 10);
      if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar9 + 0x88))(), (uVar3 & 1) == 0)
         ) {
        (**(code **)(*plVar5 + 0x10))(&local_48,plVar5);
        if (*(long *)(param_1 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x60) = 0;
        }
        *(long *)(param_1 + 0x60) = local_48;
        goto joined_r0x00ecaccc;
      }
    }
  }
  else {
    local_48 = *(long *)(param_1 + 0x60);
joined_r0x00ecaccc:
    if ((local_48 == 0) || (lVar6 = *(long *)(local_48 + 0x60), lVar6 == 0)) {
      lVar6 = 0;
      plVar9 = *(long **)(lVar8 + 0xb0);
      plVar10 = *(long **)(lVar8 + 0xb8);
      if (plVar9 == plVar10) {
        return;
      }
    }
    else {
      uVar3 = FUN_0156b540(lVar6);
      lVar6 = lVar6 + -0x50;
      if ((uVar3 & 1) == 0) {
        lVar6 = 0;
      }
      plVar9 = *(long **)(lVar8 + 0xb0);
      plVar10 = *(long **)(lVar8 + 0xb8);
      if (plVar9 == plVar10) {
        return;
      }
    }
    fVar13 = 0.0;
    lVar7 = 0;
    do {
      while (((*(byte *)(*plVar9 + 0x38e) >> 3 & 1) == 0 ||
             (uVar3 = (**(code **)(*(long *)*plVar9 + 0x88))(), (uVar3 & 1) != 0))) {
        plVar9 = plVar9 + 1;
        if (plVar10 == plVar9) goto LAB_00ecadf8;
      }
      lVar4 = FUN_00ecaff0(*plVar9 + 0x50);
      lVar2 = lVar7;
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0x8f2) != '\0')) &&
         (((fVar11 = (float)*(undefined8 *)(lVar6 + 0xb0) - (float)*(undefined8 *)(lVar4 + 0xb0),
           fVar12 = (float)*(undefined8 *)(lVar6 + 0xb8) - (float)*(undefined8 *)(lVar4 + 0xb8),
           fVar11 = fVar11 * fVar11 + fVar12 * fVar12, lVar7 == 0 || (fVar11 < fVar13)) &&
          ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), lVar2 = lVar4, fVar13 = fVar11,
          lVar7 != 0)))) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      lVar7 = lVar2;
      plVar9 = plVar9 + 1;
    } while (plVar10 != plVar9);
LAB_00ecadf8:
    if (lVar7 != 0) {
      if ((*(long *)(param_1 + 0x68) != -0x340d631b7bddd9bb) &&
         (*(long *)(lVar7 + 0x1a0) != *(long *)(param_1 + 0x68))) {
        plVar10 = *(long **)(lVar8 + 0xb8);
        for (plVar9 = *(long **)(lVar8 + 0xb0); plVar9 != plVar10; plVar9 = plVar9 + 1) {
          lVar8 = FUN_00ecaff0(*plVar9 + 0x50);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0x1a0) == *(long *)(param_1 + 0x68))) &&
             (uVar3 = (**(code **)(*(long *)*plVar9 + 0x88))(), (uVar3 & 1) == 0)) {
            if ((*(int *)(lVar8 + 0xc00) == 2) || (*(int *)(lVar8 + 0xc00) == 1)) {
              *(undefined4 *)(lVar8 + 0xc00) = 3;
              iVar1 = *(int *)(lVar7 + 0xc00);
              goto joined_r0x00ecaed8;
            }
            break;
          }
        }
      }
      iVar1 = *(int *)(lVar7 + 0xc00);
joined_r0x00ecaed8:
      if (iVar1 == 0) {
        *(undefined4 *)(lVar7 + 0xc00) = 1;
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar7 + 0x1a0);
      }
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  return;
}


