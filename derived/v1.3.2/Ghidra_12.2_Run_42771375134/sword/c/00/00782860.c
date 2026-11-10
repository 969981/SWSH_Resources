/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00782860; name: FUN_00782860
 */


void FUN_00782860(float param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort *puVar5;
  float fVar6;
  
  piVar4 = (int *)*param_2;
  puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar1 = *puVar5;
  fVar6 = 0.0;
  if ((8 < uVar1) && ((ulong)puVar5[4] != 0)) {
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[4]));
  }
  if (fVar6 <= param_1) {
    fVar6 = 0.0;
    if ((10 < uVar1) && ((ulong)puVar5[5] != 0)) {
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[5]));
    }
    if (fVar6 <= param_1) {
      if ((((uVar1 < 0xd) || ((ulong)puVar5[6] == 0)) ||
          (*(int *)((long)piVar4 + (ulong)puVar5[6]) != 1)) ||
         (((param_3 == 0 || (*(int *)(param_2 + 9) == 3)) ||
          ((*(code **)(param_3 + 0x1a0) == (code *)0x0 ||
           (uVar2 = (**(code **)(param_3 + 0x1a0))(param_3 + 0x1c0,param_2), (uVar2 & 1) != 0))))))
      {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      if (*(int *)(param_2 + 9) == 3) {
        return;
      }
      uVar3 = 1;
    }
    *(undefined4 *)(param_2 + 9) = uVar3;
    return;
  }
  *(undefined4 *)(param_2 + 9) = 0;
  return;
}


