/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a99f0; name: FUN_009a99f0
 */


void FUN_009a99f0(undefined8 param_1,undefined1 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_b8 [80];
  undefined1 *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_48 [8];
  
  uVar2 = FUN_009423e0();
  FUN_0092cac0(uVar2,0x1f,*param_3);
  uVar3 = FUN_009426f0(param_1);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_00942710(param_1), (uVar3 & 1) == 0)) {
    FUN_0093b070(auStack_b8);
    local_68 = auStack_b8;
    FUN_00942450(param_1);
    uVar2 = FUN_00925910();
    FUN_00948da0(uVar2,local_48,&local_68);
    FUN_0093b2e0(auStack_b8);
    puVar4 = (undefined1 *)FUN_0093b2f0(auStack_b8);
    if (puVar4 != (undefined1 *)0x0) {
      while( true ) {
        uVar2 = FUN_009423e0(param_1);
        uVar1 = FUN_008e0a00(puVar4);
        FUN_0092cac0(uVar2,uVar1,*param_3);
        local_60 = 1;
        local_58 = 0;
        local_68 = puVar4;
        FUN_00942450(param_1);
        uVar2 = FUN_009251d0();
        FUN_0094af90(uVar2,local_48,&local_68);
        FUN_009423f0(param_1);
        uVar2 = FUN_00942fe0();
        uVar3 = FUN_00943290(uVar2,5);
        if ((uVar3 & 1) != 0) break;
        uVar3 = FUN_009426f0(param_1);
        if ((((uVar3 & 1) != 0) && (uVar3 = FUN_00942710(param_1), (uVar3 & 1) != 0)) ||
           (puVar4 = (undefined1 *)FUN_0093b2f0(auStack_b8), puVar4 == (undefined1 *)0x0)) break;
      }
    }
    FUN_00942450(param_1);
    uVar2 = FUN_00925120();
    FUN_009a93c0(uVar2,local_48,&local_68);
    local_68._0_1_ = local_48[0];
  }
  else {
    FUN_00942450(param_1);
    uVar2 = FUN_00925120();
    FUN_009a93c0(uVar2,&local_68,auStack_b8);
  }
  *param_2 = local_68._0_1_;
  return;
}


