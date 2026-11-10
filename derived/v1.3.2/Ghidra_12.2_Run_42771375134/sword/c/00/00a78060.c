/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a78060; name: FUN_00a78060
 */


int FUN_00a78060(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  long lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x7f8))();
  if (lVar4 == 0) {
    return param_4;
  }
  if (param_3 < 0x24f) {
    if (param_3 == 0xb1) {
      sVar3 = FUN_008e1290(lVar4);
      if (sVar3 != 0xf9) {
        return param_4;
      }
    }
    else if (param_3 == 0x1cb) {
      sVar3 = FUN_008e1290(lVar4);
      if (sVar3 != 0x1e3) {
        return param_4;
      }
    }
    else {
      if (param_3 != 0x1cc) {
        return param_4;
      }
      sVar3 = FUN_008e1290(lVar4);
      if (sVar3 != 0x1e4) {
        return param_4;
      }
    }
LAB_00a78538:
    if (param_4 == 0 && *(char *)(lVar4 + 0x33d) == '\0') {
      param_4 = 1;
    }
    return param_4;
  }
  switch(param_3) {
  case 0x24f:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x2cf) goto LAB_00a78538;
    break;
  case 0x250:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x2d1) goto LAB_00a78538;
    break;
  case 0x26c:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x180) goto LAB_00a78538;
    break;
  case 0x296:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x2d4) goto LAB_00a78538;
    break;
  case 0x297:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x2d7) goto LAB_00a78538;
    break;
  case 0x2af:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x2ce) {
      return param_4;
    }
    bVar2 = *(char *)(lVar4 + 0x33d) == '\x04';
    goto LAB_00a7849c;
  case 0x2c1:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x321) {
      if (*(char *)(lVar4 + 0x33d) == '\0') {
        if (param_4 == 0) {
          return 1;
        }
      }
      else if ((param_4 == 0) && (*(char *)(lVar4 + 0x33d) == '\x01')) {
        return 1;
      }
    }
    break;
  case 0x2c9:
    sVar3 = FUN_008e1290(lVar4);
    if ((sVar3 == 0x317) && (param_4 == 0 && *(char *)(lVar4 + 0x33d) == '\0')) {
      param_4 = 1;
    }
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 800) {
      bVar2 = *(char *)(lVar4 + 0x33d) == '\x01';
LAB_00a78244:
      iVar1 = 2;
      if (!bVar2 || param_4 != 0) {
        iVar1 = param_4;
      }
      return iVar1;
    }
    break;
  case 0x2ca:
    sVar3 = FUN_008e1290(lVar4);
    if ((sVar3 == 0x318) && (param_4 == 0 && *(char *)(lVar4 + 0x33d) == '\0')) {
      param_4 = 1;
    }
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 800) {
      bVar2 = *(char *)(lVar4 + 0x33d) == '\x02';
      goto LAB_00a78244;
    }
    break;
  case 0x2d0:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x326) goto LAB_00a78538;
    break;
  case 0x2d1:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x327) goto LAB_00a78538;
    break;
  case 0x2e8:
  case 0x31b:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x37a) goto LAB_00a78538;
    break;
  case 0x2e9:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x332) goto LAB_00a78538;
    break;
  case 0x2ef:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x377) goto LAB_00a78538;
    break;
  case 0x30a:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x32c) goto LAB_00a78538;
    break;
  case 0x30c:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x32f) goto LAB_00a78538;
    break;
  case 0x30d:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x378) {
      return param_4;
    }
    goto LAB_00a78494;
  case 0x30e:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x379) {
      return param_4;
    }
    goto LAB_00a78494;
  case 0x30f:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x36d) {
      if (*(char *)(lVar4 + 0x33d) == '\0') {
        if (param_4 == 0) {
          return 1;
        }
      }
      else if ((param_4 == 0) && (*(char *)(lVar4 + 0x33d) == '\x01')) {
        return 1;
      }
    }
    break;
  case 0x31a:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x361) goto LAB_00a78538;
    break;
  case 0x321:
    sVar3 = FUN_008e1290(lVar4);
    if ((sVar3 == 0x50) && (*(char *)(lVar4 + 0x33d) == '\x02')) {
      if (param_4 == 0) {
        param_4 = 1;
      }
      iVar1 = 3;
      if (param_4 != 2) {
        iVar1 = param_4;
      }
      return iVar1;
    }
    break;
  case 0x330:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x37d) {
      if (*(char *)(lVar4 + 0x33d) == '\0') {
        if (param_4 == 0) {
          return 1;
        }
      }
      else if ((param_4 == 0) && (*(char *)(lVar4 + 0x33d) == '\x01')) {
        return 1;
      }
    }
    break;
  case 0x331:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x37c) goto LAB_00a78538;
    break;
  case 0x332:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x37c) {
      return param_4;
    }
    goto LAB_00a78494;
  case 0x333:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x37e) goto LAB_00a78538;
    break;
  case 0x334:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x37f) goto LAB_00a78538;
    break;
  case 0x335:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x90) {
      return param_4;
    }
    goto LAB_00a78494;
  case 0x336:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x92) {
      return param_4;
    }
    goto LAB_00a78494;
  case 0x337:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x91) {
      return param_4;
    }
    goto LAB_00a78494;
  case 0x338:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 != 0x382) {
      return param_4;
    }
LAB_00a78494:
    bVar2 = *(char *)(lVar4 + 0x33d) == '\x01';
LAB_00a7849c:
    if (bVar2 && param_4 == 0) {
      param_4 = 1;
    }
    return param_4;
  case 0x339:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 0x382) {
      bVar2 = *(char *)(lVar4 + 0x33d) == '\x02';
      goto LAB_00a7849c;
    }
    break;
  case 0x33a:
    sVar3 = FUN_008e1290(lVar4);
    if (sVar3 == 199) {
      if (*(char *)(lVar4 + 0x33d) == '\x01' && param_4 == 0) {
        param_4 = 1;
      }
      return param_4;
    }
  }
  return param_4;
}


