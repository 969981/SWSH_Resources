/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115a550; name: FUN_0115a550
 */


void FUN_0115a550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x5d0);
  local_48 = 0x459b2be26b4615c2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar2,&local_48,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar2,&local_48,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar3 = param_1 + 0x100;
  lVar6 = 0x1f0;
  do {
    while( true ) {
      lVar1 = *(long *)(param_1 + 0x708) + lVar6;
      lVar5 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
      if (lVar5 == 0) break;
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0077d470(lVar5);
      FUN_00ffd700(lVar3,lVar1,uVar2,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar6 = lVar6 + 8;
      if (lVar6 == 0x240) goto LAB_0115a670;
    }
    uVar2 = FUN_0077d470(0);
    FUN_00ffd700(lVar3,lVar1,uVar2,10);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x240);
LAB_0115a670:
  uVar2 = *(undefined8 *)(param_1 + 0x5d0);
  local_48 = 0x459b2ce26b461775;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar2,&local_48,0);
  }
  else {
    plVar4 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar2,&local_48,lVar6);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar6 = 0x240;
  do {
    while( true ) {
      lVar1 = *(long *)(param_1 + 0x708) + lVar6;
      lVar5 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
      if (lVar5 == 0) break;
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0077d470(lVar5);
      FUN_00ffd700(lVar3,lVar1,uVar2,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar6 = lVar6 + 8;
      if (lVar6 == 0x290) {
        return;
      }
    }
    uVar2 = FUN_0077d470(0);
    FUN_00ffd700(lVar3,lVar1,uVar2,10);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x290);
  return;
}


