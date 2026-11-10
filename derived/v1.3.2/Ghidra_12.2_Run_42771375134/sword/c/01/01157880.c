/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01157880; name: FUN_01157880
 */


void FUN_01157880(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    FUN_0115ae00(*(undefined8 *)(param_1 + 0xa8),0);
    return;
  default:
    return;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
    FUN_0115e100(*(undefined8 *)(param_1 + 0xa0),*(long *)(param_1 + 0x70) + 0x148);
    lVar2 = *(long *)(param_1 + 0x70);
    lVar4 = 0;
    if (*(char *)(lVar2 + 0x18d) != '\0') {
      lVar4 = lVar2 + 0x168;
    }
    FUN_0115eb10(*(undefined8 *)(param_1 + 0xa0),lVar4,*(undefined4 *)(lVar2 + 0x184));
    FUN_0115e030(*(undefined8 *)(param_1 + 0xa0),*(undefined1 *)(*(long *)(param_1 + 0x70) + 0x18d))
    ;
    return;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    break;
  case 0x20:
    FUN_0115b1c0(*(undefined8 *)(param_1 + 0xa8));
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    FUN_0115afc0(*(undefined8 *)(param_1 + 0xa8));
    return;
  case 0x2b:
  case 0x2c:
    FUN_0115c2a0(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  FUN_0115ae00(*(undefined8 *)(param_1 + 0xa8),0);
  if (*(long *)(param_1 + 0xa8) == 0) {
    return;
  }
  uVar1 = 4;
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x54) != '\x02') {
    uVar1 = 2;
  }
  FUN_0115af30(*(long *)(param_1 + 0xa8),0,*(undefined1 *)(*(long *)(param_1 + 0x70) + 0xd8));
  uVar3 = 1;
  lVar4 = 0xfc;
  do {
    FUN_0115af30(*(undefined8 *)(param_1 + 0xa8),uVar3 & 0xffffffff,
                 *(undefined1 *)(*(long *)(param_1 + 0x70) + lVar4));
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x24;
  } while (uVar3 < uVar1);
  return;
}


