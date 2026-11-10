/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f474f0; name: FUN_00f474f0
 */


undefined1  [16] FUN_00f474f0(long param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  float fVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  
  fVar4 = DAT_01d4c154;
  puVar5 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
  puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  uVar6 = (ulong)*puVar5;
  if (uVar6 == 0) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    lVar7 = 0;
    do {
      uVar8 = (ulong)*(uint *)((long)puVar5 + lVar7 + 4);
      lVar3 = lVar7 + (uVar8 - (long)*(int *)((long)puVar5 + lVar7 + uVar8 + 4));
      if ((*(ushort *)((long)puVar5 + lVar3 + 4) < 5) ||
         (uVar9 = (ulong)*(ushort *)((long)puVar5 + lVar3 + 8), uVar9 == 0)) {
        if (param_2 == 0) goto LAB_00f475ac;
      }
      else if (*(ushort *)((long)puVar5 + lVar7 + uVar8 + uVar9 + 4) == param_2) {
LAB_00f475ac:
        puVar1 = (uint *)((long)puVar5 + lVar7 + 4);
        uVar15 = 0;
        uVar16 = 0;
        if (puVar1 != puVar5 + uVar6 + 1) {
          uVar16 = 0;
          uVar15 = 0;
          piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
          if (piVar2 != (int *)0x0) {
            fVar17 = 0.0;
            fVar10 = 0.0;
            if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
              fVar10 = 0.0;
              if (uVar6 != 0) {
                fVar10 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + uVar6));
              }
            }
            uVar11 = FUN_00795bb0(fVar10 / DAT_01d4c154);
            fVar10 = 0.0;
            if (8 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
              fVar10 = 0.0;
              if (uVar6 != 0) {
                fVar10 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + uVar6));
              }
            }
            uVar12 = FUN_00795bb0(fVar10 / fVar4);
            if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
               (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar6 != 0)) {
              fVar17 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar2 + uVar6));
            }
            uVar13 = FUN_00795bb0(fVar17 / fVar4);
            uVar15 = CONCAT44(uVar12,uVar11);
            uVar16 = (ulong)uVar13;
          }
        }
        break;
      }
      lVar7 = lVar7 + 4;
    } while (uVar6 * 4 != lVar7);
  }
  auVar14._8_8_ = uVar16;
  auVar14._0_8_ = uVar15;
  return auVar14;
}


