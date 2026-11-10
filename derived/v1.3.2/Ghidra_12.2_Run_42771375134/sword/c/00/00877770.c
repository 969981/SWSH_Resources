/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877770; name: FUN_00877770
 */


undefined1 FUN_00877770(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  switch(param_1) {
  case 0x12a:
    break;
  case 299:
    lVar1 = 1;
    break;
  case 300:
    lVar1 = 2;
    break;
  case 0x12d:
    lVar1 = 3;
    break;
  case 0x12e:
    lVar1 = 4;
    break;
  case 0x12f:
    lVar1 = 5;
    break;
  case 0x130:
    lVar1 = 6;
    break;
  case 0x131:
    lVar1 = 7;
    break;
  case 0x132:
    lVar1 = 8;
    break;
  case 0x133:
    lVar1 = 9;
    break;
  case 0x134:
    lVar1 = 10;
    break;
  case 0x135:
    lVar1 = 0xb;
    break;
  case 0x136:
    lVar1 = 0xc;
    break;
  case 0x137:
    lVar1 = 0xd;
    break;
  case 0x138:
    lVar1 = 0xe;
    break;
  case 0x139:
    lVar1 = 0xf;
    break;
  default:
    if (param_1 != 0x284) {
      return 0;
    }
    lVar1 = 0x10;
  }
  return (&DAT_02143d92)[lVar1 * 4];
}


