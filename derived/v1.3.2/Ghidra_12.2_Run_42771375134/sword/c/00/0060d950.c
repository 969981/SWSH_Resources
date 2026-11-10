/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060d950; name: FUN_0060d950
 */


undefined4 FUN_0060d950(__jmp_buf_tag *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  iVar2 = setjmp(param_1);
  if (iVar2 != 0) {
    return 0x40;
  }
  uVar3 = FUN_00605f70(param_1 + 2,&PTR_LAB_02600450,param_1);
  if ((int)param_1[1].__saved_mask.__val[9] != 0) {
    return uVar3;
  }
  piVar4 = (int *)(param_1[1].__saved_mask.__val[10] +
                  (long)(*(int *)((long)param_1[1].__saved_mask.__val + 0x2c) -
                        (int)param_1[1].__saved_mask.__val[7]) * 8);
  iVar2 = (int)param_1[1].__saved_mask.__val[5];
  piVar5 = *(int **)piVar4;
  if ((piVar5 != (int *)0x0) && (iVar6 = *piVar5, iVar6 <= iVar2)) {
    do {
      piVar4 = piVar5;
      if (iVar6 == iVar2) {
        piVar4[2] = piVar4[2] + (int)param_1[1].__saved_mask.__val[8];
        piVar4[1] = piVar4[1] + *(int *)((long)param_1[1].__saved_mask.__val + 0x44);
        return uVar3;
      }
      piVar5 = *(int **)(piVar4 + 4);
    } while ((piVar5 != (int *)0x0) && (iVar6 = *piVar5, iVar6 <= iVar2));
    piVar4 = piVar4 + 4;
  }
  uVar1 = param_1[1].__saved_mask.__val[0xd];
  if ((long)param_1[1].__saved_mask.__val[0xc] <= (long)uVar1) {
                    /* WARNING: Subroutine does not return */
    longjmp(param_1,1);
  }
  uVar7 = param_1[1].__saved_mask.__val[0xb];
  param_1[1].__saved_mask.__val[0xd] = uVar1 + 1;
  piVar5 = (int *)(uVar7 + uVar1 * 0x18);
  *piVar5 = iVar2;
  piVar5[2] = (int)param_1[1].__saved_mask.__val[8];
  piVar5[1] = *(int *)((long)param_1[1].__saved_mask.__val + 0x44);
  *(undefined8 *)(piVar5 + 4) = *(undefined8 *)piVar4;
  *(int **)piVar4 = piVar5;
  return uVar3;
}


