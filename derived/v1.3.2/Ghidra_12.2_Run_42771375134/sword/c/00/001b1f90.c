/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b1f90; name: FUN_001b1f90
 */


void FUN_001b1f90(undefined4 *param_1)

{
  long *plVar1;
  void *__s;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
                    /* try { // try from 001b1fa8 to 001b1fcf has its CatchHandler @ 001b2004 */
  plVar1 = (long *)FUN_00400d30();
  __s = (void *)(**(code **)(*plVar1 + 0x10))
                          (plVar1,0x400,"NonTrackedAlloc","./../../PhysX/src/NpMaterialManager.h",
                           0x2e);
  *(void **)(param_1 + 6) = __s;
  param_1[8] = 0x80;
                    /* try { // try from 001b1fdc to 001b1fe7 has its CatchHandler @ 001b1ff4 */
                    /* WARNING: Subroutine does not return */
  memset(__s,0,0x400);
}


