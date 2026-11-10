/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c50c0; name: FUN_009c50c0
 */


void FUN_009c50c0(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0x4e5c) = 0;
  if (*(char *)((long)param_1 + 0x4e61) == '\0') {
    return;
  }
  FUN_009b2fe0(*param_1);
  return;
}


