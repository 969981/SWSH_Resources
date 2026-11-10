/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e5890; name: FUN_005e5890
 */


void FUN_005e5890(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  
  if (*(int *)(param_3 + 0x10) < 1) {
    return;
  }
  uVar4 = *(ulong *)(param_2 + 0x10);
  lVar12 = 0;
  do {
    while (plVar10 = *(long **)(*(long *)(param_3 + 0x28) + lVar12 * 8), 0 < (int)uVar4) {
      lVar13 = 0;
      bVar14 = false;
      do {
        while( true ) {
          plVar11 = *(long **)(*(long *)(param_2 + 0x28) + lVar13 * 8);
          lVar3 = (**(code **)(*plVar11 + 0xa0))(plVar11);
          uVar4 = (**(code **)(*plVar10 + 0xa0))(plVar10);
          if (*(long *)(uVar4 + 0x10) == 0) break;
          pbVar8 = *(byte **)(uVar4 + 8);
          bVar1 = *pbVar8;
          lVar6 = *(long *)(lVar3 + 0x10);
          if (bVar1 == 0) goto joined_r0x005e5998;
          if (lVar6 != 0) {
            pbVar9 = *(byte **)(lVar3 + 8);
            uVar5 = (uint)*pbVar9;
            if (*pbVar9 == 0) goto LAB_005e599c;
            do {
              pbVar9 = pbVar9 + 1;
              pbVar8 = pbVar8 + 1;
              uVar2 = tolower((uint)bVar1);
              uVar5 = tolower(uVar5);
              uVar4 = (ulong)uVar5;
              if (((uVar2 & 0xff) < (uVar5 & 0xff)) || ((uVar5 & 0xff) < (uVar2 & 0xff)))
              goto LAB_005e599c;
              bVar1 = *pbVar8;
              uVar5 = (uint)*pbVar9;
            } while ((bVar1 != 0) && (uVar5 != 0));
            if ((*pbVar9 != 0 || bVar1 != 0) || bVar1 != 0) goto LAB_005e599c;
            goto LAB_005e59b4;
          }
LAB_005e599c:
          uVar4 = *(ulong *)(param_2 + 0x10);
          lVar13 = lVar13 + 1;
          if ((int)uVar4 <= lVar13) goto LAB_005e59d4;
        }
        lVar6 = *(long *)(lVar3 + 0x10);
joined_r0x005e5998:
        if (lVar6 != 0) goto LAB_005e599c;
LAB_005e59b4:
        FUN_005e5e30(uVar4,plVar11,plVar10);
        bVar14 = true;
        uVar4 = *(ulong *)(param_2 + 0x10);
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar4);
LAB_005e59d4:
      if (!bVar14) break;
LAB_005e5a38:
      lVar12 = lVar12 + 1;
      if (*(int *)(param_3 + 0x10) <= lVar12) {
        return;
      }
    }
    uVar7 = *(ulong *)(param_2 + 0x18);
    if (uVar4 < uVar7) {
LAB_005e5a18:
      *(long **)(*(long *)(param_2 + 0x28) + uVar4 * 8) = plVar10;
      uVar4 = *(long *)(param_2 + 0x10) + 1;
      *(ulong *)(param_2 + 0x10) = uVar4;
      *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28);
      *(ulong *)(param_2 + 0x38) = *(long *)(param_2 + 0x28) + uVar4 * 8;
      goto LAB_005e5a38;
    }
    lVar13 = uVar7 * 2;
    if (lVar13 == 0) {
      lVar13 = 1;
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      lVar13 = *(long *)(param_2 + 0x40) + uVar7;
    }
    uVar4 = FUN_005e7cf0(param_2,lVar13,1);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x10);
      goto LAB_005e5a18;
    }
    uVar4 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    lVar12 = lVar12 + 1;
    if (*(int *)(param_3 + 0x10) <= lVar12) {
      return;
    }
  } while( true );
}


