/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b8900; name: FUN_004b8900
 */


void FUN_004b8900(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_02712ad0;
  puVar3 = PTR_DAT_02712a90;
  plVar10 = (long *)param_1[0x2b];
  do {
    if (plVar10 == (long *)0x0) {
      return;
    }
    if (*plVar10 == 0) {
      param_1[0x2b] = 0;
    }
    else {
      param_1[0x2b] = *plVar10;
    }
    *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + -1;
    FUN_0048fd60(*(undefined8 *)puVar4,*(undefined4 *)((long)plVar10 + 0x1c));
    (**(code **)(*param_1 + 0x130))(param_1,1);
    puVar9 = (undefined8 *)plVar10[4];
    iVar1 = *(int *)(puVar9 + 10);
    *(int *)(puVar9 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar2 = *(undefined4 *)puVar3;
      (**(code **)*puVar9)(puVar9);
      FUN_00404870(uVar2,puVar9);
      lVar6 = plVar10[1];
    }
    else {
      lVar6 = plVar10[1];
    }
    if (lVar6 != 0) {
      FUN_00431200();
    }
    if (DAT_0275aec8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)0x0;
      plVar5 = DAT_0275aec8;
      do {
        plVar7 = plVar5;
        if ((plVar7 <= plVar10) && (plVar10 < plVar7 + 0x780)) goto LAB_004b8a14;
        plVar8 = plVar7;
        plVar5 = (long *)plVar7[0x780];
      } while ((long *)plVar7[0x780] != (long *)0x0);
    }
    plVar7 = (long *)0x0;
LAB_004b8a14:
    if (plVar7[0x782] == 0) {
      plVar7[0x782] = (long)plVar10;
      *plVar10 = 0;
    }
    else {
      *plVar10 = plVar7[0x782];
      plVar7[0x782] = (long)plVar10;
    }
    iVar1 = (int)plVar7[0x781] + 1;
    *(int *)(plVar7 + 0x781) = iVar1;
    if (iVar1 == 0x80) {
      plVar10 = (long *)&DAT_0275aec8;
      if (DAT_0275aec8 != plVar7) {
        plVar10 = plVar8 + 0x780;
      }
      *plVar10 = plVar7[0x780];
      FUN_00404870(*(undefined4 *)puVar3);
    }
    plVar10 = (long *)param_1[0x2b];
  } while( true );
}


