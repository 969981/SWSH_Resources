/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488420; name: FUN_00488420
 */


/* WARNING: Removing unreachable block (ram,0x00488840) */

void FUN_00488420(long *param_1,undefined8 param_2,float *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float local_54;
  
  if ((ulong *)param_1[7] == (ulong *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar4 = 0;
LAB_0048846c:
    iVar3 = (int)uVar4;
    if ((uVar4 == 0) && (uVar9 == 0)) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)param_1[7];
    uVar4 = uVar6 >> 0x14 & 1;
    iVar3 = (int)uVar4;
    uVar10 = (uint)(uVar6 >> 0x15) & 1;
    uVar9 = (uint)(uVar6 >> 0x16) & 1;
    if ((uVar6 >> 0x15 & 1) == 0) goto LAB_0048846c;
  }
  local_54 = 0.0;
  plVar1 = param_1 + 6;
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  if (iVar3 != 0) {
    plVar2 = param_1 + 3;
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,0x14);
    fVar12 = 0.0;
    if (((((uVar4 & 1) != 0) && (uVar4 = FUN_004b3450(plVar2), (uVar4 & 1) != 0)) &&
        (uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,0x14), (uVar4 & 1) != 0)) &&
       ((plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2), plVar2 != (long *)0x0 &&
        (lVar5 = *plVar2, lVar5 != 0)))) {
      fVar12 = 0.0;
      do {
        puVar7 = *(ushort **)(lVar5 + 0x20);
        if (puVar7 != (ushort *)0x0) {
          uVar4 = 0;
          pfVar8 = (float *)((long)puVar7 + ((ulong)((uint)*puVar7 * 2 + 5) & 0x3fffc));
          do {
            if (puVar7[uVar4 + 1] == 0x14) {
              if (pfVar8 != (float *)0x0) {
                fVar12 = *pfVar8 + fVar12;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            pfVar8 = pfVar8 + 4;
          } while (uVar4 < *puVar7);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
      } while (lVar5 != 0);
    }
    if ((param_1[7] != 0) && ((*(byte *)(param_1[7] + 2) >> 4 & 1) != 0)) {
      fVar11 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,plVar1,0x14,param_2);
      fVar12 = fVar11 + fVar12;
    }
    *param_3 = fVar12;
    uVar4 = (**(code **)(*param_1 + 0x100))(param_1,&local_54);
    if ((uVar4 & 1) != 0) {
      *param_3 = DAT_01d4c4d4 * local_54 * *param_3;
    }
  }
  if (uVar10 != 0) {
    plVar2 = param_1 + 3;
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,0x15);
    fVar12 = 0.0;
    if (((((uVar4 & 1) != 0) && (uVar4 = FUN_004b3450(plVar2), (uVar4 & 1) != 0)) &&
        (uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,0x15), (uVar4 & 1) != 0)) &&
       ((plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2), plVar2 != (long *)0x0 &&
        (lVar5 = *plVar2, lVar5 != 0)))) {
      fVar12 = 0.0;
      do {
        puVar7 = *(ushort **)(lVar5 + 0x20);
        if (puVar7 != (ushort *)0x0) {
          uVar4 = 0;
          pfVar8 = (float *)((long)puVar7 + ((ulong)((uint)*puVar7 * 2 + 5) & 0x3fffc));
          do {
            if (puVar7[uVar4 + 1] == 0x15) {
              if (pfVar8 != (float *)0x0) {
                fVar12 = *pfVar8 + fVar12;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            pfVar8 = pfVar8 + 4;
          } while (uVar4 < *puVar7);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
      } while (lVar5 != 0);
    }
    if ((param_1[7] != 0) && ((*(byte *)(param_1[7] + 2) >> 5 & 1) != 0)) {
      fVar11 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,plVar1,0x15,param_2);
      fVar12 = fVar11 + fVar12;
    }
    param_3[2] = fVar12;
    if (local_54 == 0.0) {
      uVar4 = (**(code **)(*param_1 + 0x100))(param_1,&local_54);
      if ((uVar4 & 1) == 0) goto LAB_004886dc;
      fVar12 = param_3[2];
    }
    param_3[2] = DAT_01d4c4d4 * local_54 * fVar12;
  }
LAB_004886dc:
  if (uVar9 != 0) {
    plVar2 = param_1 + 3;
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,0x16);
    fVar12 = 0.0;
    if (((((uVar4 & 1) != 0) && (uVar4 = FUN_004b3450(plVar2), (uVar4 & 1) != 0)) &&
        (uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,0x16), (uVar4 & 1) != 0)) &&
       ((plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2), plVar2 != (long *)0x0 &&
        (lVar5 = *plVar2, lVar5 != 0)))) {
      fVar12 = 0.0;
      do {
        puVar7 = *(ushort **)(lVar5 + 0x20);
        if (puVar7 != (ushort *)0x0) {
          uVar4 = 0;
          pfVar8 = (float *)((long)puVar7 + ((ulong)((uint)*puVar7 * 2 + 5) & 0x3fffc));
          do {
            if (puVar7[uVar4 + 1] == 0x16) {
              if (pfVar8 != (float *)0x0) {
                fVar12 = *pfVar8 + fVar12;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            pfVar8 = pfVar8 + 4;
          } while (uVar4 < *puVar7);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
      } while (lVar5 != 0);
    }
    if ((param_1[7] != 0) && ((*(byte *)(param_1[7] + 2) >> 6 & 1) != 0)) {
      fVar11 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,plVar1,0x16,param_2);
      fVar12 = fVar11 + fVar12;
    }
    param_3[1] = fVar12;
    if (local_54 == 0.0) {
      uVar4 = (**(code **)(*param_1 + 0x100))(param_1,&local_54);
      if ((uVar4 & 1) == 0) {
        return;
      }
      fVar12 = param_3[1];
    }
    param_3[1] = DAT_01d4c4d4 * local_54 * fVar12;
  }
  return;
}


