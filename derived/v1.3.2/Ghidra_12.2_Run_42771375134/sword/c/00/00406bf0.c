/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00406bf0; name: FUN_00406bf0
 */


void FUN_00406bf0(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_02712ab8;
  plVar4 = (long *)(PTR_DAT_02712ab8 + 8);
  plVar7 = (long *)0x0;
  do {
    plVar6 = plVar7;
    plVar7 = (long *)*plVar4;
    plVar4 = plVar7 + 0xe;
  } while (plVar7 != (long *)0x0 && plVar7 != param_2);
  if (plVar7 != (long *)0x0) {
    plVar4 = (long *)(PTR_DAT_02712ab8 + 8);
    if (*(long **)(PTR_DAT_02712ab8 + 8) != plVar7) {
      plVar4 = plVar6 + 0xe;
    }
    *plVar4 = plVar7[0xe];
    if (*(long **)puVar2 == plVar7) {
      *(long **)puVar2 = plVar6;
      lVar8 = param_2[0xc];
      goto joined_r0x00406d00;
    }
  }
  lVar8 = param_2[0xc];
joined_r0x00406d00:
  if (lVar8 == 0) {
    return;
  }
  iVar5 = *(int *)(lVar8 + 0x2c);
  if (iVar5 != 0) {
    if ((*(byte *)((long)param_2 + 0x22) >> 5 & 1) != 0) {
      FUN_0041b910(PTR_DAT_02712aa0);
      iVar5 = *(int *)(lVar8 + 0x2c);
    }
    FUN_0048fc40(*(undefined8 *)PTR_DAT_02712ad0,iVar5,param_2 + 3);
    lVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
    if (lVar3 != 0) {
      plVar4 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
      (**(code **)(*plVar4 + 0x130))(plVar4,1);
    }
  }
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  FUN_0040bda0(lVar8);
  FUN_00404870(uVar1,lVar8);
  return;
}


