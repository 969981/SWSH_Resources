/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011647d0; name: FUN_011647d0
 */


void FUN_011647d0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x68);
  *param_1 = *(undefined8 *)(lVar2 + 0x68);
  param_1[1] = *(undefined8 *)(lVar2 + 0x70);
  lVar1 = *(long *)(lVar2 + 0x80);
  param_1[2] = *(undefined8 *)(lVar2 + 0x78);
  param_1[3] = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011647f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


