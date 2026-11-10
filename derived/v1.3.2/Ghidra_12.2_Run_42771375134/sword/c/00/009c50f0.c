/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c50f0; name: FUN_009c50f0
 */


void FUN_009c50f0(undefined8 *param_1,undefined1 *param_2,undefined2 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 local_38;
  
  if (*(char *)((long)param_1 + 0x4e61) == '\0') {
    if (*(char *)(param_1 + 0x9cc) != '\0') goto LAB_009c5168;
    param_1 = param_1 + 1;
    uVar1 = FUN_00915230(param_1);
    *param_2 = uVar1;
    uVar2 = FUN_00915210(param_1);
    *param_3 = uVar2;
    uVar1 = FUN_00915220(param_1);
  }
  else {
    uVar3 = FUN_009b2b80(*param_1);
    if ((uVar3 & 1) == 0) {
LAB_009c5168:
      *param_2 = 0;
      *param_3 = 0;
      *param_4 = 0x33;
      return;
    }
    FUN_009b2bc0(*param_1,&local_38);
    uVar1 = FUN_009150b0(local_38);
    *param_2 = uVar1;
    uVar2 = FUN_00915090(local_38);
    *param_3 = uVar2;
    uVar1 = FUN_009150a0(local_38);
  }
  *param_4 = uVar1;
  return;
}


