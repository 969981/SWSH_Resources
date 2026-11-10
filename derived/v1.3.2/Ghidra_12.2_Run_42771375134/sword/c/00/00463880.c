/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463880; name: FUN_00463880
 */


void FUN_00463880(long *param_1)

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
  plVar10 = (long *)param_1[0x1d];
  do {
    if (plVar10 == (long *)0x0) {
      return;
    }
    if (*plVar10 == 0) {
      param_1[0x1d] = 0;
    }
    else {
      param_1[0x1d] = *plVar10;
    }
    FUN_0048fd60(*(undefined8 *)puVar4,*(undefined4 *)((long)plVar10 + 0x4c));
    (**(code **)(*param_1 + 0x130))(param_1,1);
    puVar9 = (undefined8 *)plVar10[1];
    iVar1 = *(int *)(puVar9 + 10);
    *(int *)(puVar9 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar2 = *(undefined4 *)puVar3;
      (**(code **)*puVar9)(puVar9);
      FUN_00404870(uVar2,puVar9);
      lVar6 = plVar10[0xb];
    }
    else {
      lVar6 = plVar10[0xb];
    }
    if (lVar6 != 0) {
      *(undefined4 *)(plVar10 + 0xc) = 0;
      FUN_00404870(*(undefined4 *)puVar3);
      plVar10[0xb] = 0;
      *(undefined4 *)((long)plVar10 + 100) = 0;
    }
    FUN_00479c90(plVar10 + 0xd);
    FUN_00479c10(plVar10 + 0xd);
    if (plVar10[7] != 0) {
      FUN_00431200();
    }
    if (DAT_02738b30 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)0x0;
      plVar5 = DAT_02738b30;
      do {
        plVar7 = plVar5;
        if ((plVar7 <= plVar10) && (plVar10 < plVar7 + 0x780)) goto LAB_004639b8;
        plVar8 = plVar7;
        plVar5 = (long *)plVar7[0x780];
      } while ((long *)plVar7[0x780] != (long *)0x0);
    }
    plVar7 = (long *)0x0;
LAB_004639b8:
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
      plVar10 = (long *)&DAT_02738b30;
      if (DAT_02738b30 != plVar7) {
        plVar10 = plVar8 + 0x780;
      }
      *plVar10 = plVar7[0x780];
      FUN_00404870(*(undefined4 *)puVar3);
    }
    plVar10 = (long *)param_1[0x1d];
  } while( true );
}


