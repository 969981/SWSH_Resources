/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094e680; name: FUN_0094e680
 */


void FUN_0094e680(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_009424e0(param_1,*param_2);
  if (*(char *)(lVar1 + 0x33d) == param_2[1]) {
    return;
  }
  if (param_2[4] != '\0') {
    uVar2 = FUN_009423b0(param_1);
    FUN_00938920(uVar2,lVar1);
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00938360(uVar2,*param_2,param_2[1],param_2[2]);
  if (param_2[5] != '\0') {
    uVar2 = FUN_009423b0(param_1);
    FUN_00938350(uVar2,*param_2);
    uVar2 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar2,param_2 + 8);
  }
  if (param_2[4] != '\0') {
    uVar2 = FUN_009423b0(param_1);
    FUN_009389e0(uVar2,lVar1);
  }
  uVar2 = FUN_00942380(param_1);
  FUN_008f90a0(uVar2,lVar1);
  return;
}


