/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052cc0; name: FUN_01052cc0
 */


void FUN_01052cc0(long param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x148);
  lVar1 = *(long *)(lVar2 + 400);
  if (lVar1 != 0) {
    memcpy((void *)(lVar1 + 0x60),param_2,0x2c0);
    *(undefined4 *)(*(long *)(lVar2 + 400) + 0xdc) = 0x400ccccd;
  }
  return;
}


