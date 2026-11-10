/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01047230; name: FUN_01047230
 */


void FUN_01047230(long param_1,uint param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((*(long *)(param_1 + 0x9b8) == 0) || (*(long *)(param_1 + 0x9b0) == 0)) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  *(short *)(param_1 + 0x5cc) = (short)param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(*(long *)(param_1 + 0x60) + 0xb0) == 0) goto LAB_01047530;
  FUN_0168be20(param_1 + 0x5e0,param_2);
  if (*(long *)(param_1 + 0x9b8) == 0) goto LAB_01047530;
  lVar6 = *(long *)(*(long *)(param_1 + 0x9b8) + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00888d90(param_2);
  lVar7 = *(long *)(lVar4 + 0x2e0);
  if ((uVar2 & 1) == 0) {
    if (lVar7 == 0) {
      FUN_014c9900(0,0,param_2 & 0xffff,1);
      lVar7 = *(long *)(lVar4 + 0x2e8);
    }
    else {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_014c9900(lVar7,0,param_2 & 0xffff,1);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar7 = *(long *)(lVar4 + 0x2e8);
    }
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      puVar3 = &DAT_02162da8;
      goto LAB_010473bc;
    }
    puVar3 = &DAT_02162da8;
LAB_0104742c:
    FUN_0077eb10(lVar6,puVar3,0);
  }
  else {
    if (lVar7 == 0) {
      uVar1 = FUN_00888e20(param_2);
      FUN_014c9660(0,0,uVar1);
      lVar7 = *(long *)(lVar4 + 0x2e8);
    }
    else {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      uVar1 = FUN_00888e20(param_2);
      FUN_014c9660(lVar7,0,uVar1);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar7 = *(long *)(lVar4 + 0x2e8);
    }
    if (lVar7 == 0) {
      puVar3 = &DAT_02162db0;
      goto LAB_0104742c;
    }
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    puVar3 = &DAT_02162db0;
LAB_010473bc:
    FUN_0077eb10(lVar6,puVar3,lVar7);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_0167cce0(lVar4,&DAT_02162db8,10);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (*(long *)(param_1 + 0x9b0) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x9b0) + 0x60);
    if (lVar6 == 0) {
      FUN_0077e740(0,param_2 & 0xffff,lVar5);
      FUN_0167c9b0(lVar4,&DAT_02162dc0,lVar5,10);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077e740(lVar6,param_2 & 0xffff,lVar5);
      FUN_0167c9b0(lVar4,&DAT_02162dc0,lVar5,10);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    FUN_010364c0(param_1,2);
    return;
  }
LAB_01047530:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


