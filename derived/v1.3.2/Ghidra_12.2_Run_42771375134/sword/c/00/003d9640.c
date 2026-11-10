/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9640; name: FUN_003d9640
 */


void FUN_003d9640(long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_003d9990(lVar2);
  FUN_003e7a10(*(undefined8 *)(lVar2 + 0x48),uVar1,param_3 & 1);
  return;
}


