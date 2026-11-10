/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ce540; name: FUN_004ce540
 */


/* WARNING: Removing unreachable block (ram,0x004ce6c4) */
/* WARNING: Removing unreachable block (ram,0x004ce664) */

undefined8 FUN_004ce540(long param_1,long *param_2,long *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*(long *)(param_1 + 0xb0) == 0) || (*(long *)(param_1 + 0x160) == 0)) {
    memcpy((void *)*param_3,
           (void *)(*param_2 + (ulong)param_4 * (ulong)*(ushort *)(param_2 + 2) * 4),
           (ulong)*(ushort *)((long)param_2 + 0x12) << 2);
    return 0;
  }
  if (*(char *)(param_1 + 0x17d) == '\0') {
    uVar5 = FUN_004ce820(param_2,param_3,param_1 + 0x170,param_1 + 0x10,param_4);
    cVar3 = *(char *)(param_1 + 0x18d);
  }
  else {
    uVar4 = *(ushort *)((long)param_2 + 0x12);
    uVar11 = (ulong)uVar4;
    if (uVar11 < 2) {
      uVar5 = 0;
      cVar3 = *(char *)(param_1 + 0x18d);
    }
    else {
      if (*(char *)(param_1 + 0x17e) == '\0') {
        *(undefined1 *)(param_1 + 0x17e) = 1;
        lVar12 = (ulong)param_4 * 4;
        pfVar9 = (float *)(*(long *)(param_1 + 0xb0) + (ulong)param_4 * 0x10);
        fVar13 = pfVar9[2] - *pfVar9;
        lVar6 = *param_2 + lVar12 * (ulong)*(ushort *)(param_2 + 2);
        lVar7 = *param_3;
        if (uVar4 == 1) {
          lVar8 = 0;
        }
        else {
          fVar14 = fVar13 / (float)uVar4;
          lVar8 = 0;
          pfVar9 = (float *)(lVar6 + 4);
          pfVar10 = (float *)(lVar7 + 4);
          do {
            fVar15 = fVar13 + fVar14;
            pfVar10[-1] = pfVar9[-1] - fVar13;
            fVar13 = fVar15 + fVar14;
            lVar8 = lVar8 + 2;
            *pfVar10 = *pfVar9 - fVar15;
            pfVar9 = pfVar9 + 2;
            pfVar10 = pfVar10 + 2;
          } while (uVar11 - (uVar11 & 1) != lVar8);
          if ((uVar4 & 1) == 0) goto LAB_004ce7a8;
        }
        *(float *)(lVar7 + lVar8 * 4) = *(float *)(lVar6 + lVar8 * 4) - fVar13;
      }
      else {
        lVar12 = (ulong)param_4 * 4;
        memcpy((void *)*param_3,(void *)(*param_2 + lVar12 * (ulong)*(ushort *)(param_2 + 2)),
               uVar11 << 2);
      }
LAB_004ce7a8:
      puVar1 = (undefined4 *)
               (*param_2 + lVar12 * (ulong)*(ushort *)(param_2 + 2) + (ulong)(uVar4 - 2) * 4);
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (ulong)(param_4 & 0xffff) * 0x10);
      puVar2[2] = puVar1[1];
      puVar2[3] = *puVar1;
      *puVar2 = puVar1[1];
      uVar5 = 0;
      puVar2[1] = *puVar1;
      cVar3 = *(char *)(param_1 + 0x18d);
    }
  }
  if (cVar3 == '\0') {
    uVar5 = FUN_004ceae0(param_3,param_1 + 0x180,param_1 + 0xc0,param_4);
    return uVar5;
  }
  uVar4 = *(ushort *)((long)param_3 + 0x12);
  uVar11 = (ulong)uVar4;
  if (uVar11 < 2) {
    return uVar5;
  }
  if (*(char *)(param_1 + 0x18e) == '\0') {
    *(undefined1 *)(param_1 + 0x18e) = 1;
    lVar6 = *param_3;
    pfVar9 = (float *)(*(long *)(param_1 + 0x160) + (ulong)param_4 * 0x10);
    fVar13 = pfVar9[2] - *pfVar9;
    if (uVar4 == 1) {
      lVar7 = 0;
    }
    else {
      fVar14 = fVar13 / (float)uVar4;
      lVar7 = 0;
      do {
        pfVar9 = (float *)(lVar6 + lVar7 * 4);
        fVar15 = fVar13 - fVar14;
        lVar7 = lVar7 + 2;
        *pfVar9 = *pfVar9 + fVar13;
        pfVar9[1] = pfVar9[1] + fVar15;
        fVar13 = fVar15 - fVar14;
      } while (uVar11 - (uVar11 & 1) != lVar7);
      if ((uVar4 & 1) == 0) goto LAB_004ce714;
    }
    *(float *)(lVar6 + lVar7 * 4) = *(float *)(lVar6 + lVar7 * 4) + fVar13;
  }
LAB_004ce714:
  puVar1 = (undefined4 *)(*param_3 + (ulong)(uVar4 - 2) * 4);
  puVar2 = (undefined4 *)(*(long *)(param_1 + 0x160) + (ulong)(param_4 & 0xffff) * 0x10);
  puVar2[2] = puVar1[1];
  puVar2[3] = *puVar1;
  *puVar2 = puVar1[1];
  puVar2[1] = *puVar1;
  return uVar5;
}


