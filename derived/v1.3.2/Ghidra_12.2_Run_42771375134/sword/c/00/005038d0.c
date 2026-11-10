/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005038d0; name: FUN_005038d0
 */


undefined8
FUN_005038d0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((*(byte *)(param_1 + 0x48) >> 1 & 1) != 0) {
    return 1;
  }
  if ((param_5 & 1) == 0) {
    pcVar2 = *(code **)(*param_2 + 0x30);
  }
  else {
    pcVar2 = *(code **)(*param_2 + 0x38);
  }
  uVar1 = (*pcVar2)(param_2,param_3,param_4,param_1 + 8);
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
  return uVar1;
}


