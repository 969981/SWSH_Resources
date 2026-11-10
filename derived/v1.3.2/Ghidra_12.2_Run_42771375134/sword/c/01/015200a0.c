/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015200a0; name: FUN_015200a0
 */


undefined8 FUN_015200a0(long param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined8 *)(param_1 + 0x1358);
    *param_3 = 0x3c;
    return uVar1;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x1360);
    *param_3 = 0x1e;
    return uVar1;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0x1368);
    *param_3 = 0x14;
    return uVar1;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x1370);
    *param_3 = 0x50;
    return uVar1;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0x1378);
    *param_3 = 0x226;
    return uVar1;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + 0x1380);
    *param_3 = 0xd2;
    return uVar1;
  case 6:
    lVar2 = 5000;
    break;
  case 7:
    lVar2 = 0x1390;
    break;
  case 8:
    uVar1 = *(undefined8 *)(param_1 + 0x1398);
    *param_3 = 0x40;
    return uVar1;
  default:
    *param_3 = 0;
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *param_3 = 100;
  return uVar1;
}


