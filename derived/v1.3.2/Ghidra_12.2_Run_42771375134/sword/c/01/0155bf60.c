/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155bf60; name: FUN_0155bf60
 */


ulong FUN_0155bf60(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar3 = FUN_014fd950();
  uVar5 = (uint)uVar3;
  iVar6 = (int)((ulong)uVar3 >> 0x20);
  if ((uVar5 & 0xff) == 5) {
    uVar2 = (uint)((ulong)uVar3 >> 8);
    uVar1 = uVar2 - 8;
    if (((uVar2 & 0xff) == 3) || ((uVar1 & 0xff) < 10)) {
      if ((uVar5 >> 8 & 0xff) == 3) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155c3d0(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 8) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155c6d0(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 9) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155c8b0(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 10) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155caa0(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 0xb) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155cc90(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 0xc) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155ce80(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 0xd) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155d060(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 0xe) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155d250(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 0xf) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155d440(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else if (((uVar5 >> 8 & 0xff) == 0x10) && ((uVar1 & 0xff) < 10)) {
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155d630(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
      else {
        uVar4 = 0;
        if ((uVar5 >> 8 & 0xff) != 0x11) {
          uVar7 = 0;
          goto LAB_0155c260;
        }
        uVar7 = 0;
        if (9 < (uVar1 & 0xff)) goto LAB_0155c260;
        if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
          uVar4 = FUN_0155d820(param_1);
          uVar7 = uVar4 & 0xffffffffffffff00;
          goto LAB_0155c260;
        }
      }
    }
  }
  else {
    if ((uVar5 - 8 & 0xff) < 10) {
      uVar7 = 0;
      uVar4 = 1;
      goto LAB_0155c260;
    }
    if ((uVar5 - 3 & 0xff) < 2) {
      if ((uVar5 & 0xff) == 3) {
        uVar7 = 0;
        uVar4 = 1;
        goto LAB_0155c260;
      }
      if (((uVar5 >> 0x10 & 0xff) == 0) || (iVar6 == 0)) {
        uVar4 = FUN_0155c290(param_1);
        uVar7 = uVar4 & 0xffffffffffffff00;
        goto LAB_0155c260;
      }
    }
  }
  uVar4 = 0;
  uVar7 = 0;
LAB_0155c260:
  return uVar7 | uVar4 & 0xff;
}


