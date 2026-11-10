/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01520ef0; name: FUN_01520ef0
 */


undefined8 FUN_01520ef0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  param_2 = param_2 & 0xffff;
  uVar2 = FUN_00888c50(param_2,0xe);
  switch(uVar2) {
  case 0:
    uVar3 = 0x3c;
    lVar4 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar3 = 0x1e;
    lVar4 = *(long *)(param_1 + 0x1360);
    goto joined_r0x01520f78;
  case 2:
    uVar3 = 0x14;
    lVar4 = *(long *)(param_1 + 0x1368);
joined_r0x01520f78:
    if (lVar4 == 0) {
      return 0;
    }
    goto LAB_0152100c;
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
    goto switchD_01520f34_default;
  }
  if (lVar4 != 0) {
LAB_0152100c:
    uVar5 = 0;
    uVar6 = 0xffffffff;
    do {
      uVar7 = *(uint *)(lVar4 + uVar5 * 4);
      if ((uVar7 & 0x7fff) == param_2) goto LAB_01521058;
      uVar1 = (uint)uVar5;
      if ((uVar7 & 0x7fff) != 0 || uVar6 != 0xffffffff) {
        uVar1 = uVar6;
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar1;
    } while (uVar5 < uVar3);
    if ((uVar1 != 0xffffffff) &&
       (uVar7 = *(uint *)(lVar4 + (ulong)uVar1 * 4), (uVar7 & 0x7fff) == param_2)) {
LAB_01521058:
      if ((param_3 & 0xffff) <= (uVar7 >> 0xf & 0x7fff)) {
        return 1;
      }
    }
  }
switchD_01520f34_default:
  return 0;
}


