/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01520330; name: FUN_01520330
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_01520330(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  switch(param_2) {
  case 0:
    lVar5 = 0x3c;
    puVar6 = *(uint **)(param_1 + 0x1358);
    break;
  case 1:
    lVar5 = 0x1e;
    puVar6 = *(uint **)(param_1 + 0x1360);
    break;
  case 2:
    lVar5 = 0x14;
    puVar6 = *(uint **)(param_1 + 0x1368);
    break;
  case 3:
    lVar5 = 0x50;
    puVar6 = *(uint **)(param_1 + 0x1370);
    break;
  case 4:
    lVar5 = 0x226;
    puVar6 = *(uint **)(param_1 + 0x1378);
    break;
  case 5:
    lVar5 = 0xd2;
    puVar6 = *(uint **)(param_1 + 0x1380);
    break;
  case 6:
    lVar5 = 100;
    puVar6 = *(uint **)(param_1 + 5000);
    break;
  case 7:
    lVar5 = 100;
    puVar6 = *(uint **)(param_1 + 0x1390);
    break;
  case 8:
    lVar5 = 0x40;
    puVar6 = *(uint **)(param_1 + 0x1398);
    break;
  default:
    return 0;
  }
  if (puVar6 != (uint *)0x0) {
    puVar8 = puVar6;
    lVar7 = lVar5;
    do {
      while ((*puVar8 & 0x7fff) != 0) {
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
        if (lVar7 == 0) goto LAB_01520464;
      }
      *puVar8 = *puVar8 & 0xc0007fff;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
LAB_01520464:
    uVar9 = 0;
    uVar4 = (uint)lVar5;
    do {
      uVar1 = (int)uVar9 + 1;
      if ((uVar1 & 0xffff) < uVar4) {
        uVar10 = (ulong)uVar1;
        do {
          while( true ) {
            uVar2 = puVar6[uVar9 & 0xffff];
            if ((uVar2 & 0x3fff8000) == 0) break;
            uVar2 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar2;
            if (uVar4 <= (uVar2 & 0xffff)) goto LAB_015204c0;
          }
          puVar6[uVar9 & 0xffff] = puVar6[uVar10 & 0xffff];
          puVar6[uVar10 & 0xffff] = uVar2;
          uVar2 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar2;
        } while ((uVar2 & 0xffff) < uVar4);
      }
LAB_015204c0:
      uVar9 = (ulong)uVar1;
    } while ((uVar1 & 0xffff) < uVar4 - 1);
  }
  switch(param_2) {
  case 0:
    uVar4 = 0x3c;
    lVar5 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar4 = 0x1e;
    lVar5 = *(long *)(param_1 + 0x1360);
    break;
  case 2:
    uVar4 = 0x14;
    lVar5 = *(long *)(param_1 + 0x1368);
    break;
  case 3:
    uVar4 = 0x50;
    lVar5 = *(long *)(param_1 + 0x1370);
    break;
  case 4:
    uVar4 = 0x226;
    lVar5 = *(long *)(param_1 + 0x1378);
    break;
  case 5:
    uVar4 = 0xd2;
    lVar5 = *(long *)(param_1 + 0x1380);
    break;
  case 6:
    uVar4 = 100;
    lVar5 = *(long *)(param_1 + 5000);
    break;
  case 7:
    uVar4 = 100;
    lVar5 = *(long *)(param_1 + 0x1390);
    break;
  case 8:
    uVar4 = 0x40;
    lVar5 = *(long *)(param_1 + 0x1398);
    break;
  default:
    return 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar7 = 0;
  iVar3 = 0;
  do {
    uVar1 = *(uint *)(lVar5 + lVar7 * 4);
    if ((uVar1 & 0x7fff) == 0) {
      return iVar3;
    }
    lVar7 = lVar7 + 1;
    if ((uVar1 & 0x3fff8000) != 0) {
      iVar3 = iVar3 + 1;
    }
  } while ((uint)lVar7 < uVar4);
  return iVar3;
}


