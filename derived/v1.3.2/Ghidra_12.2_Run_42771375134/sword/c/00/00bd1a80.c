/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd1a80; name: FUN_00bd1a80
 */


int FUN_00bd1a80(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar7 = *(int *)(param_1 + 0x3008);
  iVar5 = 3;
  if (iVar7 != 1) {
    iVar5 = 4;
  }
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = iVar5;
  }
  switch(iVar2) {
  case 0:
    lVar9 = 0x2d68;
    break;
  case 1:
    lVar9 = 0x2d86;
    break;
  case 2:
    lVar9 = 0x2da4;
    break;
  case 3:
    lVar9 = 0x2dc2;
    break;
  default:
    lVar9 = 0;
    goto LAB_00bd1afc;
  }
  lVar9 = param_1 + lVar9;
LAB_00bd1afc:
  iVar5 = 6;
  if (iVar7 == 1) {
    iVar5 = 1;
  }
  uVar6 = *(uint *)(param_1 + 0x300c);
  iVar7 = 0;
  if (uVar6 >> 0x1a != 0) {
    if ((param_2 & 1) == 0) {
      uVar11 = 0;
      do {
        if ((uVar6 & 0x3f00000) != 0) {
          lVar1 = param_1 + 0x2d86 + (long)iVar7;
          lVar12 = 0;
          do {
            uVar4 = (ulong)((int)lVar12 +
                           (uVar6 >> 8 & 0x3f) + iVar5 * (uVar11 + (uVar6 >> 0xe & 0x3f)));
            uVar3 = *(undefined1 *)(lVar1 + lVar12);
            *(undefined1 *)(lVar1 + lVar12) = *(undefined1 *)(lVar9 + uVar4);
            lVar12 = lVar12 + 1;
            *(undefined1 *)(lVar9 + uVar4) = uVar3;
            uVar6 = *(uint *)(param_1 + 0x300c);
          } while ((uint)lVar12 < (uVar6 >> 0x14 & 0x3f));
          iVar7 = iVar7 + (uint)lVar12;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6 >> 0x1a);
    }
    else {
      uVar11 = 0;
      do {
        if ((uVar6 & 0x3f00000) != 0) {
          lVar1 = param_1 + 0x2d86 + (long)iVar7;
          lVar12 = 0;
          do {
            uVar4 = FUN_0167b9f0(*(undefined8 *)(param_1 + 0x58),
                                 param_1 + (ulong)*(byte *)(lVar1 + lVar12) * 0x78 + 0x68);
            if ((uVar4 & 1) != 0) {
              uVar4 = (ulong)((int)lVar12 +
                             (*(uint *)(param_1 + 0x300c) >> 8 & 0x3f) +
                             iVar5 * (uVar11 + (*(uint *)(param_1 + 0x300c) >> 0xe & 0x3f)));
              uVar3 = *(undefined1 *)(lVar1 + lVar12);
              *(undefined1 *)(lVar1 + lVar12) = *(undefined1 *)(lVar9 + uVar4);
              *(undefined1 *)(lVar9 + uVar4) = uVar3;
            }
            uVar6 = *(uint *)(param_1 + 0x300c);
            lVar12 = lVar12 + 1;
          } while ((uint)lVar12 < (uVar6 >> 0x14 & 0x3f));
          iVar7 = iVar7 + (uint)lVar12;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6 >> 0x1a);
    }
  }
  pbVar10 = (byte *)(param_1 + 0x2d68);
  if (iVar2 == 3) {
    pbVar10 = (byte *)(param_1 + 0x2dc2);
    lVar9 = 6;
    puVar8 = (undefined8 *)(param_1 + 0x2fa8);
  }
  else {
    if (iVar2 != 0) {
      return iVar7;
    }
    puVar8 = (undefined8 *)(param_1 + 0x2dc8);
    lVar9 = 0x1e;
  }
  do {
    local_68 = *puVar8;
    lVar1 = param_1 + (ulong)*pbVar10 * 0x78 + 0x68;
    FUN_0167c250(*(undefined8 *)(param_1 + 0x58),lVar1);
    FUN_0167bfe0(*(undefined8 *)(param_1 + 0x58),&local_68,lVar1);
    local_70 = 0;
    FUN_0167b630(*(undefined8 *)(param_1 + 0x58),lVar1,&local_70);
    lVar9 = lVar9 + -1;
    puVar8 = puVar8 + 1;
    pbVar10 = pbVar10 + 1;
  } while (lVar9 != 0);
  return iVar7;
}


