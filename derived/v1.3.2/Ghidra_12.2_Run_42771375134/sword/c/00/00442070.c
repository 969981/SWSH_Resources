/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442070; name: FUN_00442070
 */


undefined8 FUN_00442070(undefined8 *param_1,char *param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  bool bVar7;
  
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (char *)0x0) {
    return 1;
  }
  sVar2 = strlen(param_2);
  if (param_3 == (char *)0x0) {
    __n = 0;
    uVar6 = __n;
    if ((sVar2 & 0xffffffff) != 0) goto LAB_004420e4;
  }
  else {
    sVar3 = strlen(param_3);
    __n = sVar3 & 0xffffffff;
    uVar6 = __n;
    if (__n < (sVar2 & 0xffffffff)) {
LAB_004420e4:
      if (__n != 0) {
        uVar5 = 0;
        do {
          uVar6 = __n;
          if (param_2[uVar5 + ((sVar2 & 0xffffffff) - __n)] != param_3[uVar5]) goto LAB_00442134;
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < __n);
      }
      uVar6 = 0;
      bVar7 = true;
      goto LAB_0044213c;
    }
  }
LAB_00442134:
  bVar7 = false;
  __n = uVar6;
LAB_0044213c:
  lVar1 = uVar6 + ((int)sVar2 + 1);
  __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,lVar1);
  if (__dest == (void *)0x0) {
    uVar4 = 0x34;
  }
  else {
    memcpy(__dest,param_2,sVar2 & 0xffffffff);
    if (!bVar7) {
      memcpy((void *)((long)__dest + (sVar2 & 0xffffffff)),param_3,__n);
    }
    uVar4 = 1;
    *(undefined1 *)((long)__dest + lVar1 + -1) = 0;
    *param_1 = __dest;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar4;
}


