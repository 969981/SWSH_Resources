/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6e50; name: FUN_00df6e50
 */


undefined8 FUN_00df6e50(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x290);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01503010(lVar3,*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 != 10) {
    iVar2 = FUN_015030d0(lVar3,*(undefined4 *)(param_1 + 0xb0));
    iVar2 = FUN_015030f0(lVar3,iVar2 + 1);
    if (iVar1 < iVar2) {
      uVar4 = 1;
      goto joined_r0x00df6ed0;
    }
  }
  uVar4 = 0;
joined_r0x00df6ed0:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar4;
}


