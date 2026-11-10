/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006acd50; name: FUN_006acd50
 */


void FUN_006acd50(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  undefined8 local_58;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == lVar2) {
    return;
  }
  if ((*(char *)(param_2 + 0x50) == '\0') && (*(char *)(param_2 + 0x58) != '\0')) {
    return;
  }
  if (lVar2 == lVar4) {
    bVar6 = 1;
    bVar5 = 1;
    bVar1 = 1;
    if (lVar4 == lVar2) goto LAB_006acefc;
  }
  else {
    bVar5 = 1;
    bVar6 = 1;
    do {
      if (*(long *)(lVar2 + 0xe0) == 0) {
        lVar3 = 0;
        if (*(char *)(param_2 + 0x50) != '\0') {
          lVar3 = param_2 + 0x40;
        }
        local_58 = 0;
        FUN_006aecd0(param_1,lVar2,param_3,lVar3,(long)&local_58 + 4,&local_58);
        bVar1 = FUN_006ad250(param_1,lVar2,param_3,(long)&local_58 + 4,&local_58);
        bVar5 = bVar5 & bVar1;
        bVar6 = bVar6 & *(float *)(lVar2 + 0xd4) <= *(float *)(lVar2 + 0xd0);
        for (lVar3 = *(long *)(lVar2 + 0xd8); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0xd8)) {
          bVar1 = FUN_006ad250(param_1,lVar3,param_3,(long)&local_58 + 4,&local_58);
          bVar5 = bVar5 & bVar1;
          bVar6 = bVar6 & *(float *)(lVar3 + 0xd4) <= *(float *)(lVar3 + 0xd0);
        }
      }
      lVar2 = lVar2 + 0xf0;
    } while (lVar2 != lVar4);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
    bVar1 = bVar5;
    if (lVar4 == lVar2) goto LAB_006acefc;
  }
  bVar5 = bVar1;
  fVar7 = *(float *)(param_2 + 0x68) +
          (*(float *)(param_2 + 100) - *(float *)(param_2 + 0x68)) * *(float *)(param_2 + 0x70);
  *(float *)(param_2 + 0x68) = fVar7;
  if ((*(char *)(param_2 + 0x59) != '\0') || (DAT_01d4bf34 < ABS(fVar7))) {
    *(float *)(param_2 + 0x60) =
         *(float *)(param_2 + 0x60) +
         (*(float *)(param_2 + 0x5c) - *(float *)(param_2 + 0x60)) * *(float *)(param_2 + 0x6c);
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0xf0) {
      while (*(long *)(lVar2 + 0xd8) != 0) {
        lVar2 = lVar2 + 0xf0;
        if (lVar4 == lVar2) goto LAB_006acefc;
      }
      FUN_006af830(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68),lVar2,param_3);
    }
  }
LAB_006acefc:
  *(byte *)(param_2 + 0x58) = bVar6 | bVar5;
  return;
}


