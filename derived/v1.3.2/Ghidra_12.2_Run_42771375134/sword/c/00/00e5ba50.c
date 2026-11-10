/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5ba50; name: FUN_00e5ba50
 */


byte FUN_00e5ba50(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar9 = FUN_00dc5950(param_1 + 0x3b0);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xc50) == 0) {
    return 0;
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0xc50) + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
  puVar12 = puVar11 + -10;
  (**(code **)*puVar11)(puVar11);
  uVar9 = FUN_00e5d3d0();
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  lVar10 = FUN_00fa42c0();
  if (lVar10 == 0) {
    return 1;
  }
  iVar6 = FUN_00eaa240(puVar12);
  if ((iVar6 == 0x365) &&
     (uVar1 = *(uint *)(puVar11 + 0xb2), uVar7 = FUN_00878dd0(lVar10), uVar1 != (uVar7 & 0xff))) {
    return 1;
  }
  iVar6 = FUN_00eaa240(puVar12);
  iVar8 = FUN_008783b0(lVar10);
  if (iVar6 != iVar8) {
    return 1;
  }
  sVar4 = FUN_00eaa250(puVar12);
  sVar5 = FUN_008783c0(lVar10);
  if (sVar4 != sVar5) {
    return 1;
  }
  iVar6 = FUN_0087ccf0(lVar10);
  if ((iVar6 == 2) ||
     (iVar6 = *(int *)((long)puVar11 + 0x584), iVar8 = FUN_0087ccf0(lVar10), iVar6 == iVar8)) {
    cVar2 = *(char *)(puVar11 + 0xb1);
    bVar3 = FUN_0087ea90(lVar10);
    return (cVar2 != '\0' ^ bVar3) & 1;
  }
  return 1;
}


