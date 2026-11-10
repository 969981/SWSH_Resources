/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df72c0; name: FUN_00df72c0
 */


void FUN_00df72c0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x290);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01503010(lVar3,0);
  iVar2 = FUN_01503010(lVar3,1);
  if (iVar1 < 3 && iVar2 < 3) {
    *param_1 = 0x12aac60220a85622;
    param_1[1] = "Play_bgm_or_vs_vs22";
    param_1[2] = 0x13;
    param_1[3] = 0;
  }
  else {
    FUN_0103e8a0(*(undefined8 *)(param_2 + 0x138));
    FUN_0103eaa0(param_1,*(undefined8 *)(param_2 + 0x138));
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00df7354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


