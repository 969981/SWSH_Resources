/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01522140; name: FUN_01522140
 */


bool FUN_01522140(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return false;
  }
  uVar2 = FUN_00888c50(param_2 & 0xffff,0xe);
  switch(uVar2) {
  case 0:
    uVar3 = 0x3c;
    lVar4 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar3 = 0x1e;
    lVar4 = *(long *)(param_1 + 0x1360);
    break;
  case 2:
    uVar3 = 0x14;
    lVar4 = *(long *)(param_1 + 0x1368);
    break;
  case 3:
    uVar3 = 0x50;
    lVar4 = *(long *)(param_1 + 0x1370);
    break;
  case 4:
    uVar3 = 0x226;
    lVar4 = *(long *)(param_1 + 0x1378);
    break;
  case 5:
    uVar3 = 0xd2;
    lVar4 = *(long *)(param_1 + 0x1380);
    break;
  case 6:
    uVar3 = 100;
    lVar4 = *(long *)(param_1 + 5000);
    break;
  case 7:
    uVar3 = 100;
    lVar4 = *(long *)(param_1 + 0x1390);
    break;
  case 8:
    uVar3 = 0x40;
    lVar4 = *(long *)(param_1 + 0x1398);
    break;
  default:
    return true;
  }
  if (lVar4 == 0) {
    return true;
  }
  lVar5 = 0;
  uVar6 = 0xffffffff;
  do {
    uVar7 = *(uint *)(lVar4 + lVar5 * 4) & 0x7fff;
    if (uVar7 == (param_2 & 0xffff)) goto LAB_015222b4;
    uVar1 = (uint)lVar5;
    if (uVar7 != 0 || uVar6 != 0xffffffff) {
      uVar1 = uVar6;
    }
    lVar5 = lVar5 + 1;
    uVar6 = uVar1;
  } while ((uint)lVar5 < uVar3);
  if (uVar1 == 0xffffffff) {
    return true;
  }
  uVar7 = *(uint *)(lVar4 + (ulong)uVar1 * 4) & 0x7fff;
LAB_015222b4:
  return uVar7 != param_2;
}


