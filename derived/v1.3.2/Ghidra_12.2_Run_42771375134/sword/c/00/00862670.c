/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862670; name: FUN_00862670
 */


long * FUN_00862670(long param_1,undefined8 *param_2,byte *param_3)

{
  byte *__s1;
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  void *__s1_00;
  void *pvVar9;
  long *plVar10;
  
  plVar7 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar7;
  if (plVar10 == (long *)0x0) {
    *param_2 = plVar7;
    return plVar7;
  }
  bVar4 = *param_3;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if ((bVar4 & 1) != 0) {
    do {
      bVar4 = *(byte *)(plVar10 + 4);
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = plVar10[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 == 0) {
LAB_0086271c:
        if (uVar2 <= uVar1) {
          if (sVar3 != 0) {
            pvVar8 = (void *)plVar10[6];
            __s1_00 = *(void **)(param_3 + 0x10);
            pvVar9 = pvVar8;
            if ((bVar4 & 1) == 0) {
              pvVar9 = (void *)((long)plVar10 + 0x21);
            }
            goto LAB_0086273c;
          }
LAB_00862764:
          if (uVar1 <= uVar2) {
LAB_0086276c:
            if (*(int *)(param_3 + 0x18) < (int)plVar10[7]) goto LAB_00862780;
          }
          if (sVar3 != 0) {
            pvVar8 = (void *)plVar10[6];
            __s1_00 = *(void **)(param_3 + 0x10);
            goto LAB_008627ac;
          }
          goto LAB_008627d0;
        }
LAB_00862780:
        plVar6 = (long *)*plVar10;
        plVar7 = plVar10;
        if (plVar6 == (long *)0x0) goto LAB_008629a0;
      }
      else {
        pvVar8 = (void *)plVar10[6];
        __s1_00 = *(void **)(param_3 + 0x10);
        pvVar9 = pvVar8;
        if ((bVar4 & 1) == 0) {
          pvVar9 = (void *)((long)plVar10 + 0x21);
        }
        iVar5 = memcmp(__s1_00,pvVar9,sVar3);
        if (iVar5 == 0) goto LAB_0086271c;
        if (iVar5 < 0) goto LAB_00862780;
LAB_0086273c:
        iVar5 = memcmp(pvVar9,__s1_00,sVar3);
        if (iVar5 == 0) goto LAB_00862764;
        if (-1 < iVar5) goto LAB_0086276c;
LAB_008627ac:
        if ((bVar4 & 1) == 0) {
          pvVar8 = (void *)((long)plVar10 + 0x21);
        }
        iVar5 = memcmp(pvVar8,__s1_00,sVar3);
        if (iVar5 == 0) {
LAB_008627d0:
          if (uVar1 <= uVar2) {
            if (sVar3 != 0) {
              __s1_00 = *(void **)(param_3 + 0x10);
              pvVar8 = (void *)plVar10[6];
              if ((bVar4 & 1) == 0) {
                pvVar8 = (void *)((long)plVar10 + 0x21);
              }
              goto LAB_008627f0;
            }
LAB_00862814:
            if (uVar2 <= uVar1) goto LAB_0086281c;
            goto LAB_0086298c;
          }
        }
        else if (-1 < iVar5) {
LAB_008627f0:
          iVar5 = memcmp(__s1_00,pvVar8,sVar3);
          if (iVar5 == 0) goto LAB_00862814;
          if (iVar5 < 0) goto LAB_0086298c;
LAB_0086281c:
          if (*(int *)(param_3 + 0x18) <= (int)plVar10[7]) goto LAB_0086298c;
        }
        plVar7 = plVar10 + 1;
        plVar6 = (long *)*plVar7;
        if (plVar6 == (long *)0x0) goto LAB_0086298c;
      }
      plVar10 = plVar6;
    } while( true );
  }
  __s1 = param_3 + 1;
  do {
    bVar4 = *(byte *)(plVar10 + 4);
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = plVar10[5];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_0086288c:
      if (uVar2 <= uVar1) {
        if (sVar3 != 0) {
          pvVar8 = (void *)plVar10[6];
          pvVar9 = pvVar8;
          if ((bVar4 & 1) == 0) {
            pvVar9 = (void *)((long)plVar10 + 0x21);
          }
          goto LAB_008628a4;
        }
LAB_008628cc:
        if (uVar1 <= uVar2) {
LAB_008628d4:
          if (*(int *)(param_3 + 0x18) < (int)plVar10[7]) goto LAB_008628e8;
        }
        if (sVar3 != 0) {
          pvVar8 = (void *)plVar10[6];
          goto LAB_0086290c;
        }
        goto LAB_00862930;
      }
LAB_008628e8:
      plVar6 = (long *)*plVar10;
      plVar7 = plVar10;
      if (plVar6 == (long *)0x0) {
LAB_008629a0:
        *param_2 = plVar10;
        return plVar10;
      }
    }
    else {
      pvVar8 = (void *)plVar10[6];
      pvVar9 = pvVar8;
      if ((bVar4 & 1) == 0) {
        pvVar9 = (void *)((long)plVar10 + 0x21);
      }
      iVar5 = memcmp(__s1,pvVar9,sVar3);
      if (iVar5 == 0) goto LAB_0086288c;
      if (iVar5 < 0) goto LAB_008628e8;
LAB_008628a4:
      iVar5 = memcmp(pvVar9,__s1,sVar3);
      if (iVar5 == 0) goto LAB_008628cc;
      if (-1 < iVar5) goto LAB_008628d4;
LAB_0086290c:
      if ((bVar4 & 1) == 0) {
        pvVar8 = (void *)((long)plVar10 + 0x21);
      }
      iVar5 = memcmp(pvVar8,__s1,sVar3);
      if (iVar5 == 0) {
LAB_00862930:
        if (uVar1 <= uVar2) {
          if (sVar3 != 0) {
            pvVar8 = (void *)plVar10[6];
            if ((bVar4 & 1) == 0) {
              pvVar8 = (void *)((long)plVar10 + 0x21);
            }
            goto LAB_00862948;
          }
LAB_00862964:
          if (uVar2 <= uVar1) goto LAB_0086296c;
LAB_0086298c:
          *param_2 = plVar10;
          return plVar7;
        }
      }
      else if (-1 < iVar5) {
LAB_00862948:
        iVar5 = memcmp(__s1,pvVar8,sVar3);
        if (iVar5 == 0) goto LAB_00862964;
        if (iVar5 < 0) goto LAB_0086298c;
LAB_0086296c:
        if (*(int *)(param_3 + 0x18) <= (int)plVar10[7]) goto LAB_0086298c;
      }
      plVar7 = plVar10 + 1;
      plVar6 = (long *)*plVar7;
      if (plVar6 == (long *)0x0) goto LAB_0086298c;
    }
    plVar10 = plVar6;
  } while( true );
}


