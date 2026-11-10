/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1d60; name: FUN_006a1d60
 */


ulong FUN_006a1d60(undefined8 *param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  
  piVar5 = (int *)*param_1;
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0xb) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[5], uVar6 == 0)) {
    puVar7 = (uint *)0x0;
    uVar2 = uRam0000000000000000;
  }
  else {
    puVar7 = (uint *)((long)piVar5 + uVar6);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    uVar2 = *puVar7;
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = 0;
  lVar8 = (long)puVar7 + 9;
  while( true ) {
    uVar9 = (ulong)puVar7[uVar6 + 1];
    piVar5 = (int *)((long)(puVar7 + uVar6 + 1) + uVar9);
    uVar12 = (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5));
    uVar11 = 0xcbf29ce484222645;
    puVar1 = (uint *)((long)piVar5 + uVar12);
    uVar4 = (ulong)*puVar1;
    bVar3 = *(byte *)((long)puVar1 + uVar4 + 4);
    if (bVar3 != 0) {
      uVar11 = 0xcbf29ce484222645;
      pbVar10 = (byte *)(lVar8 + uVar4 + uVar12 + uVar9);
      do {
        uVar11 = (uVar11 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar3 != 0);
    }
    if (*param_2 == uVar11) break;
    uVar6 = uVar6 + 1;
    lVar8 = lVar8 + 4;
    if (uVar2 <= uVar6) {
      return uVar6 << 0x20;
    }
  }
  return uVar6 << 0x20 | 1;
}


