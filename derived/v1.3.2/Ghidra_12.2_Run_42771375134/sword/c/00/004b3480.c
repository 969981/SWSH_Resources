/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3480; name: FUN_004b3480
 */


int FUN_004b3480(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  
  pbVar15 = (byte *)*param_2;
  bVar3 = *pbVar15;
  *param_2 = (long)(pbVar15 + 1);
  uVar11 = bVar3 & 0x7f;
  if ((char)bVar3 < '\0') {
    pbVar15 = pbVar15 + 2;
    do {
      bVar3 = pbVar15[-1];
      *param_2 = (long)pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar11 = bVar3 & 0x7f | uVar11 << 7;
    } while ((char)bVar3 < '\0');
    if (uVar11 != 0) goto LAB_004b34ec;
LAB_004b35c8:
    pbVar15 = (byte *)*param_2;
    bVar3 = *pbVar15;
    *param_2 = (long)(pbVar15 + 1);
    uVar11 = bVar3 & 0x7f;
    if ((char)bVar3 < '\0') {
      pbVar15 = pbVar15 + 2;
      do {
        bVar3 = pbVar15[-1];
        *param_2 = (long)pbVar15;
        pbVar15 = pbVar15 + 1;
        uVar11 = bVar3 & 0x7f | uVar11 << 7;
      } while ((char)bVar3 < '\0');
      if (uVar11 != 0) goto LAB_004b3614;
    }
    else if ((bVar3 & 0x7f) != 0) {
LAB_004b3614:
      uVar9 = (**(code **)(*param_1 + 0x78))(param_1);
      if ((uVar9 & 1) == 0) goto LAB_004b374c;
      uVar17 = 0;
      do {
        uVar1 = *(undefined4 *)*param_2;
        *param_2 = (long)((undefined4 *)*param_2 + 1);
        lVar10 = (**(code **)(*param_1 + 0x60))(param_1,uVar1,1);
        if (lVar10 == 0) {
          return 2;
        }
        uVar5 = *(undefined1 *)*param_2;
        *param_2 = (long)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(lVar10 + 0x40) = uVar5;
        pbVar12 = (byte *)*param_2 + 1;
        bVar3 = *(byte *)*param_2;
        uVar14 = bVar3 & 0x7f;
        *param_2 = (long)pbVar12;
        pbVar15 = pbVar12;
        if ((char)bVar3 < '\0') {
          do {
            pbVar12 = pbVar15 + 1;
            bVar3 = *pbVar15;
            uVar18 = bVar3 & 0x7f;
            uVar6 = uVar14 << 7;
            uVar14 = uVar18 | uVar6;
            *param_2 = (long)pbVar12;
            pbVar15 = pbVar12;
          } while ((char)bVar3 < '\0');
          uVar14 = uVar18 | uVar6 & 0xffff;
          if (uVar14 != 0) goto LAB_004b36ac;
        }
        else if ((bVar3 & 0x7f) != 0) {
LAB_004b36ac:
          uVar2 = *(undefined4 *)pbVar12;
          *param_2 = (long)(pbVar12 + 4);
          uVar1 = *(undefined4 *)(pbVar12 + 4);
          *param_2 = (long)(pbVar12 + 8);
          iVar7 = FUN_004b2b60(lVar10,uVar1,uVar2,1);
          if (iVar7 != 1) {
            return iVar7;
          }
          uVar18 = 0;
          while (uVar18 = uVar18 + 1, uVar18 < uVar14) {
            puVar13 = (undefined4 *)*param_2;
            uVar2 = *puVar13;
            *param_2 = (long)(puVar13 + 1);
            uVar1 = puVar13[1];
            *param_2 = (long)(puVar13 + 2);
            iVar7 = FUN_004b2b60(lVar10,uVar1,uVar2,1);
            if (iVar7 != 1) {
              return iVar7;
            }
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar11);
    }
    iVar7 = 1;
    *(undefined1 *)(param_1 + 1) = 1;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    if ((bVar3 & 0x7f) == 0) goto LAB_004b35c8;
LAB_004b34ec:
    uVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((uVar9 & 1) != 0) {
      plVar8 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
      uVar9 = FUN_004b1f10(plVar8,uVar11);
      if ((uVar9 & 1) != 0) {
        uVar9 = 0;
        do {
          pbVar15 = (byte *)*param_2;
          bVar3 = *pbVar15;
          *param_2 = (long)(pbVar15 + 1);
          uVar16 = bVar3 & 0x7f;
          if ((char)bVar3 < '\0') {
            pbVar15 = pbVar15 + 2;
            do {
              bVar3 = pbVar15[-1];
              *param_2 = (long)pbVar15;
              pbVar15 = pbVar15 + 1;
              uVar16 = bVar3 & 0x7f | uVar16 << 7;
            } while ((char)bVar3 < '\0');
          }
          lVar10 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(ushort *)(*plVar8 + lVar10) = uVar16;
          uVar5 = *(undefined1 *)*param_2;
          *param_2 = (long)((undefined1 *)*param_2 + 1);
          *(undefined1 *)(*plVar8 + lVar10 + 2) = uVar5;
          cVar4 = *(char *)*param_2;
          *param_2 = (long)((char *)*param_2 + 1);
          *(byte *)(*plVar8 + lVar10 + 3) = *(byte *)(*plVar8 + lVar10 + 3) & 0xfe | cVar4 != '\0';
        } while (uVar9 != uVar11);
        goto LAB_004b35c8;
      }
    }
LAB_004b374c:
    iVar7 = 0x34;
  }
  return iVar7;
}


