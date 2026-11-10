/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f13c0; name: FUN_010f13c0
 */


void FUN_010f13c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_010f1490();
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x68) != '\0')) {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x210);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar1 = param_1 + 0x70;
    if (*(int *)(param_1 + 100) - 1U < 4) {
      FUN_01549c70(lVar1);
      FUN_015480c0(lVar2,lVar1);
    }
    else {
      if (*(int *)(param_1 + 100) == 0) {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xd8);
      }
      FUN_015480c0(lVar2,lVar1);
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010f1470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      return;
    }
  }
  return;
}


