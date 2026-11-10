/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00518750; name: FUN_00518750
 */


void FUN_00518750(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)FUN_005b9900(param_3);
    uVar2 = *puVar1;
  }
  FUN_00523f90(DAT_0275c0e0,param_2,uVar2);
  return;
}


