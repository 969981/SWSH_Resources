/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffe80; name: FUN_003ffe80
 */


void FUN_003ffe80(ThreadType *param_1)

{
  long lVar1;
  
  if ((*(int *)(param_1 + 0x1d0) != 0) && (*(long *)(param_1 + 0x1c0) != 0)) {
    nn::os::DestroyThread(param_1);
    lVar1 = *(long *)(param_1 + 0x1c0);
    if (lVar1 != 0) {
                    /* try { // try from 003ffeb8 to 003ffebb has its CatchHandler @ 003ffec8 */
      free((void *)(lVar1 - *(long *)(lVar1 + -8)));
    }
  }
  return;
}


