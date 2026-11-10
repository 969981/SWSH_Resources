/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062cc30; name: FUN_0062cc30
 */


int FUN_0062cc30(long param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  lVar7 = *(long *)(param_2 + 8);
  lVar12 = lVar7 + (ulong)param_3 * 0x18;
  puVar13 = (uint *)(lVar12 + 4);
  uVar2 = *puVar13;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x10);
    uVar14 = 0;
    iVar4 = 0;
    do {
      if (*(short *)(param_2 + 0x10) == 0) {
        uVar11 = 0x10000;
      }
      else {
        uVar15 = 0;
        uVar11 = 0x10000;
        plVar16 = (long *)(*(long *)(*(long *)(param_2 + 0x18) +
                                    (ulong)*(uint *)(*(long *)(lVar7 + (ulong)param_3 * 0x18 + 8) +
                                                    uVar14 * 4) * 8) + 0x10);
        do {
          lVar6 = plVar16[-2];
          lVar1 = plVar16[-1];
          if (lVar1 < lVar6) {
LAB_0062cd2c:
            uVar8 = 0x10000;
          }
          else {
            lVar10 = *plVar16;
            if (lVar10 < lVar1) goto LAB_0062cd2c;
            if (lVar1 == 0) goto LAB_0062cd2c;
            uVar8 = 0x10000;
            if (-1 < lVar6 || lVar10 < 1) {
              lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x478) + 0x10) + uVar15 * 8);
              lVar5 = lVar9 - lVar6;
              if (lVar9 < lVar6 || lVar10 < lVar9) {
                uVar8 = 0;
              }
              else {
                if (lVar9 == lVar1) goto LAB_0062cd2c;
                lVar6 = lVar1 - lVar6;
                if (lVar1 <= lVar9) {
                  lVar5 = lVar10 - lVar9;
                  lVar6 = lVar10 - lVar1;
                }
                uVar8 = FUN_006025a0(lVar5,lVar6);
              }
            }
          }
          uVar11 = FUN_00602580(uVar11,uVar8);
          uVar15 = uVar15 + 1;
          plVar16 = plVar16 + 3;
        } while (uVar15 < *(ushort *)(param_2 + 0x10));
      }
      iVar3 = FUN_00602580(uVar11,(long)*(short *)(lVar12 + (ulong)(uVar2 * param_4) * 2 +
                                                  uVar14 * 2) << 0x10);
      uVar14 = uVar14 + 1;
      iVar4 = iVar3 + iVar4;
    } while (uVar14 < *puVar13);
    iVar4 = iVar4 + 0x8000 >> 0x10;
  }
  return iVar4;
}


