/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01521e10; name: FUN_01521e10
 */


void FUN_01521e10(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_01520330();
  switch(param_2) {
  case 0:
    lVar2 = 0x1358;
    break;
  case 1:
    lVar2 = 0x1360;
    break;
  case 2:
    lVar2 = 0x1368;
    break;
  case 3:
    lVar2 = 0x1370;
    break;
  case 4:
    lVar2 = 0x1378;
    break;
  case 5:
    lVar2 = 0x1380;
    break;
  case 6:
    lVar2 = 5000;
    break;
  case 7:
    lVar2 = 0x1390;
    break;
  case 8:
    lVar2 = 0x1398;
    break;
  default:
    lVar2 = 0;
    goto LAB_01521e9c;
  }
  lVar2 = *(long *)(param_1 + lVar2);
LAB_01521e9c:
  FUN_01522bc0(lVar2,lVar2 + (uVar1 & 0xffffffff) * 4);
  return;
}


