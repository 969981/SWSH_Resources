/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094ec70; name: FUN_0094ec70
 */


void FUN_0094ec70(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  FUN_00942380();
  iVar2 = FUN_008f8b90();
  if (iVar2 == 0) {
    if (*(char *)(param_3 + 1) == '\0') {
      uVar4 = *param_3;
      uVar3 = FUN_008e1600(uVar4);
      if ((uVar3 & 1) == 0) {
        uVar5 = FUN_009423e0(param_1);
        uVar3 = FUN_00929610(uVar5,uVar4);
        if ((uVar3 & 1) != 0) {
          return;
        }
      }
    }
    uVar4 = FUN_009423f0(param_1);
    uVar3 = FUN_00943080(uVar4,0);
    if ((uVar3 & 1) != 0) goto LAB_0094ed4c;
    if (*(char *)((long)param_3 + 9) != '\0') {
      uVar5 = *param_3;
      uVar4 = FUN_009423e0(param_1);
      uVar3 = FUN_009296d0(uVar4,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_0094ed3c;
    }
    FUN_0094ed90(param_1,*param_3);
  }
  else {
    uVar3 = FUN_00942650(param_1);
    if ((uVar3 & 1) == 0) goto LAB_0094ed4c;
    uVar4 = FUN_009423f0(param_1);
    uVar3 = FUN_00943080(uVar4,0);
    if ((uVar3 & 1) != 0) goto LAB_0094ed4c;
    uVar4 = FUN_009423b0(param_1);
    FUN_00936020(uVar4,0xdd);
  }
LAB_0094ed3c:
  uVar4 = FUN_009423f0(param_1);
  FUN_009430a0(uVar4,0);
LAB_0094ed4c:
  FUN_008e0a00(*param_3);
  uVar1 = FUN_008f94e0();
  uVar4 = FUN_009423b0(param_1);
  FUN_0093a430(uVar4,uVar1);
  *param_2 = 1;
  return;
}


