/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8e70; name: FUN_006e8e70
 */


void FUN_006e8e70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_027155e8;
  FUN_019a5500(param_1 + 0x4218,PTR_DAT_027155e8);
  FUN_019a5500(param_1 + 0x4270,puVar1);
  lVar2 = *(long *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  (**(code **)PTR_DAT_02714a20)(param_1 + 0x1f0);
  lVar2 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e8f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  return;
}


