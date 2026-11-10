/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c976a0; name: FUN_00c976a0
 */


int FUN_00c976a0(undefined8 param_1,ulong *param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  
  puVar5 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
  uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar9);
  uVar10 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar10);
  puVar7 = puVar2 + 1;
  uVar8 = (ulong)*puVar2;
  if (uVar8 == 0) {
    return 0;
  }
  iVar4 = 0;
  puVar2 = puVar7 + uVar8;
  lVar6 = (long)puVar5 + uVar10 + uVar9 + (ulong)*puVar5 + 9;
  do {
    piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (0x2a - (long)*piVar1));
    uVar8 = 0xcbf29ce484222645;
    puVar5 = (uint *)((long)piVar1 + uVar9);
    uVar10 = (ulong)*puVar5;
    bVar3 = *(byte *)((long)puVar5 + uVar10 + 4);
    if (bVar3 != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar11 = (byte *)(lVar6 + uVar10 + uVar9 + (ulong)*puVar7);
      do {
        uVar8 = (uVar8 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar3 != 0);
    }
    puVar7 = puVar7 + 1;
    if (uVar8 == *param_2) {
      iVar4 = iVar4 + 1;
    }
    lVar6 = lVar6 + 4;
  } while (puVar7 != puVar2);
  return iVar4;
}


