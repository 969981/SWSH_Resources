/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cde20; name: FUN_009cde20
 */


undefined8 FUN_009cde20(long param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 < 0x11) && (*(int *)(param_1 + 0x3458) != 0)) {
    memcpy(param_2,(void *)(param_1 + 0x345c),(ulong)param_3 << 2);
    uVar1 = 1;
  }
  return uVar1;
}


