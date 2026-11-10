/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c52f0; name: FUN_009c52f0
 */


void FUN_009c52f0(long *param_1,undefined4 param_2)

{
  if (*param_1 == 0) {
    *(char *)((long)param_1 + 0x4e62) = (char)param_2;
    return;
  }
  FUN_009b3110(*param_1,param_2,*(undefined1 *)((long)param_1 + 0x4e59));
  return;
}


