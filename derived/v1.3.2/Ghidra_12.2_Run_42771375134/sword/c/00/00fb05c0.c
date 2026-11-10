/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb05c0; name: FUN_00fb05c0
 */


undefined8
FUN_00fb05c0(undefined4 param_1,long param_2,int param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 param_7,byte param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_58;
  
  if ((*(char *)(param_2 + 0xc80) == '\0') || (FUN_00fb06b0(&local_58), local_58 == 0)) {
    return 0;
  }
  *(byte *)(local_58 + 0x1d4) = param_8 & 1;
  if (10 < param_3) {
    param_3 = 0;
  }
  FUN_00fb0930(local_58,param_4,param_7);
  uVar1 = *param_5;
  *(undefined8 *)(local_58 + 0x1b8) = param_5[1];
  *(undefined8 *)(local_58 + 0x1b0) = uVar1;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined4 *)(local_58 + 0x1d0) = param_1;
  *(undefined8 *)(local_58 + 0x1c8) = uVar2;
  *(undefined8 *)(local_58 + 0x1c0) = uVar1;
  FUN_00fb0cb0(local_58);
  FUN_00fb1090(local_58,param_2 + (long)param_3 * 0x110 + 0x50);
  FUN_00fb1040(local_58,1);
  (**(code **)(*(long *)(local_58 + 0x48) + 0x18))((long *)(local_58 + 0x48));
  return 1;
}


