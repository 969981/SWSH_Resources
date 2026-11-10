/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068a5d0; name: FUN_0068a5d0
 */


size_t FUN_0068a5d0(long param_1,void *param_2,size_t param_3,ulong param_4)

{
  size_t *psVar1;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  size_t sVar5;
  size_t __n;
  long lVar6;
  size_t sVar7;
  int iVar8;
  
  if ((long)param_3 < 1) {
    return 0;
  }
  psVar1 = (size_t *)(param_1 + 0x10100);
  sVar7 = *(size_t *)(param_1 + 0x10118);
  sVar5 = *psVar1;
  lVar6 = *(long *)(param_1 + 0xb0);
  sVar2 = sVar5 - sVar7;
  sVar3 = sVar7;
  if (sVar2 == 0 || (long)sVar5 < (long)sVar7) {
    __n = 0;
    lVar4 = lVar6;
    if ((long)sVar7 < (long)sVar5) goto LAB_0068a72c;
  }
  else {
    __n = param_3;
    if ((long)sVar2 <= (long)param_3) {
      __n = sVar2;
    }
    memcpy((void *)(*(long *)(param_1 + 0x10110) + sVar7),param_2,__n);
    sVar3 = *(long *)(param_1 + 0x10118) + __n;
    *(size_t *)(param_1 + 0x10118) = sVar3;
    param_3 = param_3 - __n;
    lVar4 = *(long *)(param_1 + 0xb0) + __n;
    *(long *)(param_1 + 0xb0) = lVar4;
    if (((long)param_3 < 1) ||
       (param_2 = (void *)((long)param_2 + __n), (long)sVar3 < (long)*psVar1)) {
LAB_0068a72c:
      iVar8 = 0;
      goto joined_r0x0068a708;
    }
  }
  iVar8 = 0;
  do {
    sVar2 = *(size_t *)(param_1 + 0x10108);
    if ((long)*(size_t *)(param_1 + 0x10108) <= (long)sVar3) {
      sVar2 = sVar3;
    }
    *(size_t *)(param_1 + 0x10108) = sVar2;
    if ((0 < (long)sVar2) &&
       (sVar3 = fwrite(*(void **)(param_1 + 0x10110),sVar2,1,*(FILE **)(param_1 + 0x18)),
       (int)sVar3 == 1)) {
      *(undefined8 *)(param_1 + 0x10118) = 0;
      *(undefined8 *)(param_1 + 0x10108) = 0;
    }
    sVar2 = param_3;
    if ((long)*psVar1 <= (long)param_3) {
      sVar2 = *psVar1;
    }
    iVar8 = iVar8 + 1;
    *(undefined8 *)(param_1 + 0x10118) = 0;
    memcpy(*(void **)(param_1 + 0x10110),param_2,sVar2);
    sVar3 = *(long *)(param_1 + 0x10118) + sVar2;
    *(size_t *)(param_1 + 0x10118) = sVar3;
    param_3 = param_3 - sVar2;
    param_2 = (void *)((long)param_2 + sVar2);
    __n = sVar2 + __n;
    lVar4 = *(long *)(param_1 + 0xb0) + sVar2;
    *(long *)(param_1 + 0xb0) = lVar4;
  } while (0 < (long)param_3);
joined_r0x0068a708:
  if ((param_4 & 1) == 0) {
    *(long *)(param_1 + 0xb0) = lVar6;
    *(size_t *)(param_1 + 0x10118) = sVar7;
    sVar3 = sVar7;
    lVar4 = lVar6;
    if (0 < iVar8) {
      fseek(*(FILE **)(param_1 + 0x18),*(long *)(param_1 + 0xa0) + lVar6,0);
      *(undefined8 *)(param_1 + 0x10118) = 0;
      *(undefined8 *)(param_1 + 0x10108) = 0;
      lVar4 = *(long *)(param_1 + 0xb0);
      sVar3 = 0;
    }
  }
  sVar2 = *(size_t *)(param_1 + 0x10108);
  if ((long)*(size_t *)(param_1 + 0x10108) <= (long)sVar3) {
    sVar2 = sVar3;
  }
  *(size_t *)(param_1 + 0x10108) = sVar2;
  lVar6 = *(long *)(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xa8) <= lVar4) {
    lVar6 = lVar4;
  }
  *(long *)(param_1 + 0xa8) = lVar6;
  return __n;
}


