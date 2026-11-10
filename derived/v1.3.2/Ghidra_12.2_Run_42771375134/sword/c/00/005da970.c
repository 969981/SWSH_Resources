/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005da970; name: FUN_005da970
 */


undefined8 FUN_005da970(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar7 = 0;
  do {
    while( true ) {
      plVar2 = (long *)FUN_005dfa60(uVar6);
      (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)((long)&PTR_s_A___B_025fd5c0 + lVar7));
      (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined8 *)((long)&PTR_s_A___B_025fd5c8 + lVar7));
      FUN_005c47b0(plVar2 + 0x2c,*(undefined8 *)((long)&PTR_DAT_025fd5d0 + lVar7));
      plVar3 = (long *)FUN_005dcca0(uVar6,1);
      (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01d1acbd);
      (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01d1acbd);
      *(undefined2 *)((long)plVar3 + 0xbc) = 0x101;
      *(undefined1 *)((long)plVar3 + 0xbe) = 1;
      FUN_005dc290(plVar2,plVar3);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar3 = (long *)FUN_005dcca0(uVar6,1);
      (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01cda56e);
      (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01cda56e);
      *(undefined2 *)((long)plVar3 + 0xbc) = 0x101;
      *(undefined1 *)((long)plVar3 + 0xbe) = 1;
      FUN_005dc290(plVar2,plVar3);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar3 = (long *)FUN_005dcca0(uVar6,2);
      (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01d1798d);
      (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01d1798d);
      *(undefined2 *)((long)plVar3 + 0xbc) = 0x101;
      *(undefined1 *)((long)plVar3 + 0xbe) = 1;
      FUN_005dc340(plVar2,plVar3);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      uVar4 = *(ulong *)(param_1 + 0x168);
      uVar1 = *(ulong *)(param_1 + 0x170);
      if (uVar1 <= uVar4) break;
LAB_005dab54:
      *(long **)(*(long *)(param_1 + 0x180) + uVar4 * 8) = plVar2;
      lVar5 = *(long *)(param_1 + 0x168) + 1;
      *(long *)(param_1 + 0x168) = lVar5;
      *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x180);
      *(long *)(param_1 + 400) = *(long *)(param_1 + 0x180) + lVar5 * 8;
      lVar7 = lVar7 + 0x18;
      if (lVar7 == 0x60) {
        return 1;
      }
    }
    if (*(long *)(param_1 + 0x198) == 0) {
      lVar5 = uVar1 * 2;
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      uVar4 = FUN_005db840(param_1 + 0x158,lVar5,1);
    }
    else {
      uVar4 = FUN_005db840(param_1 + 0x158,*(long *)(param_1 + 0x198) + uVar1,1);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x168);
      goto LAB_005dab54;
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    lVar7 = lVar7 + 0x18;
    if (lVar7 == 0x60) {
      return 1;
    }
  } while( true );
}


