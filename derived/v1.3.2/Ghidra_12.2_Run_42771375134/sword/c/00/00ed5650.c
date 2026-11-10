/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed5650; name: FUN_00ed5650
 */


void FUN_00ed5650(long *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0xe6);
  if (bVar1 == 0) {
    return;
  }
  cVar2 = *(char *)((long)param_1 + 0x731);
  *(byte *)((long)param_1 + 0x731) = bVar1;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)((long)param_1 + 0x732) = 0;
  if (5 < bVar1 - 1) {
    return;
  }
  switch((uint)bVar1) {
  case 1:
    FUN_00db5db0(param_1,1);
    FUN_00e46460(param_1,0);
    if ((int)param_1[0xb7] == 3) goto LAB_00ed5704;
    *(undefined1 *)((long)param_1 + 0x732) = 1;
    break;
  case 2:
    FUN_00db5db0(param_1,1);
    FUN_00e46460(param_1,0);
    if ((int)param_1[0xb7] != 3) {
      uVar4 = 1;
      goto LAB_00ed57b8;
    }
LAB_00ed5704:
    uVar4 = 2;
LAB_00ed57b8:
    FUN_00ed63a0(param_1,uVar4,cVar2 == '\0' || cVar2 == '\x03');
    return;
  case 3:
    FUN_00db5db0(param_1,0);
    FUN_00e46460(param_1,1);
    *(undefined1 *)((long)param_1 + 0x732) = 1;
    break;
  case 4:
    *(undefined1 *)((long)param_1 + 0x733) = 1;
    return;
  case 5:
    goto switchD_00ed56ac_caseD_5;
  case 6:
    FUN_00db5db0(param_1,1);
    FUN_00e46460(param_1,0);
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
  if (iVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00ed5774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e8a0,1);
    return;
  }
switchD_00ed56ac_caseD_5:
  return;
}


