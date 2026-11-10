/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8b600; name: FUN_00d8b600
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d8b600(long *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar5 = *(long *)(*param_1 + 0x90);
  if (lVar5 == 0) {
    uVar4 = FUN_0100c3b0(0,1);
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = FUN_0100c3b0(lVar5,1);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  lVar8 = *(long *)PTR_DAT_02710798;
  lVar5 = *(long *)(lVar8 + 0x208);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar8 + 0x1d8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar1 = *(uint *)(lVar5 + 0x1a0);
  if ((uVar1 & 1) == 0) {
    FUN_01562f30(2);
    uVar1 = *(uint *)(lVar5 + 0x1a0) | 1;
    *(uint *)(lVar5 + 0x1a0) = uVar1;
  }
  if ((uVar4 & 1) == 0) {
    uVar2 = false;
  }
  else {
    iVar3 = FUN_01521090(lVar8,0x630);
    uVar1 = *(uint *)(lVar5 + 0x1a0);
    uVar2 = iVar3 == 0;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    FUN_01562f30(3);
    *(uint *)(lVar5 + 0x1a0) = *(uint *)(lVar5 + 0x1a0) | 2;
  }
  if ((uVar4 & 1) != 0) {
    iVar3 = FUN_01521090(lVar8,0x63d);
    uVar2 = iVar3 == 0 | uVar2;
  }
  if (((bool)uVar2) && ((param_2 & 1) != 0)) {
    lVar6 = *(long *)(*param_1 + 0xb8);
    if (lVar6 == 0) {
      FUN_015c8a70(0,0xcb0832a6cc96028b,0,0,0,0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_015c8a70(lVar6,0xcb0832a6cc96028b,0,0,0,0);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00d8b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


