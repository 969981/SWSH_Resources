/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00816490; name: FUN_00816490
 */


byte FUN_00816490(uint *param_1,uint *param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  
  iVar10 = (int)param_2;
  *param_4 = 0;
  if (param_3 == 0) {
    return 0xf1;
  }
  puVar4 = (uint *)((long)param_2 + (long)param_3);
  lVar13 = *(long *)(param_1 + 0xe);
  lVar5 = *(long *)(param_1 + 8) + (ulong)*param_1;
  puVar14 = param_2;
  do {
    for (puVar15 = puVar14;
        (uVar12 = (ulong)puVar15 & 7, puVar15 < puVar4 && (bVar9 = uVar12 != 0, uVar12 = 0, bVar9));
        puVar15 = (uint *)((long)puVar15 + 1)) {
      if (*(char *)(lVar13 + (ulong)(byte)*puVar15) != '\0') goto joined_r0x00816620;
    }
    puVar14 = puVar15;
    if (uVar12 == 0) {
      do {
        do {
          puVar15 = puVar14;
          if ((uint *)((long)puVar4 - 7U) <= puVar15) goto joined_r0x00816620;
          puVar14 = puVar15 + 2;
          uVar6 = *puVar15;
          uVar7 = puVar15[1];
        } while (((uVar6 - param_1[6] | uVar6 + param_1[7] | uVar7 - param_1[6] | uVar7 + param_1[7]
                  ) & 0x80808080) == 0);
        if (((*(char *)(lVar13 + (ulong)*(byte *)((long)puVar15 + 1)) != '\0' ||
             *(char *)(lVar13 + ((ulong)uVar6 & 0xff)) != '\0') ||
            *(char *)(lVar13 + (ulong)*(byte *)((long)puVar15 + 2)) != '\0') ||
            *(char *)(lVar13 + (ulong)*(byte *)((long)puVar15 + 3)) != '\0') break;
        pbVar1 = (byte *)((long)puVar15 + 5);
        pbVar2 = (byte *)((long)puVar15 + 6);
        pbVar3 = (byte *)((long)puVar15 + 7);
        puVar15 = puVar15 + 1;
      } while (!(((*(char *)(lVar13 + (ulong)*pbVar1) != '\0' ||
                  *(char *)(lVar13 + ((ulong)uVar7 & 0xff)) != '\0') ||
                 *(char *)(lVar13 + (ulong)*pbVar2) != '\0') ||
                *(char *)(lVar13 + (ulong)*pbVar3) != '\0'));
    }
joined_r0x00816620:
    lVar11 = lVar5;
    if (puVar4 <= puVar15) {
LAB_0081662c:
      if ((uint)((int)lVar11 - (int)lVar5) < param_1[1]) {
        *param_4 = (int)puVar15 - iVar10;
        return 0xf1;
      }
      break;
    }
    puVar16 = (uint *)((long)puVar15 + -1);
    puVar14 = puVar15;
    while( true ) {
      puVar15 = (uint *)((long)puVar14 + 1);
      bVar8 = *(byte *)(lVar11 + (ulong)(byte)*puVar14);
      if (0xef < bVar8) break;
      lVar11 = lVar5 + (int)((uint)bVar8 << (ulong)(param_1[4] & 0x1f));
      puVar16 = (uint *)((long)puVar16 + 1);
      puVar14 = puVar15;
      if (puVar4 <= puVar15) goto LAB_0081662c;
    }
    if (param_1[1] <= (uint)((int)lVar11 - (int)lVar5)) {
      do {
        puVar14 = puVar16;
        if (puVar14 <= param_2) break;
        puVar16 = (uint *)((long)puVar14 + -1);
      } while ((*puVar14 & 0xc0) == 0x80);
    }
    if (bVar8 != 0xfd) {
      *param_4 = (int)puVar14 - iVar10;
      return bVar8;
    }
  } while( true );
  while ((*(byte *)puVar15 & 0xc0) == 0x80) {
    puVar15 = (uint *)((long)puVar15 + -1);
    if (puVar15 <= param_2) break;
  }
  *param_4 = (int)puVar15 - iVar10;
  return 0xf0;
}


