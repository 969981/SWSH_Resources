/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af050; name: FUN_009af050
 */


void FUN_009af050(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [40];
  undefined1 *local_38;
  char local_28 [8];
  
  FUN_0093ac80(auStack_60);
  FUN_009af0f0(param_1,auStack_60,*param_3);
  local_38 = auStack_60;
  FUN_00942450(param_1);
  uVar1 = FUN_00925020();
  FUN_00943510(uVar1,local_28,&local_38);
  FUN_00942450(param_1);
  uVar1 = FUN_00925120();
  FUN_009a93c0(uVar1,local_28,&local_38);
  if (local_28[0] != '\0') {
    FUN_009423f0(param_1);
    uVar1 = FUN_00942fe0();
    FUN_00943280(uVar1,3);
  }
  return;
}


