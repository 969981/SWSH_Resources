/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944eb0; name: FUN_00944eb0
 */


undefined8
FUN_00944eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
            undefined8 param_5,undefined4 param_6,char param_7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 unaff_w24;
  undefined1 auStack_48 [8];
  
  uVar5 = FUN_008e0b50(param_3);
  uVar4 = (uint)param_4;
  if ((uVar4 == 0x2a) && ((uVar5 & 1) != 0)) {
    return 2;
  }
  uVar5 = FUN_008e0b50(param_3);
  if ((uVar5 & 1) != 0) {
    FUN_008e0b60(param_3);
    FUN_008e5ed0();
    uVar5 = FUN_0093db60();
    if ((uVar5 & 1) != 0) {
      if (0x24 < uVar4) {
        return 3;
      }
      if ((1L << (param_4 & 0x3f) & 0x1080200000U) == 0) {
        return 3;
      }
    }
  }
  uVar5 = FUN_008e1810(param_3,param_4 & 0xffffffff);
  if ((param_7 != '\x02') && ((uVar5 & 1) != 0)) {
    return 1;
  }
  if ((((int)uVar4 < 6) && (iVar2 = FUN_008e19f0(param_3), param_7 == '\0')) && (iVar2 != 0)) {
    return 4;
  }
  uVar6 = FUN_009423e0(param_1);
  uVar5 = FUN_0092bd30(uVar6,param_3,param_2,param_4 & 0xffffffff,param_6);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  FUN_008e0a00(param_3);
  FUN_00942450(param_1);
  uVar6 = FUN_00925630();
  FUN_00945320(uVar6,auStack_48 + 8,auStack_48 + 0x10);
  uVar5 = FUN_008ec6c0(unaff_w24);
  if ((uVar4 == 3) && ((uVar5 & 1) != 0)) {
    return 4;
  }
  if (uVar4 == 4) {
    uVar3 = FUN_008e2920(param_3);
    if ((uVar3 & 0x7c00) == 0x2400) {
      return 2;
    }
    if ((uVar3 & 0x1f) == 9) {
      return 2;
    }
    if ((uVar3 & 0x3e0) == 0x120) {
      return 2;
    }
  }
  else if (uVar4 == 5) {
    uVar3 = FUN_008e2920(param_3);
    if ((uVar3 & 0x3e0) == 0x100) {
      return 2;
    }
    if ((uVar3 & 0x1f) == 8) {
      return 2;
    }
    if ((uVar3 & 0x7c00) == 0xc00) {
      return 2;
    }
    if ((uVar3 & 0x3e0) == 0x60) {
      return 2;
    }
    if ((uVar3 & 0x7c00) == 0x2000) {
      return 2;
    }
    if ((uVar3 & 0x1f) == 3) {
      return 2;
    }
  }
  if (uVar4 == 3) {
    uVar4 = FUN_008e2920(param_3);
    if ((uVar4 & 0x7c00) == 0x3800) {
      return 2;
    }
    if ((uVar4 & 0x1f) == 0xe) {
      return 2;
    }
    if ((uVar4 & 0x3e0) == 0x1c0) {
      return 2;
    }
    return 0;
  }
  switch(uVar4) {
  case 1:
    uVar4 = FUN_008e2920(param_3);
    if ((uVar4 & 0x7c00) == 0x3000) {
      return 2;
    }
    if ((uVar4 & 0x1f) == 0xc) {
      return 2;
    }
    if ((uVar4 & 0x3e0) == 0x180) {
      return 2;
    }
    break;
  case 0xc:
    uVar5 = FUN_008e0a10(param_3);
    if ((uVar5 & 1) != 0) {
      return 2;
    }
    break;
  case 0xe:
    iVar2 = FUN_008e19f0(param_3);
    if (iVar2 == 0) {
      return 0;
    }
    return 4;
  case 0x10:
    FUN_008e12a0(param_3,0x12);
    uVar5 = FUN_008dd580();
    goto joined_r0x009451d4;
  case 0x12:
    uVar4 = FUN_008e2920(param_3);
    if ((uVar4 & 0x7c00) == 0x2c00) {
      return 2;
    }
    if ((uVar4 & 0x1f) == 0xb) {
      return 2;
    }
    if ((uVar4 & 0x3e0) == 0x160) {
      return 2;
    }
    break;
  case 0x1c:
    uVar5 = FUN_008e0a10(param_3);
    if ((uVar5 & 1) != 0) {
      return 4;
    }
    sVar1 = FUN_008ed2f0(param_5);
    if (sVar1 == 0xa5) {
      return 4;
    }
    uVar5 = thunk_FUN_008dd3c0();
joined_r0x009451d4:
    if ((uVar5 & 1) != 0) {
      return 4;
    }
  }
  return 0;
}


