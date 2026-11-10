/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100b820; name: FUN_0100b820
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0100b820(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ushort *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  int local_6c;
  long local_68;
  
  plVar7 = *(long **)(param_1 + 0x3d8);
  if (plVar7 != (long *)0x0) {
    lVar14 = *(long *)PTR_DAT_02710798;
    do {
      iVar2 = FUN_00e837d0(plVar7 + 4);
      if (iVar2 == param_2) {
        uVar8 = *(ulong *)(param_1 + 0x3b8);
        uVar3 = plVar7[4];
        if ((uVar8 - 1 & uVar8) == 0) {
          plVar9 = *(long **)(*(long *)(param_1 + 0x3b0) + (uVar8 - 1 & uVar3) * 8);
          do {
            do {
              plVar9 = (long *)*plVar9;
            } while (uVar3 != plVar9[1]);
          } while (plVar9[2] != uVar3);
        }
        else {
          uVar11 = uVar3;
          if (uVar8 <= uVar3) {
            uVar11 = 0;
            if (uVar8 != 0) {
              uVar11 = uVar3 / uVar8;
            }
            uVar11 = uVar3 - uVar11 * uVar8;
          }
          plVar9 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar11 * 8);
          do {
            do {
              plVar9 = (long *)*plVar9;
            } while (uVar3 != plVar9[1]);
          } while (plVar9[2] != uVar3);
        }
        puVar4 = *(uint **)(*(long *)((long)plVar9 + 0x38) + 400);
        piVar6 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        if (*puVar4 != 0) {
          puVar15 = puVar4 + 1;
          do {
            uVar3 = (ulong)*puVar15;
            piVar6 = (int *)((long)puVar15 + uVar3);
            uVar8 = (ulong)*piVar6;
            if ((*(ushort *)((long)piVar6 - uVar8) < 0x31) ||
               (uVar11 = (ulong)((ushort *)((long)piVar6 - uVar8))[0x18], uVar11 == 0)) {
              puVar12 = (uint *)0x0;
            }
            else {
              puVar12 = (uint *)((long)piVar6 + uVar11);
              puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
            }
            while( true ) {
              puVar12 = puVar12 + 1;
              puVar10 = (ushort *)((long)puVar15 + (uVar3 - (long)(int)uVar8));
              if ((*puVar10 < 0x31) || (uVar8 = (ulong)puVar10[0x18], uVar8 == 0)) {
                puVar5 = (uint *)0x0;
              }
              else {
                puVar5 = (uint *)((long)puVar15 + uVar8 + uVar3);
                puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
              }
              if (puVar12 == puVar5 + (ulong)*puVar5 + 1) break;
              piVar6 = (int *)((long)puVar12 + (ulong)*puVar12);
              puVar5 = (uint *)((long)piVar6 +
                               (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
              piVar6 = (int *)((long)puVar5 + (ulong)*puVar5);
              puVar5 = (uint *)((long)piVar6 +
                               (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
              piVar6 = (int *)((long)puVar5 + (ulong)*puVar5);
              if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
                 (uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar3 == 0)) {
                piVar6 = (int *)0x0;
              }
              else {
                puVar5 = (uint *)((long)piVar6 + uVar3);
                piVar6 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
              if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0x17) ||
                 (uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xb], uVar3 == 0)) {
                local_68 = 0;
              }
              else {
                local_68 = *(long *)((long)piVar6 + uVar3);
              }
              local_6c = 0;
              do {
                lVar13 = *(long *)(lVar14 + 600);
                if (lVar13 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                plVar9 = (long *)(lVar13 + 0x48);
                (**(code **)(*plVar9 + 0x10))(plVar9);
                lVar13 = *(long *)(lVar13 + (long)param_2 * 0x280 + (long)local_6c * 0x10 + 0x60);
                (**(code **)(*plVar9 + 0x18))(plVar9);
                if (lVar13 == local_68) break;
                if (lVar13 == -0x340d631b7bddd9bb) {
                  lVar13 = *(long *)(lVar14 + 600);
                  if (lVar13 == 0) {
                    FUN_0151d130(0,param_2,&local_6c,&local_68);
                  }
                  else {
                    plVar9 = (long *)(lVar13 + 0x48);
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                    FUN_0151d130(lVar13,param_2,&local_6c,&local_68);
                    (**(code **)(*plVar9 + 0x18))(plVar9);
                  }
                  break;
                }
                iVar2 = local_6c + 1;
                bVar1 = local_6c < 0x27;
                local_6c = iVar2;
              } while (bVar1);
              uVar3 = (ulong)*puVar15;
              uVar8 = (ulong)*(uint *)((long)puVar15 + uVar3);
            }
            puVar15 = puVar15 + 1;
          } while (puVar15 != puVar4 + 1 + *puVar4);
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


