/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00791b70; name: FUN_00791b70
 */


void FUN_00791b70(long param_1,undefined8 param_2,ulong param_3,ulong param_4,byte param_5,
                 byte param_6,byte param_7)

{
  FUN_0199cfb0(param_2,param_1 + ((param_3 & 1) * 4 + (ulong)param_5 + (param_4 & 1) * 8 +
                                  (ulong)param_6 * 0x10 + (ulong)param_7 * 2) * 0x1c + 0x7c8);
  return;
}


