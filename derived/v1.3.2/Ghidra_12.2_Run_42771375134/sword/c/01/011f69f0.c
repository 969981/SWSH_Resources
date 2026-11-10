/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f69f0; name: FUN_011f69f0
 */


void FUN_011f69f0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *(long *)PTR_DAT_02716b80;
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    local_28 = 0x163;
    FUN_007c2cd0(lVar2,uVar1,&local_28);
  }
  lVar2 = *(long *)PTR_DAT_027104b0;
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_007b5b80(lVar2,uVar1,0x163);
  }
  return;
}


