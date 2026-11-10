/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01536680; name: FUN_01536680
 */


uint FUN_01536680(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == 2) {
    iVar6 = 0xd2;
LAB_015366bc:
    uVar2 = 4;
    puVar4 = &DAT_01d4a8f0;
  }
  else {
    if (param_2 == 1) {
      iVar6 = 0xd3;
      goto LAB_015366bc;
    }
    uVar2 = 7;
    puVar4 = (uint *)&DAT_02172dfc;
    if (2 < param_2) {
      uVar5 = 0;
      if (DAT_02172dfc != 0) {
        return 0;
      }
      goto LAB_0153673c;
    }
    iVar6 = 400;
  }
  uVar5 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    lVar1 = FUN_01534080(param_1,param_2,iVar3);
    if (lVar1 != 0) {
      uVar5 = (*(uint *)(lVar1 + 0x20) & 1) + uVar5;
    }
  } while (iVar6 != iVar3);
  if (uVar5 < *puVar4) {
    return 0;
  }
LAB_0153673c:
  if (uVar5 < puVar4[1]) {
    return 1;
  }
  if (uVar5 < puVar4[2]) {
    return 2;
  }
  if (uVar5 < puVar4[3]) {
    return 3;
  }
  if (uVar2 < 5) {
    return uVar2;
  }
  if (uVar5 < puVar4[4]) {
    return 4;
  }
  if (uVar2 < 6) {
    return uVar2;
  }
  if (uVar5 < puVar4[5]) {
    return 5;
  }
  if (uVar2 < 7) {
    return uVar2;
  }
  if (uVar5 < puVar4[6]) {
    return 6;
  }
  return uVar2;
}


