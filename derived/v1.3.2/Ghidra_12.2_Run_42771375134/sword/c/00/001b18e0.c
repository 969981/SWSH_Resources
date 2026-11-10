/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b18e0; name: FUN_001b18e0
 */


void FUN_001b18e0(long param_1,long *param_2)

{
  uint uVar1;
  long *local_28;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xa0));
                    /* try { // try from 001b1904 to 001b1907 has its CatchHandler @ 001b197c */
  FUN_003ff470(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = param_2[2];
  uVar1 = *(uint *)(param_1 + 0x58);
  local_28 = param_2;
  if (uVar1 < (*(uint *)(param_1 + 0x5c) & 0x7fffffff)) {
    *(long **)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 8) = param_2;
    *(uint *)(param_1 + 0x58) = uVar1 + 1;
  }
  else {
                    /* try { // try from 001b193c to 001b1943 has its CatchHandler @ 001b1974 */
    FUN_001901d0(param_1 + 0x28,&local_28);
  }
                    /* try { // try from 001b194c to 001b1953 has its CatchHandler @ 001b197c */
  (**(code **)(*param_2 + 0x20))(param_2);
  *(undefined1 *)(param_1 + 0x98) = 1;
                    /* try { // try from 001b1960 to 001b1963 has its CatchHandler @ 001b1978 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xa0));
  return;
}


