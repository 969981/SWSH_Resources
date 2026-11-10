/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c977a0; name: FUN_00c977a0
 */


undefined4 FUN_00c977a0(undefined8 param_1,ulong *param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  byte *pbVar11;
  
  puVar4 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  uVar8 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar8);
  uVar9 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar9);
  puVar5 = puVar2 + 1;
  uVar6 = (ulong)*puVar2;
  if (uVar6 == 0) {
    return 0;
  }
  puVar2 = puVar5 + uVar6;
  lVar7 = (long)puVar4 + uVar9 + uVar8 + (ulong)*puVar4 + 9;
  while( true ) {
    piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
    puVar4 = (uint *)((long)piVar1 + (ulong)puVar10[0x15]);
    uVar6 = (ulong)*puVar4;
    bVar3 = *(byte *)((long)puVar4 + uVar6 + 4);
    uVar8 = 0xcbf29ce484222645;
    if (bVar3 != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar11 = (byte *)(lVar7 + uVar6 + puVar10[0x15] + (ulong)*puVar5);
      do {
        uVar8 = (uVar8 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar3 != 0);
    }
    if (uVar8 == *param_2) break;
    puVar5 = puVar5 + 1;
    lVar7 = lVar7 + 4;
    if (puVar5 == puVar2) {
      return 0;
    }
  }
  if (*puVar10 < 0x35) {
    return 0;
  }
  if ((ulong)puVar10[0x1a] == 0) {
    return 0;
  }
  return *(undefined4 *)((long)piVar1 + (ulong)puVar10[0x1a]);
}


