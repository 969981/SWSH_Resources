/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a320; name: FUN_00a5a320
 */


void FUN_00a5a320(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  ulong uVar4;
  int iVar5;
  ushort uVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x689) != '\0') {
    return;
  }
  FUN_010364c0(param_1,2);
  uVar1 = FUN_0077d480(param_2);
  uVar7 = (ulong)uVar1;
  if (uVar1 == 0) goto LAB_00a5a418;
  psVar3 = (short *)FUN_0077d470(param_2);
  if ((*psVar3 == 0x10) && ((ulong)(ushort)psVar3[1] != 0)) {
    uVar4 = 0;
    do {
      if (psVar3[uVar4 + 2] == -0x41fa) {
        uVar6 = 0x10;
        uVar4 = 1;
        iVar5 = 1;
        goto LAB_00a5a3b8;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ushort)psVar3[1]);
  }
  goto LAB_00a5a414;
  while( true ) {
    uVar6 = psVar3[uVar4];
    uVar4 = uVar4 + 1;
    if ((iVar5 == 1) && ((uVar6 & 0xfffe) == 0xbe00)) break;
LAB_00a5a3b8:
    if (uVar6 == 10) {
      iVar5 = iVar5 + 1;
    }
    if (uVar7 <= uVar4) {
      if (iVar5 == 2) {
        uVar1 = FUN_00a5a500(psVar3,*(undefined8 *)(param_1 + 0x638),param_2);
        uVar2 = FUN_00a5b600(*(undefined8 *)(param_1 + 0x620));
        if (uVar1 <= uVar2) {
          uVar7 = FUN_00a5b5f0(*(undefined8 *)(param_1 + 0x620),*(undefined8 *)(param_1 + 0x638));
          uVar7 = uVar7 & 0xffffffff;
          goto LAB_00a5a418;
        }
      }
      break;
    }
  }
LAB_00a5a414:
  uVar7 = 0;
LAB_00a5a418:
  FUN_00a5b5c0(*(undefined8 *)(param_1 + 0x620));
  *(undefined1 *)(param_1 + 0x641) = *(undefined1 *)(param_3 + 9);
  if ((uVar7 & 1) != 0) {
    param_2 = *(undefined8 *)(param_1 + 0x638);
  }
  FUN_00a5b5d0(*(undefined8 *)(param_1 + 0x620),param_2);
  FUN_00a5b640(*(undefined8 *)(param_1 + 0x620),*(undefined4 *)(param_1 + 0x634));
  FUN_00a5a600(param_1,*(undefined1 *)(param_3 + 1),*(undefined1 *)(param_3 + 8));
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_3 + 4);
  if ((*(char *)(param_3 + 10) != '\0') && (*(char *)(param_1 + 0x6a8) == '\0')) {
    if ((*(long *)(param_1 + 0x690) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0x690) != 0)) {
      FUN_00ffd010(param_1 + 0x100,param_1 + 0x690);
    }
    if ((*(long *)(param_1 + 0x698) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0x698) != 0)) {
      FUN_00ffd010(param_1 + 0x100,param_1 + 0x698);
    }
    *(undefined1 *)(param_1 + 0x6a8) = 1;
  }
  *(undefined4 *)(param_1 + 0x5cc) = 2;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined1 *)(param_1 + 0x689) = 1;
  return;
}


