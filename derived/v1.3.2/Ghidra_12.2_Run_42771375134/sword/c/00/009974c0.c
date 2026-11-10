/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009974c0; name: FUN_009974c0
 */


undefined8 FUN_009974c0(undefined8 param_1,uint param_2,uint param_3)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_b0;
  undefined1 auStack_88 [36];
  undefined1 auStack_64 [36];
  
  FUN_0093ec60(param_1,param_3);
  sVar1 = FUN_008e2d10();
  if ((sVar1 == 0) || (uVar2 = FUN_00940830(param_1,param_2,param_3), (uVar2 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = (ulong)&local_b0 | 4;
    local_b0 = 0x1f1f;
    FUN_00943e60(uVar2);
    FUN_00943e60(auStack_88);
    FUN_00943e60(auStack_64);
    local_b0 = CONCAT22(0x101,CONCAT11((char)param_3,(char)param_2));
    FUN_00943f20(uVar2,2,0x598);
    FUN_00943f60(uVar2,param_2 & 0xff);
    FUN_00943f60(uVar2,param_3 & 0xff);
    FUN_00943f60(uVar2,sVar1);
    FUN_0093fc30(param_1,&local_b0);
    uVar3 = 1;
  }
  return uVar3;
}


