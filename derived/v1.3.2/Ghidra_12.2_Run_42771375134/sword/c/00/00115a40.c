/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00115a40; name: FUN_00115a40
 */


void FUN_00115a40(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint *puVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  uint local_48 [2];
  uint local_34;
  
  uVar5 = param_2 * 2;
  uVar2 = *(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x50) <= uVar5 + 2) {
    uVar2 = uVar5 + 2;
  }
  local_48[0] = 0xffffffff;
  local_48[1] = 0xffffffff;
  FUN_00115df0(param_1 + 0x48,uVar2,local_48);
  uVar2 = param_2 << 1 | 1;
  uVar13 = (ulong)uVar2;
  lVar9 = *(long *)(param_1 + 0x38);
  uVar4 = *(uint *)(**(long **)(param_1 + 0x240) + uVar13 * 4);
  uVar6 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)uVar5 * 4) >> 6;
  bVar11 = 1;
  if (uVar6 == 0x3ffffff) {
    bVar8 = false;
    if (uVar4 >> 6 != 0x3ffffff) {
LAB_00115b2c:
      puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)(uVar4 >> 6) * 0x20);
      uVar5 = *puVar1;
      lVar10 = *(long *)(param_1 + 0x48);
      *(uint *)(lVar10 + uVar13 * 8) = uVar5;
      if (uVar5 != 0xffffffff) {
        *(uint *)(lVar10 + (ulong)uVar5 * 8 + 4) = uVar2;
      }
      *puVar1 = uVar2;
      *(undefined4 *)(lVar10 + uVar13 * 8 + 4) = 0xffffffff;
      if ((bVar8 == false) && (((byte)puVar1[1] >> 1 & 1) == 0)) {
        bVar8 = (bool)((byte)puVar1[1] >> 5 & 1);
      }
      else {
        bVar8 = true;
      }
      bVar7 = bVar11 != 0;
      bVar11 = 0;
      if (bVar7) {
        if (bVar8 == false) {
          return;
        }
        bVar11 = (byte)puVar1[1] >> 2 & 1;
        puVar1 = (uint *)(lVar9 + (ulong)param_2 * 0x10);
        uVar2 = *puVar1;
        goto joined_r0x00115bb8;
      }
    }
  }
  else {
    puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar6 * 0x20);
    uVar3 = *puVar1;
    lVar10 = *(long *)(param_1 + 0x48);
    *(uint *)(lVar10 + (ulong)uVar5 * 8) = uVar3;
    if (uVar3 != 0xffffffff) {
      *(uint *)(lVar10 + (ulong)uVar3 * 8 + 4) = uVar5;
    }
    *puVar1 = uVar5;
    *(undefined4 *)(lVar10 + (ulong)uVar5 * 8 + 4) = 0xffffffff;
    bVar8 = ((byte)puVar1[1] & 0x22) != 0;
    bVar11 = (byte)puVar1[1] >> 2 & 1;
    if (uVar6 != uVar4 >> 6 && uVar4 >> 6 != 0x3ffffff) goto LAB_00115b2c;
  }
  if (bVar8 == false) {
    return;
  }
  puVar1 = (uint *)(lVar9 + (ulong)param_2 * 0x10);
  uVar2 = *puVar1;
joined_r0x00115bb8:
  uVar13 = (ulong)uVar2;
  if ((bVar11 == 0) || (uVar2 == 0)) {
    puVar15 = puVar1 + 1;
    *(ushort *)puVar15 = (ushort)*puVar15 | 0x40;
    lVar9 = param_1 + uVar13 * 0x10;
    puVar12 = (uint *)(lVar9 + 0xb0);
    local_34 = param_2;
    if (*puVar12 < (*(uint *)(lVar9 + 0xb4) & 0x7fffffff)) {
      *(uint *)(*(long *)(lVar9 + 0xa8) + (ulong)*puVar12 * 4) = param_2;
      *puVar12 = *puVar12 + 1;
    }
    else {
      FUN_001b4230((long *)(lVar9 + 0xa8),&local_34);
      uVar13 = (ulong)*puVar1;
    }
    lVar9 = param_1 + uVar13 * 4;
    *(int *)(lVar9 + 200) = *(int *)(lVar9 + 200) + 1;
    if ((int)uVar13 == 0) {
      lVar9 = (ulong)(local_34 >> 5) * 4;
      *(uint *)(*(long *)(param_1 + 0x110) + lVar9) =
           *(uint *)(*(long *)(param_1 + 0x110) + lVar9) | 1 << ((ulong)local_34 & 0x1f);
    }
    local_48[0] = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_34 << 1) * 4);
    if (local_48[0] >> 6 != 0x3ffffff) {
      uVar2 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_34 << 1 | 1) * 4);
      if (uVar2 >> 6 != 0x3ffffff) {
        lVar10 = *(long *)(param_1 + 0x18);
        uVar13 = (ulong)(local_48[0] >> 6);
        lVar9 = lVar10 + uVar13 * 0x20;
        piVar16 = (int *)(lVar9 + 0x10);
        iVar14 = *piVar16;
        if (iVar14 == 0) {
          if ((*(byte *)(lVar9 + 4) & 0x26) == 4) {
            if (*(int *)(*(long *)(param_1 + 0x28) + uVar13 * 4) == 0x3ffffff) {
              *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar13 * 4) =
                   *(undefined4 *)(param_1 + 0xa0);
              if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
                *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) =
                     local_48[0];
                *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
              }
              else {
                FUN_00114650(param_1 + 0x98,local_48);
                lVar10 = *(long *)(param_1 + 0x18);
              }
            }
            iVar14 = *piVar16;
          }
          else {
            iVar14 = 0;
          }
        }
        *piVar16 = iVar14 + 1;
        uVar13 = (ulong)(uVar2 >> 6);
        lVar10 = lVar10 + uVar13 * 0x20;
        piVar16 = (int *)(lVar10 + 0x10);
        iVar14 = *piVar16;
        if (iVar14 == 0) {
          if ((*(byte *)(lVar10 + 4) & 0x26) == 4) {
            local_48[0] = uVar2;
            if (*(int *)(*(long *)(param_1 + 0x28) + uVar13 * 4) == 0x3ffffff) {
              *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar13 * 4) =
                   *(undefined4 *)(param_1 + 0xa0);
              if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
                *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) = uVar2;
                *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
              }
              else {
                FUN_00114650(param_1 + 0x98,local_48);
              }
            }
            iVar14 = *piVar16;
          }
          else {
            iVar14 = 0;
          }
        }
        *piVar16 = iVar14 + 1;
      }
    }
    *(ushort *)puVar15 = (ushort)*puVar15 | 4;
  }
  return;
}


