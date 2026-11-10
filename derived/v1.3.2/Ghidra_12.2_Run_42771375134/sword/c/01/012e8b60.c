/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8b60; name: FUN_012e8b60
 */


void FUN_012e8b60(long param_1)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_1 + 0x838) != 0) && (uVar1 = FUN_01314dd0(), (uVar1 & 1) != 0)) &&
     (*(char *)(param_1 + 0x841) != '\0')) {
    local_30 = 0x6fbb7f0511e358c8;
    uStack_28 = 0;
    FUN_0130fad0(param_1,&local_30,0);
  }
  return;
}


