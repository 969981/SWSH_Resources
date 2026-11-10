/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862e10; name: FUN_00862e10
 */


long * FUN_00862e10(undefined8 param_1,byte *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  void *__s2;
  
  if (param_3 != (long *)0x0) {
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if ((bVar4 & 1) == 0) {
      plVar7 = param_4;
      do {
        while( true ) {
          param_4 = param_3;
          bVar4 = *(byte *)(param_4 + 4);
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = param_4[5];
          }
          sVar3 = uVar1;
          if (uVar2 <= uVar1) {
            sVar3 = uVar2;
          }
          if (sVar3 == 0) break;
          pvVar6 = (void *)param_4[6];
          if ((bVar4 & 1) == 0) {
            pvVar6 = (void *)((long)param_4 + 0x21);
          }
          iVar5 = memcmp(pvVar6,param_2 + 1,sVar3);
          if (iVar5 == 0) break;
          if (-1 < iVar5) {
LAB_00862ebc:
            iVar5 = memcmp(param_2 + 1,pvVar6,sVar3);
            if (iVar5 == 0) goto LAB_00862ef4;
            if (-1 < iVar5) goto LAB_00862ed4;
            goto LAB_00862efc;
          }
LAB_00862ee4:
          param_3 = (long *)param_4[1];
          if ((long *)param_4[1] == (long *)0x0) {
            return plVar7;
          }
        }
        if (uVar2 < uVar1) goto LAB_00862ee4;
        if (sVar3 != 0) {
          pvVar6 = (void *)param_4[6];
          if ((bVar4 & 1) == 0) {
            pvVar6 = (void *)((long)param_4 + 0x21);
          }
          goto LAB_00862ebc;
        }
LAB_00862ef4:
        if (uVar2 <= uVar1) {
LAB_00862ed4:
          if ((int)param_4[7] < *(int *)(param_2 + 0x18)) goto LAB_00862ee4;
        }
LAB_00862efc:
        param_3 = (long *)*param_4;
        plVar7 = param_4;
      } while ((long *)*param_4 != (long *)0x0);
    }
    else {
LAB_00862f0c:
      do {
        plVar7 = param_3;
        bVar4 = *(byte *)(plVar7 + 4);
        uVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar2 = plVar7[5];
        }
        sVar3 = uVar1;
        if (uVar2 <= uVar1) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
LAB_00862f5c:
          if (uVar2 < uVar1) goto LAB_00862f64;
          if (sVar3 != 0) {
            pvVar6 = (void *)plVar7[6];
            __s2 = *(void **)(param_2 + 0x10);
            if ((bVar4 & 1) == 0) {
              pvVar6 = (void *)((long)plVar7 + 0x21);
            }
LAB_00862f88:
            iVar5 = memcmp(__s2,pvVar6,sVar3);
            if (iVar5 == 0) goto LAB_00862fc0;
            if (-1 < iVar5) goto LAB_00862fa0;
LAB_00862fc8:
            param_3 = (long *)*plVar7;
            param_4 = plVar7;
            if ((long *)*plVar7 == (long *)0x0) {
              return plVar7;
            }
            goto LAB_00862f0c;
          }
LAB_00862fc0:
          if (uVar1 < uVar2) goto LAB_00862fc8;
LAB_00862fa0:
          if (*(int *)(param_2 + 0x18) <= (int)plVar7[7]) goto LAB_00862fc8;
          param_3 = (long *)plVar7[1];
        }
        else {
          pvVar6 = (void *)plVar7[6];
          __s2 = *(void **)(param_2 + 0x10);
          if ((bVar4 & 1) == 0) {
            pvVar6 = (void *)((long)plVar7 + 0x21);
          }
          iVar5 = memcmp(pvVar6,__s2,sVar3);
          if (iVar5 == 0) goto LAB_00862f5c;
          if (-1 < iVar5) goto LAB_00862f88;
LAB_00862f64:
          param_3 = (long *)plVar7[1];
        }
      } while (param_3 != (long *)0x0);
    }
  }
  return param_4;
}


