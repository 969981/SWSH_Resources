/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af2d0; name: FUN_009af2d0
 */


void FUN_009af2d0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_ba0 [2896];
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  FUN_009423f0();
  FUN_00942fe0();
  FUN_00943270();
  FUN_009423a0(param_1);
  FUN_00915300();
  FUN_00942430(param_1);
  FUN_00950d80();
  FUN_009423d0(param_1);
  FUN_008db330();
  FUN_00945e10(auStack_ba0);
  uStack_48 = *param_3;
  local_50 = auStack_ba0;
  FUN_00942450(param_1);
  uVar2 = FUN_00925c30();
  FUN_009aafc0(uVar2,auStack_38,&local_50);
  local_50 = auStack_ba0;
  FUN_00942450(param_1);
  uVar2 = FUN_00925a60();
  FUN_009af050(uVar2,auStack_38,&local_50);
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar3 = FUN_009432a0();
  if ((uVar3 & 1) == 0) {
    FUN_009423e0(param_1);
    FUN_00929860();
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar3 = FUN_009432a0();
  if ((uVar3 & 1) == 0) {
    FUN_00942450(param_1);
    uVar2 = FUN_009254a0();
    FUN_009ad660(uVar2,&local_50,auStack_ba0);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar1 = FUN_009432b0();
  *param_2 = uVar1;
  return;
}


