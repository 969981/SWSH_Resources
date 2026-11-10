/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005186f0; name: FUN_005186f0
 */


void FUN_005186f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_5 != 0) {
    puVar1 = (undefined8 *)FUN_005b9900(param_5);
    uVar2 = *puVar1;
  }
  FUN_005254c0(param_1,param_2,DAT_0275c0e0,param_4,uVar2,0,param_6);
  return;
}


