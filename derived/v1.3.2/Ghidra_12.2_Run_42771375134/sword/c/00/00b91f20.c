/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b91f20; name: FUN_00b91f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b91f20(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0;
  lVar6 = 0;
  do {
    uVar1 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&DAT_02158e90 + lVar6);
    lVar3 = *(long *)(param_1 + 0x528);
    if (lVar3 == 0) {
      FUN_0168b110(_DAT_00000180 + lVar5,*(undefined8 *)(param_1 + 8),uVar1,0);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0168b110(*(long *)(lVar3 + 0x180) + lVar5,*(undefined8 *)(param_1 + 8),uVar1,0);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    lVar6 = lVar6 + 0x18;
    lVar5 = lVar5 + 0x3d0;
  } while (lVar6 != 0x150);
  lVar6 = *(long *)(param_1 + 0x528);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(int *)(lVar6 + 0x1a0) != 0) {
    uVar2 = 0;
    lVar5 = 0x3c1;
    do {
      *(undefined1 *)(*(long *)(lVar6 + 0x180) + lVar5) = 1;
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x3d0;
    } while (uVar2 < *(uint *)(lVar6 + 0x1a0));
  }
                    /* WARNING: Could not recover jumptable at 0x00b92034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


