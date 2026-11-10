/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936f90; name: FUN_00936f90
 */


undefined8 FUN_00936f90(long param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar1 = FUN_008ef450(param_2);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00931960(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    uVar1 = FUN_009354a0(uVar2,param_4);
    if ((uVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      local_38 = 0;
      FUN_008ed4b0(param_4,(long)&local_38 + 4,&local_38);
      FUN_00916b10(uVar2,0x48,param_2 & 0xff,param_3,local_38._4_4_,local_38 & 0xffffffff);
      return 1;
    }
  }
  return 0;
}


