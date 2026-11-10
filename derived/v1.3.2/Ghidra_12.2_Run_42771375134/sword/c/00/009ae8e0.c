/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ae8e0; name: FUN_009ae8e0
 */


void FUN_009ae8e0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [8];
  
  FUN_009423f0();
  FUN_00942fe0();
  FUN_00943270();
  FUN_009423a0(param_1);
  FUN_00915300();
  uVar3 = FUN_009423f0(param_1);
  uVar4 = FUN_00943080(uVar3,1);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_009423f0(param_1);
    FUN_009430a0(uVar3,1);
    FUN_00942450(param_1);
    uVar3 = FUN_00925cf0();
    FUN_009aa820(uVar3,auStack_28,&local_40);
    FUN_00942420(param_1);
    FUN_00945f30();
    uVar3 = *param_3;
    local_40 = FUN_00942420(param_1);
    uStack_38 = uVar3;
    FUN_00942450(param_1);
    uVar3 = FUN_00925c30();
    FUN_009aafc0(uVar3,auStack_28,&local_40);
    local_40 = FUN_00942420(param_1);
    FUN_00942450(param_1);
    uVar3 = FUN_00925c20();
    FUN_009ab5d0(uVar3,auStack_28,&local_40);
    local_40 = FUN_00942420(param_1);
    FUN_00942450(param_1);
    uVar3 = FUN_009253e0();
    FUN_009ae240(uVar3,auStack_28,&local_40);
    local_40 = FUN_00942420(param_1);
    FUN_00942450(param_1);
    uVar3 = FUN_00925c20();
    FUN_009ab5d0(uVar3,auStack_28,&local_40);
  }
  local_40 = FUN_00942420(param_1);
  FUN_00942450(param_1);
  uVar3 = FUN_00925a70();
  FUN_009aeb90(uVar3,auStack_28,&local_40);
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar4 = FUN_009432a0();
  if ((uVar4 & 1) == 0) {
    FUN_00942450(param_1);
    uVar3 = FUN_00925c70();
    FUN_009a7ba0(uVar3,auStack_28,&local_40);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar4 = FUN_009432a0();
  if ((uVar4 & 1) == 0) {
    FUN_00942450(param_1);
    uVar3 = FUN_00925270();
    FUN_009aac50(uVar3,auStack_28,&local_40);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar2 = FUN_009432b0();
  uVar4 = FUN_00942720(param_1,uVar2);
  if ((uVar4 & 1) != 0) {
    FUN_00942450(param_1);
    uVar3 = FUN_00925ce0();
    FUN_009a3e50(uVar3,auStack_28,&local_40);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar1 = FUN_009432b0();
  *param_2 = uVar1;
  return;
}


