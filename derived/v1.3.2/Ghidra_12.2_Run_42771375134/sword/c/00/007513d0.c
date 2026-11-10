/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007513d0; name: FUN_007513d0
 */


void FUN_007513d0(undefined8 param_1,undefined8 param_2,long param_3,int *param_4,int *param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  bool bVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  if ((param_3 != 0) && (param_4 != (int *)0x0)) {
    lVar13 = *(long *)(param_3 + 0x328) - *(long *)(param_3 + 800);
    lVar16 = *(long *)(param_3 + 0x108);
    puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (4 - (long)*param_4)));
    uVar7 = *(uint *)((long)puVar2 + (ulong)*puVar2);
    if (param_5 == (int *)0x0) {
      bVar10 = false;
    }
    else {
      puVar2 = (uint *)((long)param_5 + (ulong)*(ushort *)((long)param_5 + (4 - (long)*param_5)));
      bVar10 = uVar7 == *(uint *)((long)puVar2 + (ulong)*puVar2);
    }
    if (lVar13 != 0) {
      uVar19 = 0;
      lVar18 = (ulong)uVar7 * 4;
      do {
        if (uVar7 != 0) {
          lVar14 = *(long *)(lVar16 + 0x290) + uVar19 * 0x4c0;
          puVar1 = (undefined8 *)(lVar14 + 8);
          lVar6 = 0;
          if ((param_6 & 1) == 0) {
            lVar6 = lVar14;
          }
          if (bVar10) {
            lVar14 = 0;
            do {
              while( true ) {
                uVar15 = (ulong)*(ushort *)((long)param_4 + (4 - (long)*param_4));
                lVar3 = uVar15 + *(uint *)((long)param_4 + uVar15);
                lVar3 = lVar3 + (ulong)*(uint *)((long)param_4 + lVar14 + lVar3 + 4);
                lVar4 = lVar14 + (lVar3 - *(int *)((long)param_4 + lVar14 + lVar3 + 4));
                uVar9 = *(ushort *)((long)param_4 + lVar4 + 4);
                if ((uVar9 < 5) ||
                   (uVar15 = (ulong)*(ushort *)((long)param_4 + lVar4 + 8), uVar15 == 0)) break;
                lVar5 = lVar3 + uVar15;
                pcVar12 = (char *)((long)param_4 +
                                  lVar14 + lVar5 + (ulong)*(uint *)((long)param_4 +
                                                                   lVar14 + lVar5 + 4) + 8);
                if (*pcVar12 == '\0') goto LAB_0075156c;
LAB_00751550:
                iVar11 = strcmp(pcVar12,(char *)*puVar1);
                if (iVar11 == 0) {
                  pcVar12 = (char *)0x0;
                  goto LAB_0075156c;
                }
joined_r0x00751644:
                lVar14 = lVar14 + 4;
                if (lVar18 == lVar14) goto LAB_007517b4;
              }
              pcVar12 = &DAT_00000004;
              if (DAT_00000004 != '\0') goto LAB_00751550;
LAB_0075156c:
              if ((uVar9 < 0xb) ||
                 (uVar15 = (ulong)*(ushort *)((long)param_4 + lVar4 + 0xe), uVar15 == 0))
              goto joined_r0x00751644;
              uVar17 = (ulong)*(ushort *)((long)param_5 + (4 - (long)*param_5));
              lVar4 = uVar17 + *(uint *)((long)param_5 + uVar17);
              cVar8 = *(char *)((long)param_4 + lVar14 + lVar3 + uVar15 + 4);
              if (cVar8 != '\x01') {
                if (cVar8 == '\x02') {
                  FUN_00752320(param_1,pcVar12,param_3,uVar19 & 0xffffffff,lVar6);
                }
                else if (cVar8 == '\x03') {
                  FUN_00752720(param_1,pcVar12,param_3,uVar19 & 0xffffffff,lVar6);
                }
                goto joined_r0x00751644;
              }
              FUN_00751dd0(param_1,param_2,param_3,uVar19 & 0xffffffff,lVar6,
                           (long)param_4 + lVar14 + lVar3 + 4,
                           (long)param_5 +
                           lVar14 + lVar4 + (ulong)*(uint *)((long)param_5 + lVar14 + lVar4 + 4) + 4
                          );
              lVar14 = lVar14 + 4;
            } while (lVar18 != lVar14);
          }
          else {
            lVar14 = 0;
            do {
              while( true ) {
                uVar15 = (ulong)*(ushort *)((long)param_4 + (4 - (long)*param_4));
                lVar3 = uVar15 + *(uint *)((long)param_4 + uVar15);
                lVar3 = lVar3 + (ulong)*(uint *)((long)param_4 + lVar14 + lVar3 + 4);
                lVar4 = lVar14 + (lVar3 - *(int *)((long)param_4 + lVar14 + lVar3 + 4));
                uVar9 = *(ushort *)((long)param_4 + lVar4 + 4);
                if ((uVar9 < 5) ||
                   (uVar15 = (ulong)*(ushort *)((long)param_4 + lVar4 + 8), uVar15 == 0)) break;
                lVar5 = lVar3 + uVar15;
                pcVar12 = (char *)((long)param_4 +
                                  lVar14 + lVar5 + (ulong)*(uint *)((long)param_4 +
                                                                   lVar14 + lVar5 + 4) + 8);
                if (*pcVar12 == '\0') goto LAB_007516c8;
LAB_00751744:
                iVar11 = strcmp(pcVar12,(char *)*puVar1);
                if ((iVar11 == 0) && (pcVar12 = (char *)0x0, 10 < uVar9)) goto LAB_007516d0;
joined_r0x007517b0:
                lVar14 = lVar14 + 4;
                if (lVar18 == lVar14) goto LAB_007517b4;
              }
              pcVar12 = &DAT_00000004;
              if (DAT_00000004 != '\0') goto LAB_00751744;
LAB_007516c8:
              if (uVar9 < 0xb) goto joined_r0x007517b0;
LAB_007516d0:
              uVar15 = (ulong)*(ushort *)((long)param_4 + lVar4 + 0xe);
              if (uVar15 == 0) goto joined_r0x007517b0;
              cVar8 = *(char *)((long)param_4 + lVar14 + lVar3 + uVar15 + 4);
              lVar3 = (long)param_4 + lVar14 + lVar3 + 4;
              if (cVar8 != '\x03') {
                if (cVar8 == '\x02') {
                  FUN_00752320(param_1,pcVar12,param_3,uVar19 & 0xffffffff,lVar6,lVar3,0);
                }
                else if (cVar8 == '\x01') {
                  FUN_00751dd0(param_1,param_2,param_3,uVar19 & 0xffffffff,lVar6,lVar3,0);
                }
                goto joined_r0x007517b0;
              }
              FUN_00752720(param_1,pcVar12,param_3,uVar19 & 0xffffffff,lVar6,lVar3,0);
              lVar14 = lVar14 + 4;
            } while (lVar18 != lVar14);
          }
        }
LAB_007517b4:
        uVar19 = uVar19 + 1;
      } while (uVar19 < (ulong)((lVar13 >> 3) * -0x70a3d70a3d70a3d7));
    }
  }
  return;
}


