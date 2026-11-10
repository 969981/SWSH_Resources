/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012dff0; name: FUN_0012dff0
 */


void FUN_0012dff0(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  undefined2 *puVar12;
  float *pfVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_160 [256];
  
  uVar6 = *(ushort *)(param_2 + 0x30);
  if ((uVar6 >> 9 & 1) == 0) {
    return;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x1c00) + 8);
  bVar4 = *(byte *)(param_2 + 0x36);
  lVar1 = lVar14 + (ulong)*(uint *)(param_2 + 0x40) * 0x20;
  lVar14 = lVar14 + (ulong)*(uint *)(param_2 + 0x44) * 0x20;
  uVar16 = (uint)*(byte *)(param_2 + 0x37);
  if (((uVar6 >> 7 & 1) == 0) && ((*(byte *)((long)param_4 + 0x1a) >> 5 & 1) == 0)) {
    if ((uVar6 >> 5 & 1) == 0) {
      bVar10 = false;
      uVar6 = (ushort)((*(uint *)(lVar14 + 0x1c) & 1) == 0) & uVar6 >> 6;
    }
    else {
      bVar10 = (*(byte *)(lVar1 + 0x1c) & 1) == 0;
      uVar6 = (ushort)((*(uint *)(lVar14 + 0x1c) & 1) == 0) & uVar6 >> 6;
    }
    if ((uVar6 == 0) && (!bVar10)) {
      uVar15 = (uint)bVar4;
      uVar2 = uVar15;
      if (bVar4 <= *(byte *)(param_2 + 0x37)) {
        uVar2 = uVar16;
      }
      if (*(char *)(param_1 + 0x1c11) == '\0') {
        bVar10 = false;
        cVar5 = *(char *)(param_4 + 3);
      }
      else {
        if (uVar15 <= uVar16) {
          uVar16 = uVar15;
        }
        bVar10 = PTR_DAT_02710c90[(ulong)uVar2 + (ulong)uVar16 * 7] != '\0';
        cVar5 = *(char *)(param_4 + 3);
      }
      if (cVar5 != '\0') {
        *(int *)(param_1 + 0x1c1c) = *(int *)(param_1 + 0x1c1c) + 1;
      }
      FUN_0012e8d0(param_4,param_3,param_1,bVar10,4 < uVar2);
      return;
    }
  }
  uVar15 = (uint)bVar4;
  uVar2 = uVar15;
  if (uVar16 <= uVar15) {
    uVar2 = uVar16;
  }
  uVar18 = (ulong)uVar2;
  uVar2 = uVar15;
  lVar8 = lVar1;
  if (uVar15 <= uVar16) {
    uVar2 = uVar16;
    lVar8 = lVar14;
    lVar14 = lVar1;
  }
  uVar17 = (ulong)uVar2;
  lVar1 = param_1 + uVar18 * 0x1c + uVar17 * 4;
  *(float *)(param_1 + 0x1be0) =
       *(float *)(*(long *)(param_1 + 0x1c08) + (ulong)*(uint *)(param_2 + 0x40) * 4) +
       *(float *)(*(long *)(param_1 + 0x1c08) + (ulong)*(uint *)(param_2 + 0x44) * 4);
  lVar3 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(param_2 + 0x18);
  if (uVar15 <= uVar16) {
    lVar3 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x10);
  }
  *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
  *(undefined4 *)(param_1 + 0x1230) = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined2 *)(param_4 + 3) = 0;
  *(undefined1 *)((long)param_4 + 0x1a) = 0;
  Hint_Prefetch(lVar3,0,0,0);
  if (*(char *)(param_1 + 0x1c11) != '\0') {
    if (PTR_DAT_02710c90[uVar17 + uVar18 * 7] != '\0') {
      uVar11 = FUN_0011ba30(param_1,param_3,lVar14,lVar8,
                            *(code **)(PTR_PTR_02710bb0 + uVar17 * 8 + uVar18 * 0x38),lVar9 + 0x28,
                            lVar3 + 0x28);
      if ((uVar11 & 1) != 0) {
        *(int *)(param_1 + 0x1c18) = *(int *)(param_1 + 0x1c18) + 1;
      }
      goto LAB_0012e20c;
    }
  }
  (**(code **)(PTR_PTR_02710bb0 + uVar17 * 8 + uVar18 * 0x38))
            (lVar9 + 0x28,lVar3 + 0x28,lVar14,lVar8,param_1 + 0x1be0,param_3,param_1 + 0x230,
             param_1 + 8);
LAB_0012e20c:
  (**(code **)(PTR_PTR_02710c98 + uVar17 * 8 + uVar18 * 0x38))(lVar9,lVar3,param_1,auStack_160);
  if ((uVar16 < uVar15) &&
     (uVar18 = (ulong)*(uint *)(param_1 + 0x1230), *(uint *)(param_1 + 0x1230) != 0)) {
    puVar12 = (undefined2 *)((ulong)auStack_160 | 2);
    pfVar13 = (float *)(param_1 + 0x238);
    do {
      pfVar13[-2] = -pfVar13[-2];
      pfVar13[-1] = -pfVar13[-1];
      uVar18 = uVar18 - 1;
      *pfVar13 = -*pfVar13;
      uVar7 = puVar12[-1];
      puVar12[-1] = *puVar12;
      *puVar12 = uVar7;
      puVar12 = puVar12 + 2;
      pfVar13 = pfVar13 + 0x10;
    } while (uVar18 != 0);
  }
  FUN_0012e780(*(undefined2 *)(param_2 + 0x30),param_4,param_1,auStack_160,4 < uVar2);
  return;
}


