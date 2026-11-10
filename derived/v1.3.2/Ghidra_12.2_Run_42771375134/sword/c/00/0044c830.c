/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044c830; name: FUN_0044c830
 */


undefined8 FUN_0044c830(long param_1,long param_2)

{
  byte *__src;
  uint *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  void *__dest;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  uint *puVar19;
  long *plVar20;
  
  cVar3 = *(char *)(param_2 + 4);
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) & 0xfe | cVar3 != '\0';
  fVar7 = DAT_01d4c060;
  fVar6 = DAT_01d4bb48;
  if (cVar3 == '\0') {
    puVar9 = (undefined1 *)(param_2 + 5);
  }
  else {
    *(float *)(param_1 + 0x18) =
         (*(float *)(param_2 + 5) - (float)(int)(*(float *)(param_2 + 5) * DAT_01d4c060)) *
         DAT_01d4bb48;
    *(float *)(param_1 + 0x1c) =
         (*(float *)(param_2 + 9) - (float)(int)(*(float *)(param_2 + 9) * fVar7)) * fVar6;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x11);
    puVar9 = (undefined1 *)(param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x15);
  }
  *(undefined1 *)(param_1 + 0xa0) = *puVar9;
  *(undefined1 *)(param_1 + 0xa1) = puVar9[1];
  *(undefined1 *)(param_1 + 0xa2) = puVar9[2];
  *(undefined1 *)(param_1 + 0xa3) = puVar9[3];
  *(undefined1 *)(param_1 + 0xa4) = puVar9[4];
  *(undefined1 *)(param_1 + 0xa5) = puVar9[5];
  *(undefined1 *)(param_1 + 0xa6) = puVar9[6];
  uVar16 = (ulong)(byte)puVar9[7];
  if (uVar16 == 0) {
    uVar8 = 2;
  }
  else {
    uVar17 = 0;
    pbVar18 = puVar9 + 8;
    do {
      while( true ) {
        lVar12 = param_1 + uVar17 * 0x10;
        bVar4 = *pbVar18;
        uVar5 = *(ushort *)(pbVar18 + 1);
        plVar20 = (long *)(lVar12 + 0x30);
        if (*plVar20 != 0) {
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          *plVar20 = 0;
        }
        puVar19 = (uint *)(lVar12 + 0x38);
        puVar19[0] = 0;
        puVar19[1] = 0;
        if (uVar5 == 0) {
          return 0x1f;
        }
        lVar13 = (ulong)(uint)uVar5 * 0xc;
        __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,lVar13);
        *plVar20 = (long)__dest;
        if (__dest == (void *)0x0) {
          *puVar19 = 0;
          return 0x34;
        }
        __src = pbVar18 + 3;
        puVar1 = (uint *)(lVar12 + 0x3c);
        memcpy(__dest,__src,(ulong)uVar5 * 0xc);
        *puVar19 = (uint)uVar5;
        *puVar1 = (uint)bVar4;
        if (((uVar17 == *(byte *)(param_1 + 0xa0)) || (uVar17 == *(byte *)(param_1 + 0xa1))) ||
           (uVar17 == *(byte *)(param_1 + 0xa2))) break;
LAB_0044ca08:
        uVar17 = uVar17 + 1;
        pbVar18 = __src + lVar13;
        if (uVar16 <= uVar17) goto LAB_0044ca34;
      }
      if (bVar4 != 0) {
        if (bVar4 == 2) {
          uVar10 = 0;
          lVar12 = 4;
          do {
            *(float *)(*plVar20 + lVar12) = *(float *)(*plVar20 + lVar12) + 1.0;
            uVar10 = uVar10 + 1;
            lVar12 = lVar12 + 0xc;
          } while (uVar10 < *puVar19);
          *puVar1 = 0;
        }
        goto LAB_0044ca08;
      }
      *puVar1 = 4;
      uVar17 = uVar17 + 1;
      pbVar18 = __src + lVar13;
    } while (uVar17 < uVar16);
LAB_0044ca34:
    uVar14 = (uint)*(ushort *)(__src + lVar13);
    if (uVar14 != 0) {
      uVar15 = 0;
      puVar11 = (ushort *)((long)(__src + lVar13) + 2);
      while( true ) {
        bVar4 = (byte)puVar11[3];
        uVar2 = bVar4 & 0x7f;
        pbVar18 = (byte *)((long)puVar11 + 7);
        while ((char)bVar4 < '\0') {
          bVar4 = *pbVar18;
          uVar2 = bVar4 & 0x7f | uVar2 << 7;
          pbVar18 = pbVar18 + 1;
        }
        uVar5 = *(ushort *)(pbVar18 + 5);
        uVar8 = FUN_0044cb10(param_1,*(undefined4 *)puVar11,(byte)puVar11[2],
                             *(byte *)((long)puVar11 + 5),uVar2,*(undefined4 *)pbVar18,pbVar18[4],
                             pbVar18 + 7,uVar5,0);
        if ((int)uVar8 != 1) {
          return uVar8;
        }
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) break;
        puVar11 = (ushort *)(pbVar18 + 7 + (ulong)uVar5 * 0xc);
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


