/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cc930; name: FUN_001cc930
 */


void FUN_001cc930(long param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 local_248 [512];
  undefined1 local_48;
  undefined1 *local_40;
  ulong local_38;
  
  if (*(uint *)(param_2 + 8) >> 0x1e == 2) {
    local_38 = 0x4000000000;
    local_48 = 1;
    local_40 = local_248;
    if ((param_3 & 1) == 0) {
                    /* try { // try from 001cca00 to 001cca0b has its CatchHandler @ 001cca2c */
      FUN_003e7e60(param_1 + 0x10,
                   *(long *)(PTR_DAT_02711068 +
                            (ulong)(*(uint *)(param_2 + 8) >> 0x18 & 0xf) * 8 + 0x30) + param_2,
                   local_248,1);
    }
    else {
                    /* try { // try from 001cc98c to 001cc997 has its CatchHandler @ 001cca2c */
      FUN_003e8210(param_1 + 0x10,
                   *(long *)(PTR_DAT_02711068 +
                            (ulong)(*(uint *)(param_2 + 8) >> 0x18 & 0xf) * 8 + 0x30) + param_2,
                   local_248,1);
    }
    puVar1 = local_40;
    if ((int)local_38 != 0) {
      uVar3 = 0;
      do {
                    /* try { // try from 001cc9b0 to 001cc9b3 has its CatchHandler @ 001cca3c */
        FUN_00206d50(*(long *)(puVar1 + uVar3 * 8) + -0x20);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (local_38 & 0xffffffff));
    }
    puVar1 = local_40;
    if ((((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) &&
        (local_248 != local_40)) && (local_40 != (undefined1 *)0x0)) {
                    /* try { // try from 001cc9e8 to 001cc9fb has its CatchHandler @ 001cca28 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
    }
  }
  return;
}


