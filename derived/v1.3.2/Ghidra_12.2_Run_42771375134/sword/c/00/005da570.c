/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005da570; name: FUN_005da570
 */


undefined8 FUN_005da570(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar7 = param_1 + 0x68;
  puVar1 = (undefined8 *)(param_1 + 0x98);
  plVar3 = (long *)FUN_005dd150(uVar6,1);
  (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01d16956);
  (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01d16956);
  uVar4 = *(ulong *)(param_1 + 0x78);
  uVar2 = *(ulong *)(param_1 + 0x80);
  if (uVar4 < uVar2) {
LAB_005da610:
    *(long **)(*(long *)(param_1 + 0x90) + uVar4 * 8) = plVar3;
    lVar5 = *(long *)(param_1 + 0x78) + 1;
    *(long *)(param_1 + 0x78) = lVar5;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x90) + lVar5 * 8;
  }
  else {
    lVar5 = uVar2 * 2;
    if (lVar5 == 0) {
      lVar5 = 1;
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar5 = *(long *)(param_1 + 0xa8) + uVar2;
    }
    uVar4 = FUN_005db6a0(lVar7,lVar5,1);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x78);
      goto LAB_005da610;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  plVar3 = (long *)FUN_005dd150(uVar6,6);
  (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01cf1baf);
  (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01cf1baf);
  uVar4 = *(ulong *)(param_1 + 0x78);
  uVar2 = *(ulong *)(param_1 + 0x80);
  if (uVar4 < uVar2) {
LAB_005da6a4:
    *(long **)(*(long *)(param_1 + 0x90) + uVar4 * 8) = plVar3;
    lVar5 = *(long *)(param_1 + 0x78) + 1;
    *(long *)(param_1 + 0x78) = lVar5;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x90) + lVar5 * 8;
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
      lVar5 = uVar2 * 2;
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      uVar4 = FUN_005db6a0(lVar7,lVar5,1);
    }
    else {
      uVar4 = FUN_005db6a0(lVar7,*(long *)(param_1 + 0xa8) + uVar2,1);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x78);
      goto LAB_005da6a4;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  plVar3 = (long *)FUN_005dd150(uVar6,0xb);
  (**(code **)(*plVar3 + 0x48))(plVar3,"float");
  (**(code **)(*plVar3 + 0x60))(plVar3,"float");
  uVar4 = *(ulong *)(param_1 + 0x78);
  uVar2 = *(ulong *)(param_1 + 0x80);
  if (uVar2 <= uVar4) {
    if (*(long *)(param_1 + 0xa8) == 0) {
      lVar5 = uVar2 * 2;
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      uVar4 = FUN_005db6a0(lVar7,lVar5,1);
    }
    else {
      uVar4 = FUN_005db6a0(lVar7,*(long *)(param_1 + 0xa8) + uVar2,1);
    }
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      goto LAB_005da79c;
    }
    uVar4 = *(ulong *)(param_1 + 0x78);
  }
  *(long **)(*(long *)(param_1 + 0x90) + uVar4 * 8) = plVar3;
  lVar7 = *(long *)(param_1 + 0x78) + 1;
  *(long *)(param_1 + 0x78) = lVar7;
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x90) + lVar7 * 8;
LAB_005da79c:
  lVar7 = 0;
  do {
    while( true ) {
      plVar3 = (long *)FUN_005df270(uVar6,*(undefined4 *)((long)&DAT_025fcf10 + lVar7),
                                    *(undefined4 *)((long)&DAT_025fcf14 + lVar7));
      (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)((long)&PTR_s_bool2_025fcf18 + lVar7));
      (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)((long)&PTR_s_bool2_025fcf20 + lVar7));
      uVar4 = *(ulong *)(param_1 + 200);
      uVar2 = *(ulong *)(param_1 + 0xd0);
      if (uVar2 <= uVar4) break;
LAB_005da814:
      *(long **)(*(long *)(param_1 + 0xe0) + uVar4 * 8) = plVar3;
      lVar5 = *(long *)(param_1 + 200) + 1;
      *(long *)(param_1 + 200) = lVar5;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
      *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe0) + lVar5 * 8;
      lVar7 = lVar7 + 0x18;
      if (lVar7 == 0xd8) goto LAB_005da874;
    }
    if (*(long *)(param_1 + 0xf8) == 0) {
      lVar5 = uVar2 * 2;
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      uVar4 = FUN_005db6a0(param_1 + 0xb8,lVar5,1);
    }
    else {
      uVar4 = FUN_005db6a0(param_1 + 0xb8,*(long *)(param_1 + 0xf8) + uVar2,1);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 200);
      goto LAB_005da814;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd8);
LAB_005da874:
  lVar7 = 0;
  do {
    while( true ) {
      plVar3 = (long *)FUN_005dea30(uVar6,*(undefined4 *)((long)&DAT_025fd000 + lVar7),
                                    *(undefined4 *)((long)&DAT_025fd004 + lVar7),
                                    *(undefined4 *)((long)&DAT_025fd008 + lVar7));
      (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)((long)&PTR_s_bool1x2_025fd010 + lVar7));
      (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)((long)&PTR_s_bool1x2_025fd018 + lVar7));
      uVar4 = *(ulong *)(param_1 + 0x118);
      uVar2 = *(ulong *)(param_1 + 0x120);
      if (uVar2 <= uVar4) break;
LAB_005da8f0:
      *(long **)(*(long *)(param_1 + 0x130) + uVar4 * 8) = plVar3;
      lVar5 = *(long *)(param_1 + 0x118) + 1;
      *(long *)(param_1 + 0x118) = lVar5;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x130) + lVar5 * 8;
      lVar7 = lVar7 + 0x20;
      if (lVar7 == 0x5a0) {
        return 1;
      }
    }
    if (*(long *)(param_1 + 0x148) == 0) {
      lVar5 = uVar2 * 2;
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      uVar4 = FUN_005db6a0(param_1 + 0x108,lVar5,1);
    }
    else {
      uVar4 = FUN_005db6a0(param_1 + 0x108,*(long *)(param_1 + 0x148) + uVar2,1);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x118);
      goto LAB_005da8f0;
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    lVar7 = lVar7 + 0x20;
    if (lVar7 == 0x5a0) {
      return 1;
    }
  } while( true );
}


