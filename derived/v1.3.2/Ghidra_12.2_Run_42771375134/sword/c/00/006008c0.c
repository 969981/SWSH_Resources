/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006008c0; name: FUN_006008c0
 */


void FUN_006008c0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x1c0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    FUN_0060b640(lVar1,*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    FUN_005c47b0(param_1 + 0x20,&DAT_01d38550);
    *(undefined8 *)(param_1 + 0x55) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}


