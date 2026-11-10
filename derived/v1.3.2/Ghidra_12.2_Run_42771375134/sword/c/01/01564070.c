/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564070; name: FUN_01564070
 */


void FUN_01564070(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  size_t sVar6;
  size_t sVar7;
  ulong *puVar8;
  long lVar9;
  byte *pbVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 local_68;
  
  if (((*(long *)(param_1 + 0x60) != 0) &&
      (lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 8), lVar9 != 0)) &&
     (*(char *)(lVar9 + 0x170) != '\0')) {
    piVar1 = (int *)((long)*(uint **)(lVar9 + 400) + (ulong)**(uint **)(lVar9 + 400));
    puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      puVar14 = puVar2 + 1;
      do {
        piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
        puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar5 = *puVar11;
        if ((uVar5 < 7) || ((ulong)puVar11[3] == 0)) {
          lVar9 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar11[3]);
          lVar9 = (long)puVar3 + (ulong)*puVar3;
        }
        sVar6 = strlen((char *)(lVar9 + 4));
        bVar4 = *(byte *)(lVar9 + 4);
        uVar15 = 0xcbf29ce484222645;
        if (bVar4 != 0) {
          uVar15 = 0xcbf29ce484222645;
          pbVar10 = (byte *)(lVar9 + 5);
          do {
            uVar15 = (uVar15 ^ bVar4) * 0x100000001b3;
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 != 0);
        }
        if ((uVar5 < 9) || ((ulong)puVar11[4] == 0)) {
          lVar13 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar1 + (ulong)puVar11[4]);
          lVar13 = (long)puVar3 + (ulong)*puVar3;
        }
        sVar7 = strlen((char *)(lVar13 + 4));
        bVar4 = *(byte *)(lVar13 + 4);
        uVar12 = 0xcbf29ce484222645;
        if (bVar4 != 0) {
          uVar12 = 0xcbf29ce484222645;
          pbVar10 = (byte *)(lVar13 + 5);
          do {
            uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 != 0);
        }
        if (uVar5 < 5) {
          local_68 = 0;
        }
        else {
          local_68 = 0;
          if ((ulong)puVar11[2] != 0) {
            local_68 = *(undefined8 *)((long)piVar1 + (ulong)puVar11[2]);
          }
        }
        puVar8 = (ulong *)FUN_015642b0(param_1 + 0x80,&local_68);
        *puVar8 = uVar15;
        puVar8[1] = (ulong)(lVar9 + 4);
        puVar8[2] = sVar6;
        uVar15 = puVar8[3];
        puVar8[3] = 0;
        if (uVar15 != 0) {
          (**(code **)(*(long *)(uVar15 + 0x48) + 0x18))();
        }
        uVar15 = puVar8[7];
        puVar8[4] = uVar12;
        puVar8[5] = (ulong)(lVar13 + 4);
        puVar8[6] = sVar7;
        puVar8[7] = 0;
        if (uVar15 != 0) {
          (**(code **)(*(long *)(uVar15 + 0x48) + 0x18))();
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar2 + 1 + *puVar2);
    }
  }
  return;
}


