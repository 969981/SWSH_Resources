/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef5b10; name: FUN_00ef5b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef5b10(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  iVar4 = *(int *)(param_1 + 0x194);
  iVar2 = *(int *)(param_1 + 0x198);
  if (((DAT_02a5e978 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02a5e978), iVar3 != 0)) {
    DAT_02a5e9b0 = 0;
    DAT_02a5e9b8 = 0;
    __cxa_guard_release(&DAT_02a5e978);
  }
  uVar1 = *(uint *)(&UNK_021615f4 + (long)iVar2 * 4 + (long)iVar4 * 0x1c);
  if (((DAT_02a5e980 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02a5e980), iVar4 != 0)) {
    uRam0000000002a5e9c8 = _UNK_01d4b6c8;
    _DAT_02a5e9c0 = _DAT_01d4b6c0;
    __cxa_guard_release(&DAT_02a5e980);
  }
  uVar6 = uVar1;
  if ((int)uVar1 < 0) {
    uVar6 = 8;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (((*(int *)(param_1 + 0x198) == 4) &&
      (uVar5 = FUN_01510f00(lVar7,0x67f239d261a2c946), (uVar5 & 1) != 0)) &&
     (uVar5 = FUN_01510f00(lVar7,0x9bb0c46855b1a4fe), (uVar5 & 1) == 0)) {
    FUN_01511030(lVar7,0xa2ac4bfdb223d309);
    FUN_01511030(lVar7,0x9bb0c46855b1a4fe);
  }
  FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,uVar1 >> 0x1f ^ 1,&DAT_02a5e9b0,&DAT_02a5e9c0,uVar6
               ,1,1);
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


