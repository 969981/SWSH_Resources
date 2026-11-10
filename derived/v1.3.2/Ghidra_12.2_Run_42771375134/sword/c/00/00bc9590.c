/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc9590; name: FUN_00bc9590
 */


void FUN_00bc9590(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  FUN_0167b9b0(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x60),*(long *)(param_1 + 0x600) + 0x90,
               0);
  if ((*(int *)(param_1 + 0x68c) == 0) && (*(char *)(param_1 + 0x620) == '\0')) {
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    uVar4 = FUN_016b8190();
    uVar5 = (uint)((ulong)uVar4 >> 0x20);
    uVar1 = uVar5 - 2;
    if ((1 < uVar5) && (((int)uVar4 != 0 && (uVar1 < 5)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x5e8);
      lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar8 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar9 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar2 = FUN_0150b350(lVar8);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      uVar3 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar1);
      lVar7 = thunk_FUN_00bccb30(uVar6,0,uVar2,uVar3);
      if (lVar7 != 0) {
        FUN_016a99e0(*(undefined8 *)(param_1 + 0x600),lVar7);
        FUN_0167b9b0(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x60),
                     *(long *)(param_1 + 0x600) + 0x90,1);
      }
    }
  }
  FUN_016a9c10(*(undefined8 *)(param_1 + 0x600));
  return;
}


