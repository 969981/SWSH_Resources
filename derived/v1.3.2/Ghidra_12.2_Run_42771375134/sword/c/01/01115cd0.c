/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01115cd0; name: FUN_01115cd0
 */


void FUN_01115cd0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x02') {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(short *)(param_1 + 0x8a) != 0) {
      FUN_01520760(lVar1,*(undefined2 *)(param_1 + 0x88),*(short *)(param_1 + 0x8a),1);
    }
    if (*(short *)(param_1 + 0x8e) != 0) {
      FUN_01520760(lVar1,*(undefined2 *)(param_1 + 0x8c),*(short *)(param_1 + 0x8e),1);
    }
    if (*(short *)(param_1 + 0x92) != 0) {
      FUN_01520760(lVar1,*(undefined2 *)(param_1 + 0x90),*(short *)(param_1 + 0x92),1);
    }
    if (*(short *)(param_1 + 0x96) != 0) {
      FUN_01520760(lVar1,*(undefined2 *)(param_1 + 0x94),*(short *)(param_1 + 0x96),1);
    }
    if (*(short *)(param_1 + 0x9a) != 0) {
      FUN_01520760(lVar1,*(undefined2 *)(param_1 + 0x98),*(short *)(param_1 + 0x9a),1);
    }
    if (*(short *)(param_1 + 0x9e) != 0) {
      FUN_01520760(lVar1,*(undefined2 *)(param_1 + 0x9c),*(short *)(param_1 + 0x9e),1);
    }
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01115db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      return;
    }
  }
  return;
}


