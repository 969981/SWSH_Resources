/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009abf90; name: FUN_009abf90
 */


void FUN_009abf90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_40;
  char local_38 [8];
  
  uVar5 = *param_3;
  FUN_009423f0();
  FUN_00942fd0();
  FUN_009429d0();
  local_40 = uVar5;
  FUN_00942450(param_1);
  uVar5 = FUN_00925a40();
  FUN_009ac720(uVar5,local_38,&local_40);
  FUN_009423f0(param_1);
  FUN_00942fd0();
  FUN_00942a30();
  puVar6 = (undefined8 *)*param_3;
  iVar1 = FUN_00942620(param_1);
  if ((iVar1 == 2) && (uVar3 = FUN_00946c50(puVar6), (uVar3 & 1) != 0)) {
    uVar5 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(*puVar6);
    FUN_00939b00(uVar5,uVar2);
  }
  local_40 = CONCAT62(local_40._2_6_,0x101);
  FUN_00942450(param_1);
  uVar5 = FUN_00925a80();
  FUN_009ac220(uVar5,local_38,&local_40);
  uVar5 = *param_3;
  iVar1 = FUN_00942620(param_1);
  if ((iVar1 == 2) && (uVar3 = FUN_00946c00(uVar5), (uVar3 & 1) != 0)) {
    FUN_009424b0(param_1,4);
    FUN_008e0b60();
    iVar1 = FUN_008e6070();
    if (iVar1 == 3) {
      local_40 = CONCAT71(local_40._1_7_,4);
      FUN_00942450(param_1);
      uVar5 = FUN_00925a90();
      FUN_009ac500(uVar5,local_38,&local_40);
    }
  }
  FUN_00942450(param_1);
  uVar5 = FUN_00925120();
  FUN_009a93c0(uVar5,local_38,&local_40);
  uVar3 = FUN_009426f0(param_1);
  uVar4 = FUN_00942710(param_1);
  FUN_009423f0(param_1);
  uVar5 = FUN_00942fe0();
  if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
    uVar3 = FUN_00943290(uVar5,6);
    if ((uVar3 & 1) == 0) {
      FUN_009423f0(param_1);
      uVar5 = FUN_00942fe0();
      uVar3 = FUN_00943290(uVar5,1);
      if ((uVar3 & 1) == 0) {
        FUN_009423f0(param_1);
        uVar5 = FUN_00942fe0();
        if (local_38[0] == '\0') {
          FUN_00943290(uVar5,5);
        }
        else {
          FUN_00943280(uVar5,3);
        }
      }
    }
  }
  else {
    FUN_00943280(uVar5,4);
  }
  return;
}


