/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045c8a0; name: FUN_0045c8a0
 */


int FUN_0045c8a0(long param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    puVar4 = PTR_DAT_02712ad0;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar6 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
LAB_0045c8fc:
        piVar7 = *(int **)(param_1 + 0x18);
        *param_3 = *(undefined8 *)(piVar7 + 2);
        iVar6 = *piVar7;
        if (iVar6 == 0) goto code_r0x0045c910;
        if (*(long *)(param_1 + 0xa0) != 0) {
          FUN_00431200();
          iVar6 = *piVar7;
        }
        *(int *)(param_1 + 0x90) = iVar6;
        *(int *)(param_1 + 0x94) = piVar7[1];
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar7 + 2);
        piVar5 = *(int **)(piVar7 + 4);
        *(int **)(param_1 + 0xa0) = piVar5;
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar5 + 1;
        }
        *param_2 = piVar7[1];
        puVar8 = *(undefined4 **)(param_1 + 0x18);
        uVar2 = *(uint *)(param_1 + 0x20);
        puVar3 = puVar8;
        while (puVar3 < puVar8 + (ulong)uVar2 * 6 + -6) {
          if (*(long *)(puVar3 + 4) != 0) {
            FUN_00431200();
          }
          *puVar3 = puVar3[6];
          puVar3[1] = puVar3[7];
          piVar7 = *(int **)(puVar3 + 10);
          puVar1 = puVar3 + 6;
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar3 + 8);
          *(int **)(puVar3 + 4) = piVar7;
          puVar3 = puVar1;
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar7 + 1;
          }
        }
        if (*(long *)(puVar8 + (ulong)uVar2 * 6 + -2) != 0) {
          FUN_00431200();
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        iVar6 = *(int *)(param_1 + 0x90);
        goto joined_r0x0045ca6c;
      }
LAB_0045c998:
      iVar6 = *(int *)(param_1 + 0x90);
joined_r0x0045ca6c:
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return iVar6;
code_r0x0045c910:
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x20);
  puVar3 = puVar8;
  while (puVar3 < puVar8 + (ulong)uVar2 * 6 + -6) {
    if (*(long *)(puVar3 + 4) != 0) {
      FUN_00431200();
    }
    *puVar3 = puVar3[6];
    puVar3[1] = puVar3[7];
    piVar7 = *(int **)(puVar3 + 10);
    puVar1 = puVar3 + 6;
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar3 + 8);
    *(int **)(puVar3 + 4) = piVar7;
    puVar3 = puVar1;
    if (piVar7 != (int *)0x0) {
      *piVar7 = *piVar7 + 1;
    }
  }
  if (*(long *)(puVar8 + (ulong)uVar2 * 6 + -2) != 0) {
    FUN_00431200();
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  FUN_0048f020(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x6c),0,*param_3);
  if (*(int *)(param_1 + 0x20) == 0) goto LAB_0045c998;
  goto LAB_0045c8fc;
}


