/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac7a0; name: FUN_006ac7a0
 */


void FUN_006ac7a0(long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  long *local_a8;
  int local_9c;
  long local_98;
  ulong local_90;
  char *pcStack_88;
  size_t local_80;
  long local_78;
  int *local_70;
  long local_68;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar13 = param_1 + 2;
  *plVar13 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = lVar5;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3e19999a3d4ccccd;
  if (((*param_1 != 0) && (piVar6 = (int *)param_1[1], piVar6 != (int *)0x0)) &&
     ((4 < *(ushort *)((long)piVar6 - (long)*piVar6) &&
      ((uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar7 != 0 &&
       (puVar1 = (uint *)((long)piVar6 + uVar7), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
       *puVar1 != 0)))))) {
    FUN_006acbc0(plVar13);
    local_68 = *(long *)(*param_1 + 0x350);
    puVar14 = puVar1 + 1;
    if ((ulong)*puVar1 == 0) {
      lVar5 = *plVar13;
      lVar9 = param_1[3];
      if (lVar5 != lVar9) goto LAB_006acb1c;
    }
    else {
      puVar1 = puVar14 + *puVar1;
      do {
        local_a8 = param_1 + 3;
        local_70 = (int *)((long)puVar14 + (ulong)*puVar14);
        if ((*(ushort *)((long)local_70 - (long)*local_70) < 5) ||
           (uVar7 = (ulong)((ushort *)((long)local_70 - (long)*local_70))[2], uVar7 == 0)) {
          lVar5 = 0;
        }
        else {
          puVar2 = (uint *)((long)local_70 + uVar7);
          lVar5 = (long)puVar2 + (ulong)*puVar2;
        }
        local_80 = strlen((char *)(lVar5 + 4));
        lVar9 = local_68;
        bVar3 = *(byte *)(lVar5 + 4);
        local_90 = 0xcbf29ce484222645;
        if (bVar3 != 0) {
          pbVar8 = (byte *)(lVar5 + 5);
          do {
            local_90 = (local_90 ^ bVar3) * 0x100000001b3;
            bVar3 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar3 != 0);
        }
        local_78 = 0;
        pcStack_88 = (char *)(lVar5 + 4);
        iVar4 = FUN_00722fb0(local_68,&local_90);
        if (iVar4 < 0) {
          local_98 = 0;
        }
        else {
          local_98 = *(long *)(lVar9 + 0x1b8) + (long)iVar4 * 0x130;
          if (local_98 != 0) {
            lVar5 = *(long *)(local_68 + 0x1b8);
            local_9c = *(int *)(*(long *)(*(long *)(lVar9 + 0x1b8) + (long)iVar4 * 0x130 + 0x128) +
                               0x40);
            lVar9 = (long)((int)((ulong)(*(long *)(local_68 + 0x1c0) - lVar5) >> 4) * 0x286bca1b);
            lVar12 = (long)local_9c;
            if ((lVar12 + 1 < lVar9) &&
               (local_9c <= *(int *)(*(long *)(lVar5 + (lVar12 + 1) * 0x130 + 0x128) + 0x44))) {
              lVar10 = 0;
              plVar11 = (long *)(lVar5 + lVar12 * 0x130 + 0x388);
              do {
                if (lVar9 <= lVar12 + 2 + lVar10) {
                  local_9c = local_9c + (int)lVar10 + 1;
                  uVar7 = param_1[3];
                  if (uVar7 < (ulong)param_1[4]) goto LAB_006aca34;
                  goto LAB_006ac8e0;
                }
                lVar5 = *plVar11;
                plVar11 = plVar11 + 0x26;
                lVar10 = lVar10 + 1;
              } while (local_9c <= *(int *)(lVar5 + 0x44));
              local_9c = local_9c + (int)lVar10;
            }
            uVar7 = param_1[3];
            if (uVar7 < (ulong)param_1[4]) {
LAB_006aca34:
              lVar9 = param_1[5];
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              FUN_006ad150(uVar7,local_98,local_68,local_9c,local_70);
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
              *local_a8 = *local_a8 + 0xf0;
            }
            else {
LAB_006ac8e0:
              FUN_006acf30(plVar13,&local_98,&local_68,&local_9c,&local_70);
            }
          }
        }
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar1);
      lVar5 = *plVar13;
      lVar9 = *local_a8;
      if (lVar5 != lVar9) {
LAB_006acb1c:
        lVar12 = lVar5;
        lVar10 = lVar9;
        if (lVar5 == lVar9) goto joined_r0x006acb98;
LAB_006acb2c:
        if (((lVar5 == lVar12) || (*(long *)(lVar12 + 0xe0) != 0)) ||
           (*(int *)(*(long *)(*(long *)(lVar5 + 8) + 0x128) + 0x44) !=
            *(int *)(*(long *)(*(long *)(lVar12 + 8) + 0x128) + 0x40))) goto LAB_006acb5c;
        *(long *)(lVar5 + 0xd8) = lVar12;
        *(long *)(lVar12 + 0xe0) = lVar5;
        goto joined_r0x006acb98;
      }
    }
  }
  return;
LAB_006acb5c:
  lVar12 = lVar12 + 0xf0;
  if (lVar10 == lVar12) {
joined_r0x006acb98:
    do {
      lVar5 = lVar5 + 0xf0;
      if (lVar5 == lVar9) {
        return;
      }
      lVar12 = *plVar13;
      lVar10 = param_1[3];
    } while (lVar12 == lVar10);
  }
  goto LAB_006acb2c;
}


