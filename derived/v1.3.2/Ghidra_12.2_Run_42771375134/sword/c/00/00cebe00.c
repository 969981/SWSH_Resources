/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cebe00; name: FUN_00cebe00
 */


void FUN_00cebe00(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_38 = 0xb34799e0fe35b04d;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x600),&local_38,lVar3);
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar3 == 0) {
    uVar1 = FUN_01521090(0,param_2);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_01521090(lVar3,param_2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar3 == 0) {
    FUN_014ca220(0,0,uVar1,3,0,1);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014ca220(lVar3,0,uVar1,3,0,1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_38 = 0x93cb05cf36bc6717;
  FUN_0167cce0(lVar2,&local_38,10);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


