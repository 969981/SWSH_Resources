/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0145c360; name: FUN_0145c360
 */


void FUN_0145c360(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  
  uVar1 = FUN_01452770(*(undefined8 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x414));
  iVar2 = FUN_0152e3a0(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x414),7);
  uVar6 = *(undefined8 *)(param_1 + 0x420);
  lVar3 = FUN_0152d900(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x414));
  auVar7 = FUN_01452950(uVar6,uVar1,iVar2 + 1,*(undefined1 *)(lVar3 + 1));
  uVar4 = auVar7._0_8_;
  *(undefined1 (*) [12])(param_1 + 0x434) = auVar7;
  if ((uVar4 & 0xff) == 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar3 == 0) {
      FUN_01520760(0,uVar4 >> 0x10,uVar4 >> 0x20,1);
      return;
    }
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_01520760(lVar3,*(undefined2 *)(param_1 + 0x436),*(undefined2 *)(param_1 + 0x438),1);
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
    if (lVar3 == 0) {
      FUN_01538ef0(0);
      return;
    }
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_01538ef0(lVar3,*(undefined4 *)(param_1 + 0x43c));
  }
                    /* WARNING: Could not recover jumptable at 0x0145c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


