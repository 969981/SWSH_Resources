/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01520600; name: FUN_01520600
 */


ulong FUN_01520600(long param_1,undefined4 param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  param_3 = param_3 & 0xffff;
  if (param_3 == 0) {
    return 0xffffffff;
  }
  switch(param_2) {
  case 0:
    uVar2 = 0x3c;
    lVar3 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar2 = 0x1e;
    lVar3 = *(long *)(param_1 + 0x1360);
    break;
  case 2:
    uVar2 = 0x14;
    lVar3 = *(long *)(param_1 + 0x1368);
    break;
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
    return 0xffffffff;
  }
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  while( true ) {
    if ((*(uint *)(lVar3 + uVar1 * 4) & 0x7fff) == param_3) {
      return uVar1;
    }
    if ((*(uint *)(lVar3 + uVar1 * 4 + 4) & 0x7fff) == param_3) break;
    uVar1 = uVar1 + 2;
    if (uVar2 <= (uint)uVar1) {
      return 0xffffffff;
    }
  }
  return (ulong)((uint)uVar1 | 1);
}


