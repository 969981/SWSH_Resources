/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014de920; name: FUN_014de920
 */


void FUN_014de920(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
      iVar1 = *(int *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x68) == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0x70),1,1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = 2;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
    }
    *(undefined4 *)(param_1 + 0x68) = 1;
    iVar1 = *(int *)(param_1 + 0x78);
    break;
  case 2:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x78) == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0x80),1,1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = 2;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
    }
    *(undefined4 *)(param_1 + 0x78) = 1;
    iVar1 = *(int *)(param_1 + 0x88);
    goto joined_r0x014dea70;
  case 3:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x78) == 1) goto LAB_014decc0;
LAB_014deae4:
      iVar1 = *(int *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x78) != 1) goto LAB_014deae4;
LAB_014decc0:
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
      iVar1 = *(int *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (iVar1 == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = 2;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
    }
    *(undefined4 *)(param_1 + 0x88) = 1;
    if (*(int *)(param_1 + 0x98) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
    }
    goto LAB_014deb1c;
  case 4:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x78) == 1) goto LAB_014ded20;
LAB_014deb90:
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x88) != 1) goto LAB_014ded48;
LAB_014deba0:
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
      iVar1 = *(int *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x78) != 1) goto LAB_014deb90;
LAB_014ded20:
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x88) == 1) goto LAB_014deba0;
LAB_014ded48:
      iVar1 = *(int *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    if (iVar1 == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0xa0),1,1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = 2;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
    }
    *(undefined4 *)(param_1 + 0x98) = 1;
    iVar1 = *(int *)(param_1 + 0xa8);
    goto joined_r0x014deaa8;
  case 5:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x78) == 1) goto LAB_014ded7c;
LAB_014dec24:
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x88) != 1) goto LAB_014deda4;
LAB_014dec34:
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
      *(undefined4 *)(param_1 + 0x88) = 0;
      if (*(int *)(param_1 + 0x98) == 1) goto LAB_014dedb4;
LAB_014dec5c:
      iVar1 = *(int *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x78) != 1) goto LAB_014dec24;
LAB_014ded7c:
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x88) == 1) goto LAB_014dec34;
LAB_014deda4:
      *(undefined4 *)(param_1 + 0x88) = 0;
      if (*(int *)(param_1 + 0x98) != 1) goto LAB_014dec5c;
LAB_014dedb4:
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
      iVar1 = *(int *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    if (iVar1 == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0xb0),1,1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = 2;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
    }
    *(undefined4 *)(param_1 + 0xa8) = 1;
  default:
    goto switchD_014de94c_default;
  }
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
    iVar1 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
joined_r0x014dea70:
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x98) != 1) goto LAB_014deb1c;
LAB_014dea84:
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
    iVar1 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x98) == 1) goto LAB_014dea84;
LAB_014deb1c:
    iVar1 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
joined_r0x014deaa8:
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
switchD_014de94c_default:
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}


