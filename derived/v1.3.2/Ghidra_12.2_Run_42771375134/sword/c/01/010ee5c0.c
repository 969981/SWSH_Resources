/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ee5c0; name: FUN_010ee5c0
 */


void FUN_010ee5c0(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 7) {
    FUN_010f0200();
    FUN_010f09e0(*(undefined8 *)(param_1 + 0x110));
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
    if (*(int *)(param_1 + 0x88) == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0xa0),1,1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = 2;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
    }
    *(undefined4 *)(param_1 + 0x98) = 1;
    iVar1 = *(int *)(param_1 + 0xa8);
  }
  else {
    FUN_010f01c0(*(undefined8 *)(param_1 + 0x108));
    FUN_010f09a0(*(undefined8 *)(param_1 + 0x110));
    switch(param_2) {
    case 0:
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
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) != 1) goto LAB_010ee92c;
LAB_010eecd4:
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
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_010eecd4;
LAB_010ee92c:
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
      iVar1 = *(int *)(param_1 + 0xb8);
      goto joined_r0x010ee948;
    case 1:
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
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) != 1) goto LAB_010ee9cc;
LAB_010eed4c:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) != 1) goto LAB_010ee9dc;
LAB_010eed74:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
        iVar1 = *(int *)(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_010eed4c;
LAB_010ee9cc:
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) == 1) goto LAB_010eed74;
LAB_010ee9dc:
        iVar1 = *(int *)(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      if (iVar1 == 0) {
        FUN_00ffa290(*(undefined8 *)(param_1 + 0xc0),1,1);
        uVar2 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          uVar2 = 2;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
      }
      *(undefined4 *)(param_1 + 0xb8) = 1;
      iVar1 = *(int *)(param_1 + 200);
      goto joined_r0x010ee9f8;
    case 2:
    case 4:
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
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      iVar1 = *(int *)(param_1 + 0x98);
      break;
    case 3:
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
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) != 1) goto LAB_010eea7c;
LAB_010eedec:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) != 1) goto LAB_010eea8c;
LAB_010eee14:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xb8) != 1) goto LAB_010eea9c;
LAB_010eee3c:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
        iVar1 = *(int *)(param_1 + 200);
        *(undefined4 *)(param_1 + 0xb8) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_010eedec;
LAB_010eea7c:
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) == 1) goto LAB_010eee14;
LAB_010eea8c:
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xb8) == 1) goto LAB_010eee3c;
LAB_010eea9c:
        iVar1 = *(int *)(param_1 + 200);
        *(undefined4 *)(param_1 + 0xb8) = 0;
      }
      if (iVar1 == 0) {
        FUN_00ffa290(*(undefined8 *)(param_1 + 0xd0),1,1);
        uVar2 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          uVar2 = 2;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xd0),uVar2);
      }
      *(undefined4 *)(param_1 + 200) = 1;
      iVar1 = *(int *)(param_1 + 0xd8);
      goto joined_r0x010eeab8;
    case 5:
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
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) != 1) goto LAB_010eeb3c;
LAB_010eeeb4:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) != 1) goto LAB_010eeb4c;
LAB_010eeedc:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xb8) != 1) goto LAB_010eeb5c;
LAB_010eef04:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
        *(undefined4 *)(param_1 + 0xb8) = 0;
        if (*(int *)(param_1 + 200) != 1) goto LAB_010eeb6c;
LAB_010eef2c:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xd0),uVar2);
        *(undefined4 *)(param_1 + 200) = 0;
        if (*(int *)(param_1 + 0xd8) != 1) goto LAB_010eeb7c;
LAB_010eef54:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xe0),uVar2);
        iVar1 = *(int *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0xd8) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_010eeeb4;
LAB_010eeb3c:
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) == 1) goto LAB_010eeedc;
LAB_010eeb4c:
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xb8) == 1) goto LAB_010eef04;
LAB_010eeb5c:
        *(undefined4 *)(param_1 + 0xb8) = 0;
        if (*(int *)(param_1 + 200) == 1) goto LAB_010eef2c;
