/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144c410; name: FUN_0144c410
 */


int FUN_0144c410(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int local_304 [169];
  
  puVar2 = PTR_DAT_02710798;
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  iVar15 = 0;
  iVar10 = 0;
  do {
    pbVar5 = (byte *)FUN_0152d900(lVar9,iVar10);
    if (((*pbVar5 < 6 && (1 << (ulong)(*pbVar5 & 0x1f) & 0x31U) != 0) &&
        (iVar3 = FUN_01451b60(param_1,iVar10), iVar3 == 3)) &&
       (iVar3 = FUN_01451d20(param_1,iVar10), iVar3 == param_2)) {
      lVar11 = *(long *)(*(long *)puVar2 + 0x268);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar6 = FUN_01457550();
      lVar7 = FUN_0152d900(lVar11,iVar10);
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      if (0x2a300 < lVar6 - lVar7) {
        lVar11 = *(long *)(*(long *)puVar2 + 0x268);
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        uVar13 = 0;
        do {
          pbVar5 = (byte *)FUN_0152d900(lVar11,uVar13);
          if ((5 < *pbVar5 || (1 << (ulong)(*pbVar5 & 0x1f) & 0x31U) == 0) &&
             (iVar3 = FUN_01452100(param_1,uVar13), iVar3 + -1 == iVar10)) {
            bVar12 = true;
            goto joined_r0x0144c478;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0xa7);
        bVar12 = false;
joined_r0x0144c478:
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
        }
        if (!bVar12) {
          local_304[iVar15] = iVar10;
          iVar15 = iVar15 + 1;
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xa7);
  iVar10 = 0;
  if (((iVar15 != 0) && (0 < iVar15)) && (0 < param_3)) {
    iVar10 = 0;
    iVar3 = iVar15 + -1;
    if (iVar3 == 0 || iVar15 < 1) {
      while (iVar4 = FUN_0152e200(lVar9,iVar3), -1 < local_304[iVar4]) {
        FUN_0144bfe0(param_1);
        iVar10 = iVar10 + 1;
        local_304[iVar4] = -1;
        if ((iVar15 <= iVar10) || (param_3 <= iVar10)) break;
      }
    }
    else {
      do {
        iVar4 = FUN_0152e200(lVar9,iVar3);
        piVar14 = local_304 + iVar4;
        if (*piVar14 < 0) {
          iVar8 = 1;
          while( true ) {
            iVar1 = 0;
            if (iVar15 != 0) {
              iVar1 = (iVar4 + iVar8) / iVar15;
            }
            iVar1 = (iVar4 + iVar8) - iVar1 * iVar15;
            if (-1 < local_304[iVar1]) break;
            iVar8 = iVar8 + 1;
            if (iVar15 <= iVar8) goto LAB_0144c698;
          }
          piVar14 = local_304 + iVar1;
        }
        FUN_0144bfe0(param_1);
        iVar10 = iVar10 + 1;
        *piVar14 = -1;
      } while ((iVar10 < iVar15) && (iVar10 < param_3));
    }
  }
LAB_0144c698:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return iVar10;
}


