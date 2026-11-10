/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862ae0; name: FUN_00862ae0
 */


undefined8 * FUN_00862ae0(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00862c20(param_1,param_2,*puVar9,puVar9);
  if (puVar9 == puVar6) {
    return puVar9;
  }
  bVar3 = *(byte *)(puVar6 + 4);
  bVar4 = *param_2;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = puVar6[5];
  }
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  if (__n == 0) {
LAB_00862bb4:
    if (uVar2 < uVar1) {
      return puVar9;
    }
    if (__n != 0) {
      pvVar8 = (void *)puVar6[6];
      pbVar7 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pvVar8 = (void *)((long)puVar6 + 0x21);
      }
      if ((bVar4 & 1) == 0) {
        pbVar7 = param_2 + 1;
      }
      iVar5 = memcmp(pvVar8,pbVar7,__n);
      goto joined_r0x00862c0c;
    }
  }
  else {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pvVar8 = (void *)puVar6[6];
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)((long)puVar6 + 0x21);
    }
    iVar5 = memcmp(pbVar7,pvVar8,__n);
    if (iVar5 == 0) goto LAB_00862bb4;
    if (iVar5 < 0) {
      return puVar9;
    }
    iVar5 = memcmp(pvVar8,pbVar7,__n);
joined_r0x00862c0c:
    if (iVar5 != 0) {
      if (iVar5 < 0) {
        return puVar6;
      }
      goto LAB_00862ba0;
    }
  }
  if (uVar1 < uVar2) {
    return puVar6;
  }
LAB_00862ba0:
  if (*(int *)(param_2 + 0x18) < *(int *)(puVar6 + 7)) {
    return puVar9;
  }
  return puVar6;
}


