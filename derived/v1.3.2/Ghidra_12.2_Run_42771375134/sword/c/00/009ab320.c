/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ab320; name: FUN_009ab320
 */


undefined8 FUN_009ab320(undefined8 param_1,undefined8 *param_2,ulong *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_00918660(param_3);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  FUN_00946b40(param_2);
  switch((uint)*param_3 & 0xf) {
  case 1:
    *(undefined4 *)(param_2 + 1) = 1;
    *(uint *)(param_2 + 2) = (uint)*param_3 >> 0xd & 0xffff;
    *(byte *)((long)param_2 + 0xc) = (byte)((uint)*param_3 >> 9) & 0xf;
    uVar1 = FUN_00942460(param_1,(uint)*param_3 >> 9 & 0xf);
    *(undefined1 *)((long)param_2 + 0xd) = uVar1;
    *(byte *)((long)param_2 + 0x14) = (byte)(*param_3 >> 0x18) >> 7;
    *(byte *)((long)param_2 + 0x15) = *(byte *)((long)param_3 + 4) & 1;
    *(byte *)((long)param_2 + 0x16) = (byte)(*param_3 >> 0x21) & 1;
    goto LAB_009ab47c;
  case 2:
    *(undefined4 *)(param_2 + 1) = 2;
    *(char *)(param_2 + 3) = (char)(*param_3 >> 9);
    *(short *)((long)param_2 + 0x1a) = (short)(*param_3 >> 0x11);
    *(char *)((long)param_2 + 0x1c) = (char)(*param_3 >> 0x21);
    goto LAB_009ab47c;
  case 3:
    *(undefined4 *)(param_2 + 1) = 3;
    *(byte *)((long)param_2 + 0x1e) = (byte)((uint)*param_3 >> 9) & 7;
    *(byte *)((long)param_2 + 0x1f) = (byte)((uint)*param_3 >> 0xc) & 7;
    *(byte *)(param_2 + 4) = (byte)((uint)*param_3 >> 0xf) & 1;
    goto LAB_009ab47c;
  case 4:
    uVar5 = 4;
    break;
  case 5:
    uVar5 = 5;
    break;
  case 6:
    uVar5 = 6;
    break;
  case 7:
    uVar5 = 7;
    break;
  case 8:
    uVar5 = 9;
    break;
  case 9:
    uVar5 = 10;
    break;
  default:
    *(undefined4 *)(param_2 + 1) = 0;
    goto LAB_009ab47c;
  }
  *(undefined4 *)(param_2 + 1) = uVar5;
LAB_009ab47c:
  uVar4 = FUN_009425f0(param_1,param_4);
  iVar2 = FUN_009186f0(param_3);
  if (iVar2 == 3) {
    uVar4 = FUN_00914310(uVar4,(uint)*param_3 >> 9 & 7);
  }
  else if ((*param_3 >> 4 & 0x1f) == 0x1f) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009424e0(param_1);
  }
  *param_2 = uVar4;
  *(char *)(param_2 + 0xb) = (char)param_4;
  *(undefined2 *)((long)param_2 + 0x59) = 0;
  *(undefined1 *)((long)param_2 + 0x5b) = 0;
  FUN_00942390(param_1);
  uVar4 = FUN_009319f0();
  FUN_00935790(uVar4,(long)param_2 + 0x24);
  return 1;
}


