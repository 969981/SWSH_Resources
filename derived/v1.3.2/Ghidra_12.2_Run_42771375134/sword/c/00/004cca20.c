/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cca20; name: FUN_004cca20
 */


undefined8 FUN_004cca20(long param_1,long param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int local_30 [2];
  undefined4 local_28;
  
  uVar3 = *(uint *)(param_1 + 0x74);
  bVar2 = *(byte *)(param_1 + 0x82) & 0xf0 | *(byte *)(param_1 + 0x82) & 7 | (param_3 & 1) << 3;
  uVar1 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x68) - uVar3;
  *(uint *)(param_1 + 0x6c) = uVar3 + *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = uVar1;
  uVar4 = *(ushort *)(param_1 + 0x54);
  *(ulong *)(param_1 + 0x60) = param_2 + (ulong)uVar3;
  *(int *)(param_1 + 0x68) = iVar5;
  *(byte *)(param_1 + 0x82) = bVar2;
  if ((uVar4 == 0) || ((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x80) != 1)) {
    uVar3 = *(uint *)(param_1 + 0x7c);
  }
  else {
    uVar3 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
  }
  if (uVar1 < uVar3) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    *(uint *)(param_1 + 0x68) = (iVar5 - uVar1) + uVar3;
    if ((uVar4 == 0) || ((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x80) != 1)) {
      iVar5 = *(int *)(param_1 + 0x78);
      iVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x78))
                        (*(long **)(param_1 + 0x58),iVar5,0,local_30);
      if (iVar6 != 1) {
        return 2;
      }
      *(int *)(param_1 + 0x70) = local_30[0];
      *(int *)(param_1 + 0x74) = iVar5 - local_30[0];
      uVar4 = *(short *)(param_1 + 0x80) + 1;
      *(ushort *)(param_1 + 0x80) = uVar4;
      if ((*(ushort *)(param_1 + 0x54) != 0) &&
         ((uint)*(ushort *)(param_1 + 0x54) - (uint)uVar4 == 1)) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),local_30);
        local_28 = 0;
        (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_30);
      }
    }
    else {
      *(byte *)(param_1 + 0x82) = bVar2 | 1;
    }
  }
  return 1;
}


