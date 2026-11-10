/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790fb0; name: FUN_00790fb0
 */


void FUN_00790fb0(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 0x3f) {
    if (*(char *)(param_2 + 0x7b8) != '\0') {
      param_1 = 0;
    }
  }
  FUN_019f3d60(param_1,*(undefined8 *)(param_2 + 0x78),param_3,2);
  return;
}


