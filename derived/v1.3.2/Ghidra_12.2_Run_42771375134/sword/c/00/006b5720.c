/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b5720; name: FUN_006b5720
 */


void FUN_006b5720(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_006b5720(lVar1 + 0x48);
  FUN_006b5720(lVar1 + 0x28);
  lVar2 = *(long *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 8) = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + 0x28) = 0;
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x20) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),lVar2,*(undefined8 *)(lVar1 + 0x18),
               *(undefined8 *)(lVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x006b57c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar1,param_1[2],param_1[3]);
  return;
}


