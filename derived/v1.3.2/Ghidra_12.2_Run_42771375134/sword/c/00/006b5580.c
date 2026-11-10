/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b5580; name: FUN_006b5580
 */


void FUN_006b5580(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_2 + 0x48) + 0x18))
              (*(long **)(param_2 + 0x48),puVar1,*(undefined8 *)(param_2 + 0x50),
               *(undefined8 *)(param_2 + 0x58));
  }
  lVar2 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x20) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    (**(code **)(**(long **)(param_2 + 0x28) + 0x18))
              (*(long **)(param_2 + 0x28),lVar2,*(undefined8 *)(param_2 + 0x30),
               *(undefined8 *)(param_2 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x006b5640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


