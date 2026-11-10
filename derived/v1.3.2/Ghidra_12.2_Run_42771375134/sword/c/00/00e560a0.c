/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e560a0; name: FUN_00e560a0
 */


void FUN_00e560a0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)PTR_DAT_02710840 + 0x390;
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  FUN_01023150(lVar1,PTR_DAT_0271fb20,uVar2);
  FUN_01023150(lVar1,PTR_DAT_0271fb28,uVar2);
  FUN_01023150(lVar1,PTR_DAT_0271fb30,uVar2);
  return;
}


