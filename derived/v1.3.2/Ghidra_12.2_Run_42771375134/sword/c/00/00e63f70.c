/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e63f70; name: FUN_00e63f70
 */


void FUN_00e63f70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x188))
                    (*(long **)(param_1 + 0x70),PTR_DAT_0271fcb8,0);
  if (iVar1 == 2) {
    uVar2 = 0x13;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x188))
                      (*(long **)(param_1 + 0x70),PTR_DAT_0271fcb8,0);
    if (iVar1 != 1) goto LAB_00e63fdc;
    uVar2 = 4;
  }
  FUN_00e646a0(param_1,uVar2);
LAB_00e63fdc:
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}


