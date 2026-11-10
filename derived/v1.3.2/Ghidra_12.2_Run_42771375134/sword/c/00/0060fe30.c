/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060fe30; name: FUN_0060fe30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0060fe30(uint *param_1,int param_2)

{
  uint *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong local_e0 [16];
  
  puVar2 = local_e0;
  uVar13 = *param_1;
  if (uVar13 != 0) {
    uVar11 = *(ulong *)(param_1 + 2);
    uVar9 = *(undefined8 *)(param_1 + 6);
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 10) + (long)param_2 * 0x198 + 400);
    uVar12 = uVar11 + (ulong)uVar13 * 0x48;
    uVar3 = 0;
    uVar5 = uVar11;
    do {
      puVar1 = (uint *)(uVar5 + 0x1c);
      uVar5 = uVar5 + 0x48;
      uVar3 = (*puVar1 >> 4 & 1) + uVar3;
    } while (uVar5 < uVar12);
    if ((uVar3 != 0) &&
       ((uVar3 < 0x11 ||
        (puVar2 = (ulong *)FUN_006029c0(uVar9,8,0,uVar3,0,local_e0), (int)local_e0[0] == 0)))) {
      if (uVar13 != 0) {
        uVar14 = 0;
        uVar5 = uVar11;
        do {
          if ((*(byte *)(uVar5 + 0x1c) >> 4 & 1) != 0) {
            puVar8 = puVar2 + uVar14;
            if ((int)uVar14 == 0) {
LAB_0060ff20:
              puVar6 = puVar8;
            }
            else {
              do {
                puVar6 = puVar8 + -1;
                if (*(long *)(*puVar6 + 0x30) <= *(long *)(uVar5 + 0x30)) goto LAB_0060ff20;
                *puVar8 = *puVar6;
                puVar8 = puVar6;
              } while (puVar2 < puVar6);
            }
            uVar14 = (ulong)((int)uVar14 + 1);
            *puVar6 = uVar5;
          }
          uVar5 = uVar5 + 0x48;
        } while (uVar5 < uVar12);
        if (uVar13 != 0) {
          uVar13 = (uint)uVar14;
          do {
            if ((*(uint *)(uVar11 + 0x1c) >> 4 & 1) == 0) {
              uVar3 = *(uint *)(uVar11 + 0x18);
              if ((uVar3 >> 1 & 1) == 0) {
                if (uVar13 == 0) goto LAB_0061004c;
LAB_0060ff98:
                lVar4 = 0;
                do {
                  if (*(long *)(uVar11 + 0x30) < *(long *)(puVar2[lVar4] + 0x30)) {
                    if ((int)lVar4 == 0) goto LAB_0061004c;
                    break;
                  }
                  lVar4 = lVar4 + 1;
                } while ((uint)lVar4 < uVar13);
                uVar5 = puVar2[(int)lVar4 - 1];
                lVar4 = 0;
                do {
                  lVar15 = lVar4;
                  if (uVar14 + lVar15 == 0) break;
                  lVar4 = lVar15 + -1;
                } while (*(long *)(uVar11 + 0x30) <=
                         *(long *)(puVar2[(uVar13 - 1) + (int)lVar15] + 0x30));
                if ((int)lVar15 == 0) {
                  uVar5 = puVar2[uVar13 - 1];
                  goto LAB_00610058;
                }
                lVar4 = *(long *)(uVar11 + 0x30) - *(long *)(uVar5 + 0x30);
                if (lVar4 == 0) {
                  lVar4 = *(long *)(uVar5 + 0x40);
                }
                else {
                  uVar7 = puVar2[uVar14 + lVar15 & 0xffffffff];
                  if (*(long *)(uVar11 + 0x30) != *(long *)(uVar7 + 0x30)) {
                    lVar15 = *(long *)(uVar5 + 0x40);
                    lVar4 = FUN_006024c0(lVar4,*(long *)(uVar7 + 0x40) - lVar15,
                                         *(long *)(uVar7 + 0x30) - *(long *)(uVar5 + 0x30));
                    goto LAB_00610070;
                  }
                  lVar4 = *(long *)(uVar7 + 0x40);
                }
              }
              else {
                if (((*(char *)(uVar11 + 0x20) == '\x04') ||
                    (*(char *)(uVar11 + 0x20) != *(char *)(uVar11 + 0x21))) ||
                   (!((uVar3 & 4) != 0 || (*(uint *)(uVar11 + 0x1c) & 0x40) != 0)))
                goto LAB_00610084;
                *(uint *)(uVar11 + 0x18) = uVar3 & 0xfffffffd;
                if (uVar13 != 0) goto LAB_0060ff98;
LAB_0061004c:
                uVar5 = *puVar2;
LAB_00610058:
                lVar15 = *(long *)(uVar5 + 0x40);
                lVar4 = FUN_00602580(*(long *)(uVar11 + 0x30) - *(long *)(uVar5 + 0x30),uVar10);
LAB_00610070:
                lVar4 = lVar4 + lVar15;
              }
              *(long *)(uVar11 + 0x40) = lVar4;
              *(uint *)(uVar11 + 0x1c) = *(uint *)(uVar11 + 0x1c) | 0x20;
            }
LAB_00610084:
            uVar11 = uVar11 + 0x48;
          } while (uVar11 < uVar12);
        }
      }
      if (puVar2 != local_e0) {
        FUN_006028c0(uVar9,puVar2);
      }
    }
  }
  return;
}


