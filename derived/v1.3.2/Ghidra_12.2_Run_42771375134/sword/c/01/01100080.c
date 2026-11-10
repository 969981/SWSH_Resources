/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01100080; name: FUN_01100080
 */


void FUN_01100080(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_01562e70();
    uVar1 = FUN_01562f10(*(undefined8 *)(param_1 + 0x60));
    if ((uVar1 & 1) != 0) {
      (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
      lVar2 = *(long *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (lVar2 != 0) {
        FUN_01562e20(lVar2);
                    /* WARNING: Could not recover jumptable at 0x011000e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
                  (*(long **)(param_1 + 0x68),lVar2,*(undefined8 *)(param_1 + 0x70),
                   *(undefined8 *)(param_1 + 0x78));
        return;
      }
    }
  }
  return;
}


