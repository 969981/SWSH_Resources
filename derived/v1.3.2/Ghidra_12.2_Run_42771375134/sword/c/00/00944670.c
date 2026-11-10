/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944670; name: FUN_00944670
 */


void FUN_00944670(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_008ec550(param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009423e0(param_1);
    FUN_0092c020(uVar3,param_3,param_2,param_4,*param_5);
    return;
  }
  if (param_4 != 0x10) {
    uVar3 = FUN_009423e0(param_1);
    FUN_0092c0e0(uVar3,param_3,param_2,param_4);
    return;
  }
  iVar1 = FUN_008e12a0(param_3,0x12);
  if ((iVar1 == 0x100) || (uVar2 = FUN_008e1830(param_3), (uVar2 & 1) == 0)) {
    local_48 = param_3;
    FUN_00942450(param_1);
    uVar3 = FUN_00925c60();
    FUN_00944960(uVar3,auStack_38,&local_48);
  }
  return;
}