LAB_010eeb6c:
        *(undefined4 *)(param_1 + 200) = 0;
        if (*(int *)(param_1 + 0xd8) == 1) goto LAB_010eef54;
LAB_010eeb7c:
        iVar1 = *(int *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0xd8) = 0;
      }
      if (iVar1 == 0) {
        FUN_00ffa290(*(undefined8 *)(param_1 + 0xf0),1,1);
        uVar2 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          uVar2 = 2;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xf0),uVar2);
      }
      iVar1 = *(int *)(param_1 + 0xf8);
      *(undefined4 *)(param_1 + 0xe8) = 1;
      goto joined_r0x010eeb98;
    case 6:
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
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) != 1) goto LAB_010eec1c;
LAB_010eefcc:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) != 1) goto LAB_010eec2c;
LAB_010eeff4:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xb8) != 1) goto LAB_010eec3c;
LAB_010ef01c:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
        *(undefined4 *)(param_1 + 0xb8) = 0;
        if (*(int *)(param_1 + 200) != 1) goto LAB_010eec4c;
LAB_010ef044:
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xd0),uVar2);
        iVar1 = *(int *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 200) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_010eefcc;
LAB_010eec1c:
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0xa8) == 1) goto LAB_010eeff4;
LAB_010eec2c:
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xb8) == 1) goto LAB_010ef01c;
LAB_010eec3c:
        *(undefined4 *)(param_1 + 0xb8) = 0;
        if (*(int *)(param_1 + 200) == 1) goto LAB_010ef044;
LAB_010eec4c:
        iVar1 = *(int *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 200) = 0;
      }
      if (iVar1 == 0) {
        FUN_00ffa290(*(undefined8 *)(param_1 + 0xe0),1,1);
        uVar2 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          uVar2 = 2;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0xe0),uVar2);
      }
      *(undefined4 *)(param_1 + 0xd8) = 1;
      iVar1 = *(int *)(param_1 + 0xe8);
      goto joined_r0x010eec68;
    default:
      goto switchD_010ee7ec_caseD_7;
    case 8:
      if (*(int *)(param_1 + 0x68) == 1) {
        uVar2 = 3;
        if (*(int *)(param_1 + 0x60) == 0) {
          uVar2 = 1;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x70),uVar2);
        *(undefined4 *)(param_1 + 0x68) = 0;
        if (*(int *)(param_1 + 0x78) != 0) goto LAB_010eec88;
LAB_010ef0b8:
        FUN_00ffa290(*(undefined8 *)(param_1 + 0x80),1,1);
        uVar2 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          uVar2 = 2;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
        iVar1 = *(int *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 0;
        if (*(int *)(param_1 + 0x78) == 0) goto LAB_010ef0b8;
LAB_010eec88:
        iVar1 = *(int *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
      if (iVar1 == 0) {
        FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
        uVar2 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          uVar2 = 2;
        }
        FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
        *(undefined4 *)(param_1 + 0x88) = 1;
        iVar1 = *(int *)(param_1 + 0x98);
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 1;
        iVar1 = *(int *)(param_1 + 0x98);
      }
    }
    if (iVar1 == 1) {
      uVar2 = 3;
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 1;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar1 = *(int *)(param_1 + 0xa8);
  }
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
joined_r0x010ee948:
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  iVar1 = *(int *)(param_1 + 200);
joined_r0x010ee9f8:
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xd0),uVar2);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
joined_r0x010eeab8:
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xe0),uVar2);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  iVar1 = *(int *)(param_1 + 0xe8);
joined_r0x010eec68:
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xf0),uVar2);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xe8) = 0;
joined_r0x010eeb98:
  if (iVar1 == 0) {
    FUN_00ffa290(*(undefined8 *)(param_1 + 0x100),1,1);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar2 = 2;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x100),uVar2);
  }
  *(undefined4 *)(param_1 + 0xf8) = 1;
switchD_010ee7ec_caseD_7:
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}


