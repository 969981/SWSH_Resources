/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c71090; name: FUN_00c71090
 */


void FUN_00c71090(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_38;
  
  if (((((char)param_1[0x25] == '\0') && ((**(code **)(*param_1 + 0x100))(), param_1[0x24] != 0)) &&
      (param_1[0x1d] != 0)) && (*(int *)(param_1[0x1d] + 0x54) != 0)) {
    lVar2 = param_1[0x24];
    FUN_00c738a0(&local_38,param_1[0x1d]);
    uVar1 = (**(code **)(*local_38 + 0x98))();
    FUN_0069ae40(lVar2,param_2,uVar1,1);
    if (local_38 != (long *)0x0) {
      (**(code **)(local_38[9] + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}


