/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fafe0; name: FUN_011fafe0
 */


void FUN_011fafe0(long param_1)

{
  if (*(char *)(param_1 + 0x16b) != '\0') {
    *(undefined1 *)(param_1 + 0x16b) = 0;
    if (*(char *)(param_1 + 0x16c) == '\0') {
      if (((*(int *)(param_1 + 0x58) != 4) && (*(long *)(param_1 + 0x140) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x140) + 0x54) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x011fb05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)**(undefined8 **)(param_1 + 0x148))();
        return;
      }
    }
    else {
      FUN_011f9510(*(undefined8 *)PTR_DAT_02710490);
      *(undefined1 *)(param_1 + 0x16c) = 0;
    }
  }
  return;
}


