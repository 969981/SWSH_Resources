/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00661f00; name: FUN_00661f00
 */


void FUN_00661f00(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)PTR_DAT_02714958)(*(undefined8 *)(param_1 + 0x328));
  if (lVar2 == 0) {
    return;
  }
  uVar3 = (**(code **)PTR_DAT_02714960)(*(undefined8 *)(param_1 + 0x328));
  iVar1 = (**(code **)PTR_DAT_02714968)(*(undefined8 *)(param_1 + 0x328));
                    /* WARNING: Could not recover jumptable at 0x00661f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_02714978)(lVar2,uVar3,(long)iVar1);
  return;
}


