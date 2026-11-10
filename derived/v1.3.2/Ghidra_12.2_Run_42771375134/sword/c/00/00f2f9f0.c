/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2f9f0; name: FUN_00f2f9f0
 */


undefined4 FUN_00f2f9f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  long local_38;
  
  FUN_00f2cfa0(&local_38);
  if (local_38 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    FUN_00f2cfa0(&local_38);
    lVar2 = *(long *)(local_38 + 0x68);
    fVar3 = (float)FUN_00f39440(lVar2 + 0x10,param_1,param_2);
    if (fVar3 <= *(float *)(lVar2 + 0x4e0)) {
      uVar1 = 0;
    }
    else if (*(float *)(lVar2 + 0x4e4) < fVar3) {
      uVar1 = 3;
      if (fVar3 <= *(float *)(lVar2 + 0x4e8)) {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    }
  }
  return uVar1;
}


