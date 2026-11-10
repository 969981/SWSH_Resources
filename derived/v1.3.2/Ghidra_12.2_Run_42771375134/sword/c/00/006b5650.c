/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b5650; name: FUN_006b5650
 */


void FUN_006b5650(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (*(long *)(lVar1 + 0xc0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0xc0) = 0;
  }
  if (*(long *)(lVar1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0xa8) = 0;
  }
  if (*(long *)(lVar1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0x90) = 0;
  }
  FUN_006b5720(lVar1 + 0x58);
  if (*(long *)(lVar1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006b5708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],lVar1,param_2[2],param_2[3]);
  return;
}


