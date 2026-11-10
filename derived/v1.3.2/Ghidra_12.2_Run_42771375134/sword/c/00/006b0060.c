/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b0060; name: FUN_006b0060
 */


void FUN_006b0060(long *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  uint *puVar16;
  long lVar17;
  undefined4 uVar18;
  int *local_68;
  
  FUN_006b0930();
  puVar5 = PTR_DAT_02715178;
  param_1[0xc] = param_2;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x138);
  param_1[10] = (long)(puVar5 + 600);
  plVar8 = param_1 + 0xd;
  *plVar8 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  plVar15 = param_1 + 0x13;
  *plVar15 = 0;
  param_1[0x10] = lVar6;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  plVar14 = param_1 + 0x19;
  *plVar14 = 0;
  param_1[0x16] = lVar6;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  plVar9 = param_1 + 0x1f;
  *plVar9 = 0;
  param_1[0x1c] = lVar6;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  piVar10 = (int *)param_1[0xc];
  param_1[0x22] = lVar6;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (piVar10 != (int *)0x0) {
    if (((4 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar12 != 0)) &&
       (puVar1 = (uint *)((long)piVar10 + uVar12), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
       *puVar1 != 0)) {
      FUN_006b3140(plVar8);
      puVar16 = puVar1 + 1;
      if (*puVar1 != 0) {
        puVar1 = puVar16 + *puVar1;
        do {
          while( true ) {
            local_68 = (int *)((long)puVar16 + (ulong)*puVar16);
            puVar11 = (undefined8 *)param_1[0xe];
            if ((undefined8 *)param_1[0xf] <= puVar11) break;
            lVar17 = param_1[0x10];
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006b0928;
            *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar17;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *puVar11 = local_68;
            puVar11[1] = 0xcbf29ce484222645;
            *(undefined8 *)((long)puVar11 + 0x25) = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[2] = &DAT_01d38550;
            lVar17 = 0;
            if (4 < *(ushort *)((long)local_68 - (long)*local_68)) {
              uVar12 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
              if (uVar12 == 0) {
                lVar17 = 0;
              }
              else {
                puVar2 = (uint *)((long)local_68 + uVar12);
                lVar17 = (long)puVar2 + (ulong)*puVar2;
              }
            }
            sVar7 = strlen((char *)(lVar17 + 4));
            bVar4 = *(byte *)(lVar17 + 4);
            uVar12 = 0xcbf29ce484222645;
            if (bVar4 != 0) {
              uVar12 = 0xcbf29ce484222645;
              pbVar13 = (byte *)(lVar17 + 5);
              do {
                uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar4 != 0);
            }
            puVar11[1] = uVar12;
            puVar11[2] = (char *)(lVar17 + 4);
            puVar11[3] = sVar7;
            puVar11[4] = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            param_1[0xe] = param_1[0xe] + 0x30;
            puVar16 = puVar16 + 1;
            if (puVar16 == puVar1) goto LAB_006b0378;
          }
          FUN_006b3370(plVar8,&local_68);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
    }
LAB_006b0378:
    puVar3 = (undefined8 *)param_1[0xe];
    for (puVar11 = (undefined8 *)param_1[0xd]; puVar11 != puVar3; puVar11 = puVar11 + 6) {
      while( true ) {
        piVar10 = (int *)*puVar11;
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xb) ||
           (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5], uVar12 == 0)) break;
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((long)piVar10 + uVar12);
        puVar11 = puVar11 + 6;
        if (puVar11 == puVar3) goto LAB_006b03d0;
      }
      *(undefined4 *)(puVar11 + 5) = 0;
    }
