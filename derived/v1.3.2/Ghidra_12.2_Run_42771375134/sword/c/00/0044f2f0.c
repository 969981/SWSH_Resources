/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f2f0; name: FUN_0044f2f0
 */


undefined8 FUN_0044f2f0(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1[0x29] + 0x70);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      *(long **)(lVar2 + 0x10) = param_1;
      param_1[9] = 0;
    }
    else {
      param_1[9] = *(long *)(lVar2 + 0x10);
      *(long **)(lVar2 + 0x10) = param_1;
    }
  }
  lVar2 = param_1[0x29];
  local_28 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_004a4610(param_1,lVar2,&local_28,uVar1 & 1);
  return 1;
}


