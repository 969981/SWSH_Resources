/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015209b0; name: FUN_015209b0
 */


undefined8 FUN_015209b0(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_2 = param_2 & 0xffff;
  uVar1 = FUN_00888c50(param_2,0xe);
  switch(uVar1) {
  case 0:
    uVar2 = 0x3c;
    lVar3 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar2 = 0x1e;
    lVar3 = *(long *)(param_1 + 0x1360);
    goto joined_r0x01520a38;
  case 2:
    uVar2 = 0x14;
    lVar3 = *(long *)(param_1 + 0x1368);
joined_r0x01520a38:
    if (lVar3 == 0) {
      return 0;
    }
    goto LAB_01520acc;
  case 3:
    uVar2 = 0x50;
    lVar3 = *(long *)(param_1 + 0x1370);
    break;
  case 4:
    uVar2 = 0x226;
    lVar3 = *(long *)(param_1 + 0x1378);
    break;
  case 5:
    uVar2 = 0xd2;
    lVar3 = *(long *)(param_1 + 0x1380);
    break;
  case 6:
    uVar2 = 100;
    lVar3 = *(long *)(param_1 + 5000);
    break;
  case 7:
    uVar2 = 100;
    lVar3 = *(long *)(param_1 + 0x1390);
    break;
  case 8:
    uVar2 = 0x40;
    lVar3 = *(long *)(param_1 + 0x1398);
    break;
  default:
    goto switchD_015209f4_default;
  }
  if (lVar3 != 0) {
LAB_01520acc:
    lVar4 = 0;
    uVar5 = 0xffffffff;
    do {
      uVar6 = *(uint *)(lVar3 + lVar4 * 4);
      uVar7 = uVar6 & 0x7fff;
      if (uVar7 == param_2) goto LAB_01520b10;
      uVar6 = (uint)lVar4;
      if (uVar7 != 0 || uVar5 != 0xffffffff) {
        uVar6 = uVar5;
      }
      lVar4 = lVar4 + 1;
      uVar5 = uVar6;
    } while ((uint)lVar4 < uVar2);
    if (uVar6 != 0xffffffff) {
      uVar6 = *(uint *)(lVar3 + (ulong)uVar6 * 4);
      uVar7 = uVar6 & 0x7fff;
LAB_01520b10:
      if (uVar7 != param_2) {
        return 1;
      }
      if ((uVar6 >> 0xf & 0x7fff) + (param_3 & 0xffff) < 1000) {
        return 1;
      }
    }
  }
switchD_015209f4_default:
  return 0;
}


