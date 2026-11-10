/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e03c90; name: FUN_00e03c90
 */


void FUN_00e03c90(long param_1,long *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if ((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 0x54) != 0)) {
    return;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar7 + 0x7d8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = FUN_00e331a0(lVar5,param_2);
  if ((lVar7 == 0) || (iVar2 = FUN_00e332a0(lVar5,lVar7), iVar2 != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x71);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if ((param_3 & 1) == 0) {
LAB_00e03dec:
    if ((uVar6 & 0xff) == 0) {
      return;
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x59);
    if ((*(byte *)(param_1 + 0x59) == 0) && ((param_3 & 1) == 0)) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x54);
    if (0xfffe < uVar4) goto LAB_00e03e70;
  }
  else {
    lVar7 = *param_2;
    bVar1 = (uVar6 & 0xff) != 0;
    if (!bVar1) {
      lVar7 = -0x340d631b7bddd9bb;
    }
    if ((*(long *)(param_1 + 0x60) == -0x340d631b7bddd9bb) ||
       (((uVar6 & 0xff) != 0) != (bool)*(char *)(param_1 + 0x70))) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(long *)(param_1 + 0x60) = lVar7;
      *(bool *)(param_1 + 0x70) = bVar1;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      goto LAB_00e03dec;
    }
    if (lVar7 == *(long *)(param_1 + 0x60)) goto LAB_00e03dec;
    if ((uVar6 & 0xff) == 0) {
      *(long *)(param_1 + 0x60) = lVar7;
      *(bool *)(param_1 + 0x70) = bVar1;
      return;
    }
    uVar3 = 0;
    uVar4 = 0;
    *(bool *)(param_1 + 0x70) = bVar1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(long *)(param_1 + 0x60) = lVar7;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  *(uint *)(param_1 + 0x54) = uVar4 + 1;
  if ((uVar6 >> 0x18 < uVar4 + 1) || (*(char *)(param_1 + 0x5a) == '\0')) {
    uVar3 = *(byte *)(param_1 + 0x58) + uVar3;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    *(char *)(param_1 + 0x58) = (char)uVar3;
    if ((uVar6 >> 8 & 0xff) <= (uVar3 & 0xff)) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x5c) + (uVar6 & 0xff);
      *(undefined1 *)(param_1 + 0x58) = 0;
      if ((uVar6 >> 0x10 & 0xff) < uVar3) {
        uVar3 = uVar6 >> 0x10 & 0xff;
      }
      *(short *)(param_1 + 0x5c) = (short)uVar3;
    }
  }
LAB_00e03e70:
  *(undefined1 *)(param_1 + 0x59) = 1;
  return;
}


