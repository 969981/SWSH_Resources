/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad140; name: FUN_009ad140
 */


void FUN_009ad140(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_009424b0(param_1,4);
  FUN_008e0b60();
  FUN_008e5ed0();
  uVar3 = FUN_0093dc30();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009424b0(param_1,4);
    uVar5 = FUN_009423b0(param_1);
    uVar1 = FUN_008e0a00(uVar4);
    FUN_00936040(uVar5,0x17e,uVar1);
    uVar5 = FUN_009423b0(param_1);
    FUN_00937200(uVar5,uVar4,0x82);
    FUN_009ad210(param_1);
    FUN_009ad2f0(param_1);
    uVar4 = FUN_009424b0(param_1,4);
    uVar5 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(uVar4);
    FUN_00939c70(uVar5,uVar2);
  }
  FUN_009ad3d0(param_1);
  return;
}


