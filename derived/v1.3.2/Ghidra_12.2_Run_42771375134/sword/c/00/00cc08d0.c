/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc08d0; name: FUN_00cc08d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00cc08d0(long param_1,uint param_2,int param_3,char param_4)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar5 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
  puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  uVar6 = (ulong)*puVar5;
  if (uVar6 == 0) {
    uVar11 = 0;
    uVar14 = 0;
  }
  else {
    uVar11 = 0;
    uVar14 = 0;
    lVar8 = 0;
    do {
      uVar9 = (ulong)*(uint *)((long)puVar5 + lVar8 + 4);
      lVar4 = lVar8 + (uVar9 - (long)*(int *)((long)puVar5 + lVar8 + uVar9 + 4));
      if ((*(ushort *)((long)puVar5 + lVar4 + 4) < 5) ||
         (uVar10 = (ulong)*(ushort *)((long)puVar5 + lVar4 + 8), uVar10 == 0)) {
        if (param_2 == 0) goto LAB_00cc0978;
      }
      else if (*(ushort *)((long)puVar5 + lVar8 + uVar9 + uVar10 + 4) == param_2) {
LAB_00cc0978:
        puVar1 = (uint *)((long)puVar5 + lVar8 + 4);
        uVar11 = 0;
        uVar14 = 0;
        if (puVar1 == puVar5 + uVar6 + 1) break;
        uVar14 = 0;
        uVar11 = 0;
        piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
        if (piVar2 == (int *)0x0) break;
        if ((param_2 == 0) && (param_4 != '\0')) {
          auVar12._8_8_ = uRam0000000002a578d8;
          auVar12._0_8_ = _DAT_02a578d0;
          return auVar12;
        }
        if (param_3 == 1) {
          puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar3 = *puVar7;
          if (uVar3 < 0xd) goto LAB_00cc0abc;
          fVar16 = 0.0;
          if ((ulong)puVar7[6] != 0) {
            fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + (ulong)puVar7[6]));
          }
          fVar16 = fVar16 / DAT_01d4c154;
          if (uVar3 < 0xf) goto LAB_00cc0ac4;
          fVar17 = 0.0;
          fVar15 = 0.0;
          if ((ulong)puVar7[7] != 0) {
            fVar15 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + (ulong)puVar7[7]));
          }
          fVar15 = fVar15 / DAT_01d4c154;
          if (0x10 < uVar3) {
            uVar3 = puVar7[8];
            goto joined_r0x00cc0aac;
          }
        }
        else {
          if (param_3 != 0) break;
          puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar3 = *puVar7;
          if (uVar3 < 7) {
LAB_00cc0abc:
            fVar16 = 0.0;
          }
          else {
            fVar16 = 0.0;
            if ((ulong)puVar7[3] != 0) {
              fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + (ulong)puVar7[3]));
            }
            fVar16 = fVar16 / DAT_01d4c154;
            if (8 < uVar3) {
              fVar17 = 0.0;
              fVar15 = 0.0;
              if ((ulong)puVar7[4] != 0) {
                fVar15 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + (ulong)puVar7[4]));
              }
              fVar15 = fVar15 / DAT_01d4c154;
              if (10 < uVar3) {
                uVar3 = puVar7[5];
joined_r0x00cc0aac:
                fVar17 = 0.0;
                if ((ulong)uVar3 != 0) {
                  fVar17 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + (ulong)uVar3));
                }
              }
              goto LAB_00cc0ac8;
            }
          }
LAB_00cc0ac4:
          fVar17 = 0.0;
          fVar15 = fVar17;
        }
LAB_00cc0ac8:
        uVar11 = CONCAT44(fVar15,fVar16);
        uVar14 = (ulong)(uint)(fVar17 / DAT_01d4c154);
        break;
      }
      lVar8 = lVar8 + 4;
    } while (uVar6 * 4 != lVar8);
  }
  auVar13._8_8_ = uVar14;
  auVar13._0_8_ = uVar11;
  return auVar13;
}


