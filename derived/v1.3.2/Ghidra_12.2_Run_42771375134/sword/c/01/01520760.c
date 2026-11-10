/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01520760; name: FUN_01520760
 */


undefined8 FUN_01520760(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = param_2 & 0xffff;
  uVar1 = FUN_00888c50(uVar5,0xe);
  switch(uVar1) {
  case 0:
    uVar2 = 0x3c;
    puVar6 = *(uint **)(param_1 + 0x1358);
    break;
  case 1:
    uVar2 = 0x1e;
    puVar6 = *(uint **)(param_1 + 0x1360);
    break;
  case 2:
    uVar2 = 0x14;
    puVar6 = *(uint **)(param_1 + 0x1368);
    break;
  case 3:
    uVar2 = 0x50;
    puVar6 = *(uint **)(param_1 + 0x1370);
    break;
  case 4:
    uVar2 = 0x226;
    puVar6 = *(uint **)(param_1 + 0x1378);
    break;
  case 5:
    uVar2 = 0xd2;
    puVar6 = *(uint **)(param_1 + 0x1380);
    break;
  case 6:
    uVar2 = 100;
    puVar6 = *(uint **)(param_1 + 5000);
    break;
  case 7:
    uVar2 = 100;
    puVar6 = *(uint **)(param_1 + 0x1390);
    break;
  case 8:
    uVar2 = 0x40;
    puVar6 = *(uint **)(param_1 + 0x1398);
    break;
  default:
    return 0;
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  uVar7 = 0;
  puVar3 = puVar6;
  uVar8 = 0xffffffff;
  do {
    uVar4 = *puVar3;
    uVar9 = uVar4 & 0x7fff;
    if (uVar9 == uVar5) goto LAB_015208cc;
    uVar4 = uVar7;
    if (uVar9 != 0 || uVar8 != 0xffffffff) {
      uVar4 = uVar8;
    }
    uVar7 = uVar7 + 1;
    puVar3 = puVar3 + 1;
    uVar8 = uVar4;
  } while (uVar7 < uVar2);
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  puVar3 = puVar6 + uVar4;
  uVar4 = *puVar3;
  uVar9 = uVar4 & 0x7fff;
LAB_015208cc:
  if (uVar9 == uVar5) {
    uVar5 = uVar4 >> 0xf & 0x7fff;
    if (999 < uVar5 + 1) {
      return 0;
    }
    uVar5 = uVar5 + (param_3 & 0xffff);
    if (0x3e6 < uVar5) {
      uVar5 = 999;
    }
    *puVar3 = uVar4 & 0xc0000000 | uVar4 & 0x7fff | (uVar5 & 0x7fff) << 0xf;
  }
  else {
    uVar5 = 0x1f38000;
    if ((param_3 & 0xffff) < 1000) {
      uVar5 = (param_3 & 0x7fff) << 0xf;
    }
    uVar5 = uVar4 & 0xc0000000 | param_2 & 0x7fff | uVar5;
    uVar2 = uVar5 | 0x40000000;
    if ((param_4 & 1) == 0) {
      uVar2 = uVar5;
    }
    *puVar3 = uVar2 & 0x7fffffff;
  }
  return 1;
}


