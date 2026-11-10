/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00688d70; name: FUN_00688d70
 */


size_t FUN_00688d70(long param_1,void *param_2,size_t param_3,uint param_4)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  int iVar7;
  
  if ((long)param_3 < 1) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  sVar2 = *(long *)(param_1 + 0xa8) - lVar1;
  if ((long)sVar2 <= (long)param_3) {
    param_3 = sVar2;
  }
  if ((long)param_3 < 1) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x10118);
  lVar6 = *(long *)(param_1 + 0x10108);
  sVar2 = lVar6 - lVar5;
  if (sVar2 == 0 || lVar6 < lVar5) {
    __n = 0;
    lVar3 = lVar1;
    if (lVar5 < lVar6) goto LAB_00688f28;
  }
  else {
    __n = param_3;
    if ((long)sVar2 <= (long)param_3) {
      __n = sVar2;
    }
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x10110) + lVar5),__n);
    lVar6 = *(long *)(param_1 + 0x10118) + __n;
    *(long *)(param_1 + 0x10118) = lVar6;
    param_3 = param_3 - __n;
    lVar3 = *(long *)(param_1 + 0xb0) + __n;
    *(long *)(param_1 + 0xb0) = lVar3;
    if (((long)param_3 < 1) ||
       (param_2 = (void *)((long)param_2 + __n), lVar6 < *(long *)(param_1 + 0x10108))) {
LAB_00688f28:
      iVar7 = 0;
      goto joined_r0x00688ee8;
    }
  }
  iVar7 = 0;
  do {
    sVar4 = *(long *)(param_1 + 0xa8) - lVar3;
    sVar2 = *(size_t *)(param_1 + 0x10100);
    if ((long)sVar4 <= (long)*(size_t *)(param_1 + 0x10100)) {
      sVar2 = sVar4;
    }
    *(size_t *)(param_1 + 0x10108) = sVar2;
    *(undefined8 *)(param_1 + 0x10118) = 0;
    sVar4 = param_3;
    if ((long)sVar2 <= (long)param_3) {
      sVar4 = sVar2;
    }
    sVar2 = fread(*(void **)(param_1 + 0x10110),1,sVar2,*(FILE **)(param_1 + 0x18));
    if ((long)(int)sVar2 != *(long *)(param_1 + 0x10108)) {
      *(undefined1 *)(*(long *)(param_1 + 0x10110) + (long)(int)sVar2) = 0xff;
      *(undefined1 *)
       (*(long *)(param_1 + 0x10110) + ((long)((sVar2 << 0x20) + 0x100000000) >> 0x20)) = 0xff;
    }
    iVar7 = iVar7 + 1;
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x10110) + *(long *)(param_1 + 0x10118)),sVar4);
    *(size_t *)(param_1 + 0x10118) = *(long *)(param_1 + 0x10118) + sVar4;
    param_3 = param_3 - sVar4;
    param_2 = (void *)((long)param_2 + sVar4);
    __n = sVar4 + __n;
    lVar3 = *(long *)(param_1 + 0xb0) + sVar4;
    *(long *)(param_1 + 0xb0) = lVar3;
  } while (0 < (long)param_3);
joined_r0x00688ee8:
  if ((param_4 & 1) != 0) {
    return __n;
  }
  *(long *)(param_1 + 0xb0) = lVar1;
  *(long *)(param_1 + 0x10118) = lVar5;
  if (iVar7 < 1) {
    return __n;
  }
  fseek(*(FILE **)(param_1 + 0x18),*(long *)(param_1 + 0xa0) + lVar1,0);
  *(undefined8 *)(param_1 + 0x10118) = 0;
  *(undefined8 *)(param_1 + 0x10108) = 0;
  return __n;
}


