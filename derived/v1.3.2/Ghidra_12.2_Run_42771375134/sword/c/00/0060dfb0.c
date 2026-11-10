/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060dfb0; name: FUN_0060dfb0
 */


void FUN_0060dfb0(__jmp_buf_tag *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  iVar3 = (int)param_1[1].__saved_mask.__val[6];
  iVar1 = iVar3 + -1;
  if (iVar3 <= param_2) {
    iVar1 = param_2;
  }
  if ((int)param_1[1].__saved_mask.__val[9] == 0) {
    piVar4 = (int *)(param_1[1].__saved_mask.__val[10] +
                    (long)(*(int *)((long)param_1[1].__saved_mask.__val + 0x2c) -
                          (int)param_1[1].__saved_mask.__val[7]) * 8);
    iVar3 = (int)param_1[1].__saved_mask.__val[5];
    piVar5 = *(int **)piVar4;
    if ((piVar5 != (int *)0x0) && (iVar6 = *piVar5, iVar6 <= iVar3)) {
      do {
        piVar4 = piVar5;
        if (iVar6 == iVar3) {
          piVar4[2] = piVar4[2] + (int)param_1[1].__saved_mask.__val[8];
          piVar4[1] = piVar4[1] + *(int *)((long)param_1[1].__saved_mask.__val + 0x44);
          goto LAB_0060e058;
        }
        piVar5 = *(int **)(piVar4 + 4);
      } while ((piVar5 != (int *)0x0) && (iVar6 = *piVar5, iVar6 <= iVar3));
      piVar4 = piVar4 + 4;
    }
    uVar2 = param_1[1].__saved_mask.__val[0xd];
    if ((long)param_1[1].__saved_mask.__val[0xc] <= (long)uVar2) {
                    /* WARNING: Subroutine does not return */
      longjmp(param_1,1);
    }
    uVar7 = param_1[1].__saved_mask.__val[0xb];
    param_1[1].__saved_mask.__val[0xd] = uVar2 + 1;
    piVar5 = (int *)(uVar7 + uVar2 * 0x18);
    *piVar5 = iVar3;
    piVar5[2] = (int)param_1[1].__saved_mask.__val[8];
    piVar5[1] = *(int *)((long)param_1[1].__saved_mask.__val + 0x44);
    *(undefined8 *)(piVar5 + 4) = *(undefined8 *)piVar4;
    *(int **)piVar4 = piVar5;
  }
LAB_0060e058:
  iVar3 = *(int *)((long)param_1[1].__saved_mask.__val + 0x3c);
  param_1[1].__saved_mask.__val[8] = 0;
  *(int *)(param_1[1].__saved_mask.__val + 5) = iVar1;
  *(int *)((long)param_1[1].__saved_mask.__val + 0x2c) = param_3;
  if (iVar3 <= param_3) {
    *(undefined4 *)(param_1[1].__saved_mask.__val + 9) = 1;
    return;
  }
  if (param_3 < (int)param_1[1].__saved_mask.__val[7]) {
    *(undefined4 *)(param_1[1].__saved_mask.__val + 9) = 1;
    return;
  }
  *(uint *)(param_1[1].__saved_mask.__val + 9) =
       (uint)(*(int *)((long)param_1[1].__saved_mask.__val + 0x34) <= iVar1);
  return;
}


