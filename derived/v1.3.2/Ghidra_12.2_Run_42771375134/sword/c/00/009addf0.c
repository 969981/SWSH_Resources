/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009addf0; name: FUN_009addf0
 */


void FUN_009addf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 auStack_30 [8];
  undefined1 *local_28;
  
  FUN_0093ac80(auStack_58);
  FUN_009adea0(param_1,auStack_58,0);
  FUN_009adea0(param_1,auStack_58,1);
  FUN_009adea0(param_1,auStack_58,2);
  FUN_009adea0(param_1,auStack_58,3);
  FUN_009adea0(param_1,auStack_58,4);
  FUN_009adf60(param_1);
  FUN_009ae070(param_1);
  local_28 = auStack_58;
  FUN_00942450(param_1);
  uVar1 = FUN_00925020();
  FUN_00943510(uVar1,auStack_30,&local_28);
  return;
}


