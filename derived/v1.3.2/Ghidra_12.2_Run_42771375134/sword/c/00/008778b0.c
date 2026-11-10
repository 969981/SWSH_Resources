/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008778b0; name: FUN_008778b0
 */


undefined8 FUN_008778b0(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  
  *param_3 = 0;
  if (param_1 < 0x289) {
    if (param_1 == 0x1e7) {
      uVar1 = (ushort)(param_2 == 0x70);
      goto LAB_008779e4;
    }
    if (param_1 != 0x1ed) {
      return 0;
    }
    lVar2 = 0;
    switch(param_2) {
    case 0x12a:
      break;
    case 299:
      lVar2 = 1;
      break;
    case 300:
      lVar2 = 2;
      break;
    case 0x12d:
      lVar2 = 3;
      break;
    case 0x12e:
      lVar2 = 4;
      break;
    case 0x12f:
      lVar2 = 5;
      break;
    case 0x130:
      lVar2 = 6;
      break;
    case 0x131:
      lVar2 = 7;
      break;
    case 0x132:
      lVar2 = 8;
      break;
    case 0x133:
      lVar2 = 9;
      break;
    case 0x134:
      lVar2 = 10;
      break;
    case 0x135:
      lVar2 = 0xb;
      break;
    case 0x136:
      lVar2 = 0xc;
      break;
    case 0x137:
      lVar2 = 0xd;
      break;
    case 0x138:
      lVar2 = 0xe;
      break;
    case 0x139:
      lVar2 = 0xf;
      break;
    default:
      if (param_2 != 0x284) goto LAB_00877960;
      lVar2 = 0x10;
    }
    puVar3 = &UNK_02143d90;
  }
  else {
    if (param_1 == 0x289) {
      uVar1 = 0;
      if (param_2 - 0x74U < 4) {
        uVar1 = (short)param_2 - 0x73;
      }
      goto LAB_008779e4;
    }
    if (param_1 != 0x305) {
      return 0;
    }
    if (0x10 < param_2 - 0x388U) {
LAB_00877960:
      uVar1 = 0;
      goto LAB_008779e4;
    }
    lVar2 = *(long *)(&DAT_02143e40 + (long)(int)(param_2 - 0x388U) * 8);
    puVar3 = &UNK_02143dd4;
  }
  uVar1 = (ushort)(byte)puVar3[lVar2 * 4 + 2];
LAB_008779e4:
  *param_3 = uVar1;
  return 1;
}


