/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010072d0; name: FUN_010072d0
 */


void FUN_010072d0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_02710798;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_0150dec0(lVar4);
  FUN_014be100();
  lVar5 = *(long *)(*(long *)puVar1 + 0x1f0);
  if (lVar5 == 0) {
    FUN_0150dfb0(0);
    uVar2 = FUN_008d4060();
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x48);
    uVar3 = FUN_0150df70(0);
    FUN_008d37c0(uVar2,uVar7,uVar3 & 1);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0150dfb0(lVar5);
    uVar2 = FUN_008d4060();
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x48);
    uVar3 = FUN_0150df70(lVar5);
    FUN_008d37c0(uVar2,uVar7,uVar3 & 1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_012b2bf0(*(undefined8 *)(*(long *)PTR_DAT_02710870 + 0x60));
  FUN_0168e710(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288));
  lVar5 = *(long *)(*(long *)puVar1 + 0x248);
  if (lVar5 == 0) {
    FUN_01526440(0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01526440(lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01007438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