LAB_006b03d0:
    piVar10 = (int *)param_1[0xc];
    if ((((6 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
         (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar12 != 0)) &&
        (puVar1 = (uint *)((long)piVar10 + uVar12), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1)
        , puVar1 != (uint *)0x0)) && (*puVar1 != 0)) {
      FUN_006b36e0(plVar15);
      puVar16 = puVar1 + 1;
      if (*puVar1 != 0) {
        puVar1 = puVar16 + *puVar1;
        do {
          while( true ) {
            local_68 = (int *)((long)puVar16 + (ulong)*puVar16);
            puVar11 = (undefined8 *)param_1[0x14];
            if ((undefined8 *)param_1[0x15] <= puVar11) break;
            lVar17 = param_1[0x16];
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006b0928;
            *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar17;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *puVar11 = local_68;
            puVar11[1] = 0xcbf29ce484222645;
            *(undefined8 *)((long)puVar11 + 0x25) = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[2] = &DAT_01d38550;
            lVar17 = 0;
            if (4 < *(ushort *)((long)local_68 - (long)*local_68)) {
              uVar12 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
              if (uVar12 == 0) {
                lVar17 = 0;
              }
              else {
                puVar2 = (uint *)((long)local_68 + uVar12);
                lVar17 = (long)puVar2 + (ulong)*puVar2;
              }
            }
            sVar7 = strlen((char *)(lVar17 + 4));
            bVar4 = *(byte *)(lVar17 + 4);
            uVar12 = 0xcbf29ce484222645;
            if (bVar4 != 0) {
              uVar12 = 0xcbf29ce484222645;
              pbVar13 = (byte *)(lVar17 + 5);
              do {
                uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar4 != 0);
            }
            puVar11[1] = uVar12;
            puVar11[2] = (char *)(lVar17 + 4);
            puVar11[3] = sVar7;
            puVar11[4] = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            param_1[0x14] = param_1[0x14] + 0x30;
            puVar16 = puVar16 + 1;
            if (puVar16 == puVar1) goto LAB_006b0564;
          }
          FUN_006b3910(plVar15,&local_68);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
    }
LAB_006b0564:
    puVar3 = (undefined8 *)param_1[0x14];
    for (puVar11 = (undefined8 *)param_1[0x13]; puVar11 != puVar3; puVar11 = puVar11 + 6) {
      piVar10 = (int *)*puVar11;
      uVar18 = 0;
      if (10 < *(ushort *)((long)piVar10 - (long)*piVar10)) {
        uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5];
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = *(undefined4 *)((long)piVar10 + uVar12);
        }
      }
      *(undefined4 *)(puVar11 + 5) = uVar18;
    }
    piVar10 = (int *)param_1[0xc];
    if (((8 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar12 != 0)) &&
       ((puVar1 = (uint *)((long)piVar10 + uVar12), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1)
        , puVar1 != (uint *)0x0 && (*puVar1 != 0)))) {
      FUN_006b3c80(plVar14);
      puVar16 = puVar1 + 1;
      if (*puVar1 != 0) {
        puVar1 = puVar16 + *puVar1;
        do {
          while( true ) {
            local_68 = (int *)((long)puVar16 + (ulong)*puVar16);
            puVar11 = (undefined8 *)param_1[0x1a];
            if ((undefined8 *)param_1[0x1b] <= puVar11) break;
            lVar17 = param_1[0x1c];
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006b0928;
            *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar17;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *(undefined2 *)(puVar11 + 5) = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[2] = &DAT_01d38550;
            *puVar11 = local_68;
            puVar11[1] = 0xcbf29ce484222645;
            lVar17 = 0;
            if (4 < *(ushort *)((long)local_68 - (long)*local_68)) {
              uVar12 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
              if (uVar12 == 0) {
                lVar17 = 0;
              }
              else {
                puVar2 = (uint *)((long)local_68 + uVar12);
                lVar17 = (long)puVar2 + (ulong)*puVar2;
              }
            }
            sVar7 = strlen((char *)(lVar17 + 4));
            bVar4 = *(byte *)(lVar17 + 4);
            uVar12 = 0xcbf29ce484222645;
            if (bVar4 != 0) {
              uVar12 = 0xcbf29ce484222645;
              pbVar13 = (byte *)(lVar17 + 5);
              do {
                uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar4 != 0);
            }
            puVar11[1] = uVar12;
            puVar11[2] = (char *)(lVar17 + 4);
            puVar11[3] = sVar7;
            puVar11[4] = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            param_1[0x1a] = param_1[0x1a] + 0x30;
            puVar16 = puVar16 + 1;
            if (puVar16 == puVar1) goto LAB_006b072c;
          }
          FUN_006b3ea0(plVar14,&local_68);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
    }
LAB_006b072c:
    puVar3 = (undefined8 *)param_1[0x1a];
    for (puVar11 = (undefined8 *)param_1[0x19]; puVar11 != puVar3; puVar11 = puVar11 + 6) {
      while( true ) {
        piVar10 = (int *)*puVar11;
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
           (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar12 == 0)) break;
        *(bool *)(puVar11 + 5) = *(char *)((long)piVar10 + uVar12) != '\0';
        puVar11 = puVar11 + 6;
        if (puVar11 == puVar3) goto LAB_006b078c;
      }
      *(undefined1 *)(puVar11 + 5) = 0;
    }
LAB_006b078c:
    piVar10 = (int *)param_1[0xc];
    if ((((10 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
         (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5], uVar12 != 0)) &&
        (puVar1 = (uint *)((long)piVar10 + uVar12), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1)
        , puVar1 != (uint *)0x0)) && (*puVar1 != 0)) {
      FUN_006b4210(plVar9);
      puVar16 = puVar1 + 1;
      if (*puVar1 != 0) {
        puVar1 = puVar16 + *puVar1;
        do {
          while( true ) {
            local_68 = (int *)((long)puVar16 + (ulong)*puVar16);
            puVar11 = (undefined8 *)param_1[0x20];
            if ((undefined8 *)param_1[0x21] <= puVar11) break;
            lVar17 = param_1[0x22];
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006b0928:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar17;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *puVar11 = local_68;
            puVar11[1] = 0xcbf29ce484222645;
            *(undefined2 *)(puVar11 + 5) = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[2] = &DAT_01d38550;
            lVar17 = 0;
            if (4 < *(ushort *)((long)local_68 - (long)*local_68)) {
              uVar12 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
              if (uVar12 == 0) {
                lVar17 = 0;
              }
              else {
                puVar2 = (uint *)((long)local_68 + uVar12);
                lVar17 = (long)puVar2 + (ulong)*puVar2;
              }
            }
            sVar7 = strlen((char *)(lVar17 + 4));
            bVar4 = *(byte *)(lVar17 + 4);
            uVar12 = 0xcbf29ce484222645;
            if (bVar4 != 0) {
              uVar12 = 0xcbf29ce484222645;
              pbVar13 = (byte *)(lVar17 + 5);
              do {
                uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar4 != 0);
            }
            puVar11[1] = uVar12;
            puVar11[2] = (char *)(lVar17 + 4);
            puVar11[3] = sVar7;
            puVar11[4] = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            param_1[0x20] = param_1[0x20] + 0x30;
            puVar16 = puVar16 + 1;
            if (puVar16 == puVar1) {
              return;
            }
          }
          FUN_006b4430(plVar9,&local_68);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
    }
  }
  return;
}


