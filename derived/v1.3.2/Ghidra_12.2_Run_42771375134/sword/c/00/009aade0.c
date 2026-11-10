/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aade0; name: FUN_009aade0
 */


void FUN_009aade0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [8];
  
  FUN_009423f0();
  FUN_00942fe0();
  FUN_00943270();
  FUN_009423a0(param_1);
  FUN_00915300();
  FUN_00942430(param_1);
  FUN_00950d80();
  FUN_009423d0(param_1);
  FUN_008db330();
  FUN_00942420(param_1);
  FUN_00945f30();
  uVar4 = *param_3;
  local_40 = FUN_00942420(param_1);
  uStack_38 = uVar4;
  FUN_00942450(param_1);
  uVar4 = FUN_00925c30();
  FUN_009aafc0(uVar4,auStack_28,&local_40);
  local_40 = FUN_00942420(param_1);
  FUN_00942450(param_1);
  uVar4 = FUN_00925c20();
  FUN_009ab5d0(uVar4,auStack_28,&local_40);
  FUN_00942450(param_1);
  uVar4 = FUN_00925a50();
  FUN_009ab840(uVar4,auStack_28,&local_40);
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar2 = FUN_009432b0();
  uVar3 = FUN_00942720(param_1,uVar2);
  if ((uVar3 & 1) != 0) {
    FUN_00942450(param_1);
    uVar4 = FUN_00925ce0();
    FUN_009a3e50(uVar4,auStack_28,&local_40);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar1 = FUN_009432b0();
  *param_2 = uVar1;
  return;
}


