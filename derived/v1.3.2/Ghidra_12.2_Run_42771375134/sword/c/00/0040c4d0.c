/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c4d0; name: FUN_0040c4d0
 */


void FUN_0040c4d0(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_02712a90;
  puVar3 = PTR_DAT_02712a60;
  lVar2 = *param_2;
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 1) {
      FUN_00406e70(*(undefined8 *)puVar3,*(undefined8 *)(lVar2 + 0x10));
    }
    else if (*(int *)(lVar2 + 8) == 0) {
      plVar7 = *(long **)(lVar2 + 0x10);
      lVar6 = plVar7[2];
      cVar1 = *(char *)((long)plVar7 + 0x2c);
      plVar5 = (long *)plVar7[1];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0xc0))
                  (plVar5,*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68));
      }
      plVar5 = *(long **)(param_1 + 0x40);
      if ((plVar5 != (long *)0x0) && (plVar7 != plVar5)) {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0 && plVar7 != plVar5);
      }
      if (plVar5 != (long *)0x0) {
        *(undefined4 *)(plVar5 + 2) = 0;
      }
      if (cVar1 != '\0') {
        FUN_0040c5e0(param_1,(int)lVar6,1);
      }
    }
    lVar6 = *(long *)(lVar2 + 0x18);
    plVar5 = param_2;
    if (*param_2 != lVar2) {
      plVar5 = (long *)&SUB_00000018;
    }
    *plVar5 = lVar6;
    FUN_00404870(*(undefined4 *)puVar4,lVar2);
    lVar2 = lVar6;
  }
  return;
}


