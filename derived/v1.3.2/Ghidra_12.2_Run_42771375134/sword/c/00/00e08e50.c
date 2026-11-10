/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e08e50; name: FUN_00e08e50
 */


void FUN_00e08e50(ulong *param_1,long param_2,long *param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar12 = 0xcbf29ce484222645;
  *param_1 = 0xcbf29ce484222645;
  param_1[1] = (ulong)&DAT_01d38550;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar10 = (uint *)0x0;
  param_1[4] = 0xcbf29ce484222645;
  param_1[5] = (ulong)&DAT_01d38550;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xcbf29ce484222645;
  param_1[9] = (ulong)&DAT_01d38550;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xcbf29ce484222645;
  param_1[0xd] = (ulong)&DAT_01d38550;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar7 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
    uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
    if (uVar9 == 0) {
      puVar10 = (uint *)0x0;
      uVar4 = uRam0000000000000000;
      goto joined_r0x00e08eec;
    }
    puVar10 = (uint *)((long)piVar1 + uVar9);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
  }
  uVar4 = *puVar10;
joined_r0x00e08eec:
  if (uVar4 != 0) {
    uVar9 = 0;
    puVar10 = puVar10 + 6;
    do {
      uVar13 = (ulong)puVar10[-5];
      lVar14 = uVar13 - (long)*(int *)((long)puVar10 + (uVar13 - 0x14));
      uVar3 = *(ushort *)((long)puVar10 + lVar14 + -0x14);
      if ((uVar3 < 5) || (uVar11 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -0x10), uVar11 == 0))
      {
        if (*param_3 == 0) goto LAB_00e08f5c;
      }
      else if (*param_3 == *(long *)((long)puVar10 + uVar13 + uVar11 + -0x14)) {
LAB_00e08f5c:
        if ((uVar3 < 7) || (uVar9 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -0xe), uVar9 == 0))
        {
          lVar15 = 0;
        }
        else {
          lVar15 = (long)puVar10 +
                   uVar9 + *(uint *)((long)puVar10 + uVar9 + uVar13 + -0x14) + uVar13 + -0x14;
        }
        sVar5 = strlen((char *)(lVar15 + 4));
        bVar2 = *(byte *)(lVar15 + 4);
        uVar9 = 0xcbf29ce484222645;
        if (bVar2 != 0) {
          uVar9 = 0xcbf29ce484222645;
          pbVar8 = (byte *)(lVar15 + 5);
          do {
            uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != 0);
        }
        lVar16 = 0;
        *param_1 = uVar9;
        param_1[1] = (ulong)(lVar15 + 4);
        param_1[2] = sVar5;
        param_1[3] = 0;
        if (8 < uVar3) {
          uVar9 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -0xc);
          if (uVar9 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = (long)puVar10 +
                     uVar9 + *(uint *)((long)puVar10 + uVar9 + uVar13 + -0x14) + uVar13 + -0x14;
          }
        }
        sVar5 = strlen((char *)(lVar16 + 4));
        bVar2 = *(byte *)(lVar16 + 4);
        uVar9 = 0xcbf29ce484222645;
        if (bVar2 != 0) {
          uVar9 = 0xcbf29ce484222645;
          pbVar8 = (byte *)(lVar16 + 5);
          do {
            uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != 0);
        }
        lVar15 = 0;
        param_1[4] = uVar9;
        param_1[5] = (ulong)(lVar16 + 4);
        param_1[6] = sVar5;
        param_1[7] = 0;
        if (10 < uVar3) {
          uVar9 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -10);
          if (uVar9 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = (long)puVar10 +
                     uVar9 + *(uint *)((long)puVar10 + uVar9 + uVar13 + -0x14) + uVar13 + -0x14;
          }
        }
        sVar5 = strlen((char *)(lVar15 + 4));
        bVar2 = *(byte *)(lVar15 + 4);
        uVar9 = 0xcbf29ce484222645;
        if (bVar2 != 0) {
          uVar9 = 0xcbf29ce484222645;
          pbVar8 = (byte *)(lVar15 + 5);
          do {
            uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != 0);
        }
        lVar16 = 0;
        param_1[8] = uVar9;
        param_1[9] = (ulong)(lVar15 + 4);
        param_1[10] = sVar5;
        param_1[0xb] = 0;
        if (0xc < uVar3) {
          uVar9 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -8);
          if (uVar9 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = (long)puVar10 +
                     uVar9 + *(uint *)((long)puVar10 + uVar9 + uVar13 + -0x14) + uVar13 + -0x14;
          }
        }
        sVar5 = strlen((char *)(lVar16 + 4));
        bVar2 = *(byte *)(lVar16 + 4);
        if (bVar2 != 0) {
          pbVar8 = (byte *)(lVar16 + 5);
          do {
            uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != 0);
        }
        param_1[0xc] = uVar12;
        param_1[0xd] = (ulong)(lVar16 + 4);
        param_1[0xe] = sVar5;
        param_1[0xf] = 0;
        if (uVar3 < 0xf) {
          *(undefined4 *)(param_1 + 0x10) = 0;
LAB_00e091bc:
          *(undefined4 *)((long)param_1 + 0x84) = 0;
        }
        else {
          uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -6);
          iVar6 = 0;
          if (uVar12 != 0) {
            iVar6 = (int)*(short *)((long)puVar10 + uVar12 + uVar13 + -0x14);
          }
          *(int *)(param_1 + 0x10) = iVar6;
          if (uVar3 < 0x11) goto LAB_00e091bc;
          uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -4);
          iVar6 = 0;
          if (uVar12 != 0) {
            iVar6 = (int)*(short *)((long)puVar10 + uVar12 + uVar13 + -0x14);
          }
          *(int *)((long)param_1 + 0x84) = iVar6;
          if (0x12 < uVar3) {
            uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar14 + -2);
            iVar6 = 0;
            if (uVar12 != 0) {
              iVar6 = (int)*(short *)((long)puVar10 + uVar12 + uVar13 + -0x14);
            }
            *(int *)(param_1 + 0x11) = iVar6;
            if (uVar3 < 0x15) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0;
              if ((ulong)*(ushort *)((long)puVar10 + lVar14) != 0) {
                iVar6 = (int)*(short *)((long)puVar10 +
                                       *(ushort *)((long)puVar10 + lVar14) + uVar13 + -0x14);
              }
            }
            goto LAB_00e091c8;
          }
        }
        iVar6 = 0;
        *(undefined4 *)(param_1 + 0x11) = 0;
LAB_00e091c8:
        *(int *)((long)param_1 + 0x8c) = iVar6;
        return;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 < uVar4);
  }
  return;
}


