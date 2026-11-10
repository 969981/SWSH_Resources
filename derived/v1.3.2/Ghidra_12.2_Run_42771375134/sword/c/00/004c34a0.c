/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c34a0; name: FUN_004c34a0
 */


void FUN_004c34a0(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  uVar7 = *(uint *)(param_1 + 0x18);
  if (uVar7 == 0) {
    plVar10 = *(long **)(param_1 + 0x28);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar8 = lVar9;
    do {
      puVar15 = (undefined8 *)(lVar8 + 0x10);
      if ((undefined8 *)*puVar15 != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)0x0;
        puVar12 = (undefined8 *)(lVar8 + 8);
        puVar14 = (undefined8 *)*puVar15;
        do {
          while( true ) {
            bVar6 = 1;
            if ((1 << (ulong)(*(byte *)((long)puVar14 + 0x29) & 0x1f) &
                (uint)*(ushort *)(lVar8 + 0x18)) != 0) {
              if (*(char *)(puVar14 + 5) == -0x80) {
                bVar4 = true;
              }
              else if (*(char *)(puVar14 + 5) == -0x70) {
                bVar4 = *(char *)((long)puVar14 + 0x2b) == '\0';
              }
              else {
                bVar4 = false;
              }
              bVar6 = bVar4 ^ 1;
            }
            uVar5 = FUN_004c4c80(puVar14,param_2,bVar6);
            if ((uVar5 & 1) != 0) break;
            puVar17 = (undefined8 *)*puVar14;
            puVar16 = puVar14;
joined_r0x004c3600:
            puVar14 = puVar17;
            if (puVar14 == (undefined8 *)0x0) goto LAB_004c3604;
          }
          if ((*(byte *)(puVar14 + 5) | 0x10) != 0x90) {
            FUN_004c3d40(uVar5,puVar12,puVar14);
          }
          puVar17 = (undefined8 *)*puVar14;
          puVar1 = puVar15;
          if ((undefined8 *)*puVar15 != puVar14) {
            puVar1 = puVar16;
          }
          *puVar1 = puVar17;
          if ((undefined8 *)*puVar12 == puVar14) {
            *puVar12 = puVar16;
            cVar3 = *(char *)(puVar14 + 5);
          }
          else {
            cVar3 = *(char *)(puVar14 + 5);
          }
          if ((cVar3 == -0x80) || ((cVar3 == -0x70 && (*(char *)((long)puVar14 + 0x2b) == '\0')))) {
            *(long *)(puVar14[2] + 0x10) = param_1;
            *puVar14 = 0;
            plVar10 = (long *)(param_1 + 0x28);
            if (*(long *)(param_1 + 0x28) != 0) {
              plVar10 = *(long **)(param_1 + 0x20);
            }
            *plVar10 = (long)puVar14;
            *(undefined8 **)(param_1 + 0x20) = puVar14;
            goto joined_r0x004c3600;
          }
          FUN_004c4930(puVar14);
          puVar14 = puVar17;
        } while (puVar17 != (undefined8 *)0x0);
LAB_004c3604:
        lVar9 = *(long *)(param_1 + 0x10);
        uVar7 = *(uint *)(param_1 + 0x18);
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != lVar9 + (ulong)uVar7 * 0x20);
    plVar10 = *(long **)(param_1 + 0x28);
  }
  if (plVar10 != (long *)0x0) {
    plVar13 = (long *)0x0;
    do {
      while ((plVar11 = plVar10, lVar8 = plVar11[2], *(int *)(lVar8 + 100) == 0 &&
             (*(int *)(lVar8 + 0x8c) == 0))) {
        plVar10 = (long *)*plVar11;
        plVar2 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar11) {
          plVar2 = plVar13;
        }
        *plVar2 = (long)plVar10;
        if (*(long **)(param_1 + 0x20) == plVar11) {
          *(long **)(param_1 + 0x20) = plVar13;
        }
        *(undefined8 *)(lVar8 + 0x10) = 0;
        FUN_004c5230(plVar11);
        FUN_004c4930(plVar11);
        if (plVar10 == (long *)0x0) {
          return;
        }
      }
      plVar10 = (long *)*plVar11;
      plVar13 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
  return;
}


