/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00458360; name: FUN_00458360
 */


int FUN_00458360(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint local_70 [7];
  uint local_54;
  
  local_54 = *(uint *)(param_1 + 0x50);
  puVar9 = (uint *)((long)local_70 - ((ulong)local_54 * 4 + 0xf & 0x7fffffff0));
  local_70[0] = 0x20657563;
  local_70[1] = local_54 * 0x18 | 4;
  iVar11 = 4;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,8);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_54,4);
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar8 = (ulong)uVar2;
  if (uVar2 == 0) {
    iVar5 = 0;
    iVar7 = 0;
  }
  else {
    lVar10 = 0;
    do {
      puVar13 = (uint *)(*(long *)(param_1 + 0x48) + lVar10);
      local_70[0] = *puVar13;
      local_70[1] = puVar13[1];
      local_70[2] = 0x61746164;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = puVar13[1];
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,0x18);
      uVar8 = uVar8 - 1;
      lVar10 = lVar10 + 0x10;
    } while (uVar8 != 0);
    uVar3 = *(uint *)(param_1 + 0x50);
    uVar8 = (ulong)uVar3;
    iVar7 = uVar2 * 0x18;
    if (uVar3 == 0) {
      iVar5 = 0;
      iVar11 = 4;
    }
    else {
      iVar11 = 0;
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
      puVar13 = puVar9;
      do {
        sVar4 = strlen((char *)*puVar12);
        uVar2 = (int)sVar4 + 1;
        uVar8 = uVar8 - 1;
        *puVar13 = uVar2;
        iVar11 = uVar2 + iVar11 + (uVar2 & 1);
        puVar12 = puVar12 + 2;
        puVar13 = puVar13 + 1;
      } while (uVar8 != 0);
      iVar11 = iVar11 + 4;
      iVar5 = uVar3 * 0xc;
    }
  }
  local_70[1] = iVar11 + iVar5;
  local_70[0] = 0x5453494c;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,8);
  local_54 = 0x6c746461;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_54,4);
  uVar8 = (ulong)*(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x50) == 0) {
    iVar11 = 0;
  }
  else {
    lVar10 = 0;
    iVar11 = 0;
    do {
      uVar2 = *puVar9;
      local_70[1] = uVar2 + 4;
      local_70[0] = 0x6c62616c;
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x48) + lVar10);
      local_70[2] = *puVar1;
      uVar6 = *(undefined8 *)(puVar1 + 2);
      local_70[3] = (uint)uVar6;
      local_70[4] = (uint)((ulong)uVar6 >> 0x20);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,0xc);
      iVar5 = iVar11 + uVar2;
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),CONCAT44(local_70[4],local_70[3]),uVar2);
      iVar11 = iVar5 + 0xc;
      if ((uVar2 & 1) != 0) {
        local_54 = local_54 & 0xffffff00;
        (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_54,1);
        iVar11 = iVar5 + 0xd;
      }
      uVar8 = uVar8 - 1;
      lVar10 = lVar10 + 0x10;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
  }
  return iVar7 + 0x18 + iVar11;
}


