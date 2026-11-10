/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944960; name: FUN_00944960
 */


void FUN_00944960(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  uVar3 = *param_3;
  uVar2 = FUN_009423e0();
  FUN_0092c210(uVar2,uVar3);
  iVar1 = FUN_008e12a0(uVar3,0x12);
  if (iVar1 == 0x7f) {
    local_28 = uVar3;
    FUN_00942450(param_1);
    uVar2 = FUN_00925960();
    FUN_00944a90(uVar2,auStack_30,&local_28);
  }
  return;
}


