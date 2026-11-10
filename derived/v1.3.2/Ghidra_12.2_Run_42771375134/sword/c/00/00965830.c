/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965830; name: FUN_00965830
 */


void FUN_00965830(long param_1,ulong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long lVar4;
  
  switch(param_3) {
  case 1:
    uVar3 = 0x2e;
    break;
  case 2:
    uVar3 = 0x2a;
    break;
  case 3:
    uVar3 = 0x2d;
    break;
  case 4:
    uVar3 = 0x2c;
    break;
  case 5:
    uVar3 = 0x2b;
    break;
  case 6:
    uVar3 = 0x2f;
    break;
  case 7:
    uVar3 = 0x30;
    break;
  default:
    uVar3 = 0xf9;
  }
  lVar4 = param_1 + (param_2 & 0xff) * 0xc;
  *(undefined1 *)(lVar4 + 0x34) = 1;
  *(undefined2 *)(lVar4 + 0x36) = uVar3;
  uVar2 = FUN_009319a0(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_00914000(uVar2,param_2 & 0xffffffff);
  *(undefined1 *)(lVar4 + 0x35) = uVar1;
  return;
}


