/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5be0; name: FUN_004b5be0
 */


void FUN_004b5be0(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02713450);
  puVar5 = PTR_DAT_02713458;
  puVar4 = PTR_DAT_02712d98;
  iVar10 = *(int *)(PTR_DAT_02713458 + 8) + -1;
  if (-1 < iVar10) {
    lVar8 = *(long *)PTR_DAT_02713458;
    iVar13 = 0;
    do {
      while( true ) {
        iVar14 = iVar10 - iVar13;
        if (iVar14 < 0) {
          iVar14 = iVar14 + 1;
        }
        iVar14 = iVar13 + (iVar14 >> 1);
        lVar15 = (long)iVar14;
        uVar16 = *(ulong *)(lVar8 + (long)iVar14 * 0x18);
        if ((uVar16 <= param_2) &&
           ((uVar16 != param_2 || (*(ulong *)(lVar8 + lVar15 * 0x18 + 8) <= param_1)))) break;
        iVar10 = iVar14 + -1;
        if (iVar10 < iVar13) goto LAB_004b5d7c;
      }
      if ((param_2 <= uVar16) &&
         ((uVar16 != param_2 || (param_1 <= *(ulong *)(lVar8 + lVar15 * 0x18 + 8))))) {
        if (lVar8 + lVar15 * 0x18 != 0) {
          lVar8 = *(long *)(lVar8 + lVar15 * 0x18 + 0x10);
          bVar2 = *(byte *)(lVar8 + 0x30);
          if (((uint)bVar2 != (param_3 & 0xff)) ||
             ((uint)*(byte *)(lVar8 + 0x31) != (param_4 & 0xff))) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              plVar6 = *(long **)PTR_DAT_02712d98;
              puVar18 = *(undefined4 **)(lVar8 + 0x10);
              pcVar9 = *(code **)(*plVar6 + 0x50);
              uVar1 = *puVar18;
              while( true ) {
                puVar18 = puVar18 + 1;
                (*pcVar9)(plVar6,uVar1,param_3,bVar2);
                if (puVar18 ==
                    (undefined4 *)(*(long *)(lVar8 + 0x10) + (ulong)*(uint *)(lVar8 + 0x18) * 4))
                break;
                plVar6 = *(long **)puVar4;
                pcVar9 = *(code **)(*plVar6 + 0x50);
                uVar1 = *puVar18;
                bVar2 = *(byte *)(lVar8 + 0x30);
              }
            }
            puVar4 = PTR_DAT_02712d98;
            if (*(int *)(lVar8 + 0x28) != 0) {
              puVar18 = *(undefined4 **)(lVar8 + 0x20);
              do {
                puVar17 = puVar18 + 1;
                (**(code **)(**(long **)puVar4 + 0x50))
                          (*(long **)puVar4,*puVar18,param_4,*(undefined1 *)(lVar8 + 0x31));
                puVar18 = puVar17;
              } while (puVar17 !=
                       (undefined4 *)(*(long *)(lVar8 + 0x20) + (ulong)*(uint *)(lVar8 + 0x28) * 4))
              ;
            }
            *(char *)(lVar8 + 0x30) = (char)param_3;
            *(char *)(lVar8 + 0x31) = (char)param_4;
          }
          goto LAB_004b5e00;
        }
        break;
      }
      iVar13 = iVar14 + 1;
    } while (iVar13 <= iVar10);
  }
LAB_004b5d7c:
  plVar6 = (long *)FUN_004b5ef0(PTR_DAT_02713458,param_2,param_1);
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
    plVar6[2] = (long)puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      iVar10 = *(uint *)(puVar5 + 8) - 1;
      if (-1 < iVar10) {
        lVar8 = *(long *)puVar5;
        iVar13 = 0;
        iVar14 = iVar10;
        do {
          while( true ) {
            iVar3 = iVar14 - iVar13;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar13 + (iVar3 >> 1);
            lVar15 = (long)iVar3;
            uVar16 = *(ulong *)(lVar8 + (long)iVar3 * 0x18);
            if ((uVar16 <= param_2) &&
               ((uVar16 != param_2 || (*(ulong *)(lVar8 + lVar15 * 0x18 + 8) <= param_1)))) break;
            iVar14 = iVar3 + -1;
            if (iVar14 < iVar13) goto LAB_004b5e00;
          }
          if ((param_2 <= uVar16) &&
             ((uVar16 != param_2 || (param_1 <= *(ulong *)(lVar8 + lVar15 * 0x18 + 8))))) {
            puVar7 = (undefined8 *)(lVar8 + lVar15 * 0x18);
            puVar11 = (undefined8 *)((lVar8 + (ulong)*(uint *)(puVar5 + 8) * 0x18) - 0x18);
            if (puVar7 < puVar11) {
              do {
                puVar12 = puVar7 + 3;
                *puVar7 = *puVar12;
                puVar7[1] = puVar7[4];
                puVar7[2] = puVar7[5];
                puVar7 = puVar12;
              } while (puVar12 < puVar11);
            }
            *(int *)(puVar5 + 8) = iVar10;
            break;
          }
          iVar13 = iVar3 + 1;
        } while (iVar13 <= iVar14);
      }
    }
    else {
      *(undefined2 *)(puVar7 + 6) = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      lVar8 = *plVar6;
      if (lVar8 != 0) {
        *(int *)(lVar8 + 0x50) = *(int *)(lVar8 + 0x50) + 1;
      }
      *(char *)(plVar6[2] + 0x30) = (char)param_3;
      *(char *)(plVar6[2] + 0x31) = (char)param_4;
      FUN_004b61d0(plVar6[2],plVar6[1],*plVar6,0,0);
    }
  }
LAB_004b5e00:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02713450);
  return;
}


