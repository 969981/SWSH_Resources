/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2f8f0; name: FUN_00f2f8f0
 */


int FUN_00f2f8f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  long local_38;
  
  FUN_00f2cfa0(&local_38);
  iVar2 = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    FUN_00f2cfa0(&local_38);
    uVar1 = *(uint *)(*(long *)(local_38 + 0x68) + 0x760);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_00f2cfa0(&local_38);
    uVar4 = *(undefined4 *)(*(long *)(local_38 + 0x68) + 0x75c);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    fVar5 = (float)NEON_ucvtf(uVar4);
    FUN_00f2cfa0(&local_38);
    lVar3 = *(long *)(local_38 + 0x68);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    iVar2 = (int)(*(float *)(lVar3 + 0x4f4) * fVar5 +
                 *(float *)(lVar3 + 0x4f0) * (float)uVar1 +
                 (float)(uint)(int)(*(float *)(lVar3 + 0x4ec) * (float)param_1));
  }
  return iVar2;
}


