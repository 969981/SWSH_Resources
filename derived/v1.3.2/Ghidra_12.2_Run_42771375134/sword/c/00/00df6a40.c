/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6a40; name: FUN_00df6a40
 */


undefined8 FUN_00df6a40(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x290);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01503010(lVar5,*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 == 10) {
    uVar2 = FUN_015035c0(lVar5);
    if (uVar2 < 10) {
LAB_00df6b0c:
      uVar6 = 0;
      goto joined_r0x00df6aa4;
    }
  }
  else {
    iVar3 = FUN_015030d0(lVar5,*(undefined4 *)(param_1 + 0xb0));
    uVar4 = FUN_015030f0(lVar5,iVar3 + 1);
    iVar1 = FUN_01503590(lVar5,iVar1);
    iVar3 = FUN_01503590(lVar5,uVar4);
    if (iVar3 <= iVar1) goto LAB_00df6b0c;
  }
  uVar6 = 1;
joined_r0x00df6aa4:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar6;
}


