/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862020; name: FUN_00862020
 */


long * FUN_00862020(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  int iVar3;
  void *__s2;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    *param_2 = plVar6;
    return plVar6;
  }
  uVar5 = (ulong)(*param_3 >> 1);
  __s1 = *(byte **)(param_3 + 0x10);
  plVar6 = (long *)(param_1 + 8);
  if ((*param_3 & 1) == 0) {
    __s1 = param_3 + 1;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  do {
    bVar2 = *(byte *)(plVar7 + 4);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = plVar7[5];
    }
    __n = uVar1;
    if (uVar5 <= uVar1) {
      __n = uVar5;
    }
    if (__n == 0) {
LAB_008620bc:
      if (uVar1 <= uVar5) {
        if (__n != 0) {
          __s2 = (void *)plVar7[6];
          if ((bVar2 & 1) == 0) {
            __s2 = (void *)((long)plVar7 + 0x21);
          }
          goto LAB_008620e4;
        }
LAB_0086210c:
        if (uVar1 < uVar5) goto LAB_008620fc;
LAB_00862114:
        *param_2 = plVar7;
        return plVar6;
      }
LAB_008620c4:
      plVar4 = (long *)*plVar7;
      if (plVar4 == (long *)0x0) {
        *param_2 = plVar7;
        return plVar7;
      }
      plVar6 = plVar7;
    }
    else {
      __s2 = (void *)plVar7[6];
      if ((bVar2 & 1) == 0) {
        __s2 = (void *)((long)plVar7 + 0x21);
      }
      iVar3 = memcmp(__s1,__s2,__n);
      if (iVar3 == 0) goto LAB_008620bc;
      if (iVar3 < 0) goto LAB_008620c4;
LAB_008620e4:
      iVar3 = memcmp(__s2,__s1,__n);
      if (iVar3 == 0) goto LAB_0086210c;
      if (-1 < iVar3) goto LAB_00862114;
LAB_008620fc:
      plVar6 = plVar7 + 1;
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) goto LAB_00862114;
    }
    plVar7 = plVar4;
  } while( true );
}


