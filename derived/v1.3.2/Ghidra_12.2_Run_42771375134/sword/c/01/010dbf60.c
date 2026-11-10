/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dbf60; name: FUN_010dbf60
 */


void FUN_010dbf60(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_010dc5e0(param_1,0x307b9c87c62f2c51,0x3de4ebb25b188dbc);
  FUN_010dc5e0(param_1,0x307f1d87c6323d5b,0x7a901aca398d6495);
  FUN_010dc5e0(param_1,0x5fbe817668d14e13,0x18ff09123bc6cdfc);
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 == 0) {
    FUN_014c9030(lVar1,0,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_014c9030(lVar1,0,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_010dc5e0(param_1,0x5fc2037668d460d0,0x640a9a0f0261f57f);
  FUN_010dc5e0(param_1,0x5fc2047668d46283,0xd0cb6d805100d312);
  FUN_010dc5e0(param_1,0x5fc2127668d47a4d,0xd0cb6b805100cfac);
  FUN_010dc5e0(param_1,0x5fc50e7668d6a958,0xd0cb69805100cc46);
  FUN_010dc5e0(param_1,0x5fc5107668d6acbe,0xd0cb67805100c8e0);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010dc16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


