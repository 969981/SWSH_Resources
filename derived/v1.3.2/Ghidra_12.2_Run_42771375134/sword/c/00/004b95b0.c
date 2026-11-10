/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b95b0; name: FUN_004b95b0
 */


void FUN_004b95b0(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long local_68;
  
  puVar3 = PTR_DAT_02712ad0;
  if ((long *)param_1[0x2b] != (long *)0x0) {
    bVar9 = false;
    plVar11 = (long *)param_1[0x2b];
    plVar12 = (long *)0x0;
    do {
      while (((plVar10 = plVar11, param_2 != 0 && (plVar10[4] != param_2)) ||
             ((param_3 != 0 && (*(int *)((long)plVar10 + 0x1c) != param_3))))) {
        plVar11 = (long *)*plVar10;
        plVar12 = plVar10;
        if ((long *)*plVar10 == (long *)0x0) goto LAB_004b97f0;
      }
      if (param_2 == 0) {
        local_68 = plVar10[4];
      }
      else {
        local_68 = 0;
        bVar9 = true;
      }
      plVar11 = (long *)*plVar10;
      plVar7 = param_1 + 0x2b;
      if ((long *)param_1[0x2b] != plVar10) {
        plVar7 = plVar12;
      }
      *plVar7 = (long)plVar11;
      *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + -1;
      FUN_0048fd60(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar10 + 0x1c));
      (**(code **)(*param_1 + 0x130))(param_1,1);
      puVar8 = (undefined8 *)plVar10[4];
      iVar1 = *(int *)(puVar8 + 10);
      *(int *)(puVar8 + 10) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        uVar2 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar8)(puVar8);
        FUN_00404870(uVar2,puVar8);
        lVar5 = plVar10[1];
      }
      else {
        lVar5 = plVar10[1];
      }
      if (lVar5 != 0) {
        FUN_00431200();
      }
      if (DAT_0275aec8 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)0x0;
        plVar4 = DAT_0275aec8;
        do {
          plVar6 = plVar4;
          if ((plVar6 <= plVar10) && (plVar10 < plVar6 + 0x780)) goto LAB_004b974c;
          plVar7 = plVar6;
          plVar4 = (long *)plVar6[0x780];
        } while ((long *)plVar6[0x780] != (long *)0x0);
      }
      plVar6 = (long *)0x0;
LAB_004b974c:
      if (plVar6[0x782] == 0) {
        plVar6[0x782] = (long)plVar10;
        *plVar10 = 0;
      }
      else {
        *plVar10 = plVar6[0x782];
        plVar6[0x782] = (long)plVar10;
      }
      iVar1 = (int)plVar6[0x781] + 1;
      *(int *)(plVar6 + 0x781) = iVar1;
      if (iVar1 == 0x80) {
        plVar10 = (long *)&DAT_0275aec8;
        if (DAT_0275aec8 != plVar6) {
          plVar10 = plVar7 + 0x780;
        }
        *plVar10 = plVar6[0x780];
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      }
      if (local_68 != 0) {
        FUN_004992b0(*(undefined8 *)PTR_DAT_02712d20,(int)param_1[2]);
      }
    } while (plVar11 != (long *)0x0);
LAB_004b97f0:
    if (bVar9) {
      FUN_004992b0(*(undefined8 *)PTR_DAT_02712d20,(int)param_1[2],param_2);
      return;
    }
  }
  return;
}


