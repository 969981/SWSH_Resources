/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf0790; name: FUN_00bf0790
 */


void FUN_00bf0790(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_38;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xc595123f69540716;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
joined_r0x00bf0884:
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,&local_38,0);
      lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      goto joined_r0x00bf08a4;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xf46b125776a582c9;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    goto joined_r0x00bf0884;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
joined_r0x00bf08a4:
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,param_3,uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,param_3,uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


