/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbafd0; name: FUN_00bbafd0
 */


void FUN_00bbafd0(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar2 = (param_3 & 1) == 0;
  uVar4 = 0xc00f01b283bf4ea0;
  if (bVar2) {
    uVar4 = 0xc00f02b283bf5053;
  }
  local_50 = 0x4a9601abe64a132e;
  if (bVar2) {
    local_50 = 0x4a9602abe64a14e1;
  }
  lVar5 = *(long *)(param_1 + 0x2b0);
  lVar1 = param_1 + 0x100;
  local_48 = uVar4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_58 = 0xb3d80372051305e6;
  FUN_00ffd010(lVar1,&local_58);
  if (param_2 == 0) {
    FUN_00bb6fe0(param_1,0xbc3d87418a07cff8,uVar4);
    FUN_0167b9b0(lVar5,&local_50,0);
    FUN_00ffd510(0x3f800000,lVar1,&local_58);
  }
  else {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    lVar7 = *(long *)(lVar5 + 0x2e8);
    if (lVar7 == 0) {
      uVar4 = FUN_0150a5f0(lVar6,param_2 + -1);
      FUN_0077d520(0,uVar4);
      FUN_0167cce0(lVar5,&local_48,10);
      uVar3 = FUN_0150aec0(lVar6,param_2 + -1);
      FUN_0167b9b0(lVar5,&local_50,uVar3 & 1);
      FUN_00ffd510(0,lVar1,&local_58);
    }
    else {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      uVar4 = FUN_0150a5f0(lVar6,param_2 + -1);
      FUN_0077d520(lVar7,uVar4);
      FUN_0167cce0(lVar5,&local_48,10);
      uVar3 = FUN_0150aec0(lVar6,param_2 + -1);
      FUN_0167b9b0(lVar5,&local_50,uVar3 & 1);
      FUN_00ffd510(0,lVar1,&local_58);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


