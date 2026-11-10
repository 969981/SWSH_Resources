/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00146420; name: FUN_00146420
 */


void FUN_00146420(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__src;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auStack_90 [40];
  undefined4 local_68;
  
  uVar1 = param_3 + param_2;
  lVar8 = param_1 + (long)param_2 * 0x50;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 1;
  }
  lVar3 = param_1 + (long)((int)uVar1 >> 1) * 0x50;
  lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x21;
  uVar4 = (*(code *)*param_4)(lVar3,lVar8);
  if ((uVar4 & 1) != 0) {
    lVar12 = param_1 + (long)param_2 * 0x50;
    uVar5 = *(undefined8 *)(lVar12 + 8);
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    uVar7 = *(undefined8 *)(lVar12 + 0x18);
    local_68 = *(undefined4 *)(lVar12 + 0x20);
    memcpy((void *)((ulong)auStack_90 | 4),(void *)(lVar12 + 0x28),0x24);
    lVar13 = param_1 + lVar2 * 0x50;
    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar13 + 8);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
    *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar13 + 0x20);
    memcpy((void *)(lVar12 + 0x28),(void *)(lVar13 + 0x28),0x24);
    *(undefined8 *)(lVar13 + 8) = uVar5;
    *(undefined8 *)(lVar13 + 0x10) = uVar6;
    *(undefined8 *)(lVar13 + 0x18) = uVar7;
    *(undefined4 *)(lVar13 + 0x20) = local_68;
    memcpy((void *)(lVar13 + 0x28),(void *)((ulong)auStack_90 | 4),0x24);
  }
  lVar13 = (long)param_3;
  lVar12 = param_1 + (long)param_3 * 0x50;
  uVar4 = (*(code *)*param_4)(lVar12,lVar8);
  if ((uVar4 & 1) != 0) {
    lVar14 = param_1 + (long)param_2 * 0x50;
    uVar5 = *(undefined8 *)(lVar14 + 8);
    uVar6 = *(undefined8 *)(lVar14 + 0x10);
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    local_68 = *(undefined4 *)(lVar14 + 0x20);
    memcpy((void *)((ulong)auStack_90 | 4),(void *)(lVar14 + 0x28),0x24);
    lVar8 = param_1 + lVar13 * 0x50;
    *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(lVar8 + 8);
    *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
    memcpy((void *)(lVar14 + 0x28),(void *)(lVar8 + 0x28),0x24);
    *(undefined8 *)(lVar8 + 8) = uVar5;
    *(undefined8 *)(lVar8 + 0x10) = uVar6;
    *(undefined8 *)(lVar8 + 0x18) = uVar7;
    *(undefined4 *)(lVar8 + 0x20) = local_68;
    memcpy((void *)(lVar8 + 0x28),(void *)((ulong)auStack_90 | 4),0x24);
  }
  uVar4 = (*(code *)*param_4)(lVar12,lVar3);
  if ((uVar4 & 1) == 0) {
    lVar8 = param_1 + lVar2 * 0x50;
    puVar9 = (undefined8 *)(lVar8 + 8);
    puVar15 = (undefined8 *)(lVar8 + 0x10);
    puVar10 = (undefined8 *)(lVar8 + 0x18);
    puVar11 = (undefined4 *)(lVar8 + 0x20);
    __src = (void *)(lVar8 + 0x28);
  }
  else {
    lVar8 = param_1 + lVar2 * 0x50;
    puVar9 = (undefined8 *)(lVar8 + 8);
    uVar5 = *puVar9;
    puVar15 = (undefined8 *)(lVar8 + 0x10);
    uVar6 = *puVar15;
    puVar10 = (undefined8 *)(lVar8 + 0x18);
    uVar7 = *puVar10;
    puVar11 = (undefined4 *)(lVar8 + 0x20);
    local_68 = *puVar11;
    __src = (void *)(lVar8 + 0x28);
    memcpy((void *)((ulong)auStack_90 | 4),__src,0x24);
    lVar8 = param_1 + lVar13 * 0x50;
    *puVar15 = *(undefined8 *)(lVar8 + 0x10);
    *puVar9 = *(undefined8 *)(lVar8 + 8);
    *puVar10 = *(undefined8 *)(lVar8 + 0x18);
    *puVar11 = *(undefined4 *)(lVar8 + 0x20);
    memcpy(__src,(void *)(lVar8 + 0x28),0x24);
    *(undefined8 *)(lVar8 + 8) = uVar5;
    *(undefined8 *)(lVar8 + 0x10) = uVar6;
    *(undefined8 *)(lVar8 + 0x18) = uVar7;
    *(undefined4 *)(lVar8 + 0x20) = local_68;
    memcpy((void *)(lVar8 + 0x28),(void *)((ulong)auStack_90 | 4),0x24);
  }
  uVar5 = *puVar10;
  uVar6 = *puVar9;
  uVar7 = *puVar15;
  local_68 = *puVar11;
  memcpy((void *)((ulong)auStack_90 | 4),__src,0x24);
  param_1 = param_1 + lVar13 * 0x50;
  puVar9[1] = *(undefined8 *)(param_1 + -0x40);
  *puVar9 = *(undefined8 *)(param_1 + -0x48);
  *puVar10 = *(undefined8 *)(param_1 + -0x38);
  *puVar11 = *(undefined4 *)(param_1 + -0x30);
  memcpy(__src,(void *)(param_1 + -0x28),0x24);
  *(undefined8 *)(param_1 + -0x48) = uVar6;
  *(undefined8 *)(param_1 + -0x40) = uVar7;
  *(undefined8 *)(param_1 + -0x38) = uVar5;
  *(undefined4 *)(param_1 + -0x30) = local_68;
  memcpy((void *)(param_1 + -0x28),(void *)((ulong)auStack_90 | 4),0x24);
  return;
}


