/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043d6e0; name: FUN_0043d6e0
 */


undefined8 FUN_0043d6e0(long param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  
  pbVar14 = (byte *)*param_2;
  bVar6 = *pbVar14;
  *param_2 = (long)(pbVar14 + 1);
  uVar12 = bVar6 & 0x7f;
  if ((char)bVar6 < '\0') {
    pbVar14 = pbVar14 + 2;
    do {
      bVar6 = pbVar14[-1];
      *param_2 = (long)pbVar14;
      pbVar14 = pbVar14 + 1;
      uVar12 = bVar6 & 0x7f | uVar12 << 7;
    } while ((char)bVar6 < '\0');
    if (uVar12 == 0) {
      return 1;
    }
  }
  else if ((bVar6 & 0x7f) == 0) {
    return 1;
  }
  puVar8 = PTR_DAT_02712a90;
  lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 << 3);
  *(long *)(param_1 + 0x38) = lVar9;
  if (lVar9 == 0) {
    return 2;
  }
  uVar16 = 0;
  *(uint *)(param_1 + 0x44) = uVar12;
  do {
    puVar13 = (undefined4 *)*param_2;
    uVar5 = *puVar13;
    *param_2 = (long)(puVar13 + 1);
    cVar7 = *(char *)(puVar13 + 1);
    *param_2 = (long)puVar13 + 5;
    uVar3 = *(uint *)(param_1 + 0x40);
    uVar17 = *(uint *)(param_1 + 0x44);
    if (uVar3 < uVar17) {
LAB_0043d89c:
      if (uVar3 < uVar17) {
        puVar1 = (ulong *)(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 8);
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + 1;
        if (puVar1 != (ulong *)0x0) {
          *puVar1 = (ulong)CONCAT14(cVar7 != '\0',uVar5);
        }
      }
    }
    else {
      uVar17 = uVar17 + 4;
      puVar10 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar8,(ulong)uVar17 << 3);
      if (puVar10 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)(param_1 + 0x38);
        if ((puVar11 != (undefined8 *)0x0) && (puVar11 != puVar10)) {
          uVar4 = *(uint *)(param_1 + 0x40);
          if (uVar4 != 0) {
            *puVar10 = *puVar11;
            if (uVar4 != 1) {
              uVar2 = uVar4 + 3 & 3;
              if ((ulong)uVar4 - 2 < 3) {
                lVar15 = 1;
              }
              else {
                lVar9 = 0;
                do {
                  lVar15 = lVar9;
                  lVar9 = lVar15 * 8;
                  puVar10[lVar15 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 8);
                  puVar10[lVar15 + 2] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 0x10);
                  puVar10[lVar15 + 3] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 0x18);
                  puVar10[lVar15 + 4] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 0x20);
                  lVar9 = lVar15 + 4;
                } while (((ulong)uVar4 - 1) - (ulong)uVar2 != lVar15 + 4);
                lVar15 = lVar15 + 5;
              }
              if (uVar2 != 0) {
                lVar15 = lVar15 << 3;
                lVar9 = -(ulong)uVar2;
                do {
                  *(undefined8 *)((long)puVar10 + lVar15) =
                       *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar15);
                  lVar15 = lVar15 + 8;
                  lVar9 = lVar9 + 1;
                } while (lVar9 != 0);
              }
            }
            puVar11 = *(undefined8 **)(param_1 + 0x38);
          }
          FUN_00404870(*(undefined4 *)puVar8,puVar11);
        }
        *(undefined8 **)(param_1 + 0x38) = puVar10;
        *(uint *)(param_1 + 0x44) = uVar17;
        goto LAB_0043d89c;
      }
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == uVar12) {
      return 1;
    }
  } while( true );
}


