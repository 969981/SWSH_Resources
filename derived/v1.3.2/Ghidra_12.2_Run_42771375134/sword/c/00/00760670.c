/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760670; name: FUN_00760670
 */


void FUN_00760670(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_0075f190(param_2);
    uVar2 = FUN_0075f230();
    *param_3 = uVar2;
    uVar1 = FUN_0075f260(uVar1);
    *param_4 = uVar1;
  }
  return;
}


