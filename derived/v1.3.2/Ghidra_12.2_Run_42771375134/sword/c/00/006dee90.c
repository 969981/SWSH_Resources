/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dee90; name: FUN_006dee90
 */


void FUN_006dee90(long *param_1)

{
  FUN_006cefd0();
  FUN_006cf030();
  (**(code **)(*param_1 + 0x48))(param_1);
  *(undefined1 *)((long)param_1 + 0x149) = 1;
  return;
}


