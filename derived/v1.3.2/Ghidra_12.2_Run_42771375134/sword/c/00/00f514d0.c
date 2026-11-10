/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f514d0; name: FUN_00f514d0
 */


void FUN_00f514d0(long param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(char *)(param_1 + 0x44) != '\0') &&
     (lVar1 = *(long *)(param_1 + 0x48), *(char *)(lVar1 + 0x2b0) != '\0')) {
    local_30 = 0;
    local_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_00de73e0(lVar1,lVar1 + 0x210,&local_40,&uStack_38,&local_30,&local_28);
    if (local_28 >> 0xc < 0x4b) {
      FUN_00de7330(*(undefined8 *)(param_1 + 0x48));
    }
  }
  return;
}


