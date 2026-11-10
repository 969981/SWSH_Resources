/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044b870; name: FUN_0044b870
 */


void FUN_0044b870(long param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  if ((*(char *)((long)param_2 + 0x23) != '\0') && (*(char *)((long)param_2 + 0x21) != '\0')) {
    iVar4 = *param_2;
    if ((iVar4 == 0) || (iVar4 == 2)) {
      uVar2 = 0;
    }
    else {
      if (iVar4 != 1) goto LAB_0044b8c8;
      uVar2 = 1;
    }
    FUN_004b3ac0(param_1 + 0x18,uVar2);
  }
LAB_0044b8c8:
  iVar4 = *(int *)(param_1 + 0xc0);
  if (iVar4 != 0) {
    lVar5 = (ulong)(iVar4 - 1) << 3;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0xb8) + lVar5);
      if ((((char)param_2[8] == '\0') || (plVar3[0x10] == 0)) &&
         (uVar1 = FUN_00482cf0(plVar3,*(undefined8 *)(param_2 + 0xc)), (uVar1 & 1) == 0)) {
        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -8;
    } while (iVar4 != 0);
  }
  return;
}


