/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094a180; name: FUN_0094a180
 */


void FUN_0094a180(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(char *)((long)param_3 + 10) != '\0') &&
     (uVar1 = FUN_00888fc0(*(undefined2 *)(param_3 + 1)), (uVar1 & 1) != 0)) {
    uVar2 = FUN_009423b0(param_1);
    FUN_009376a0(uVar2,*param_3,0);
  }
  uVar2 = FUN_009423e0(param_1);
  FUN_0092b870(uVar2,*param_3,*(undefined2 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 10));
  return;
}


