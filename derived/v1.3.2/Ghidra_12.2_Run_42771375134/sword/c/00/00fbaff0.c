/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbaff0; name: FUN_00fbaff0
 */


long FUN_00fbaff0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  ulong uVar15;
  
  uVar4 = FUN_00e84680(0,0,0,0,0,0,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x40),
                       *(undefined8 *)(param_1 + 0x78),0,0,*(undefined8 *)(param_2 + 0x80));
  pcVar13 = *(char **)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  sVar9 = strlen(pcVar13);
  uVar5 = FUN_00daeda0(uVar12,pcVar13,sVar9);
  pcVar13 = *(char **)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  sVar9 = strlen(pcVar13);
  uVar6 = FUN_00daeda0(uVar12,pcVar13,sVar9);
  auVar14 = FUN_00ac7ad0(param_2 + 0x70);
  uVar10 = auVar14._0_8_;
  uVar15 = auVar14._8_8_ & 0xffffffff;
  uVar7 = FUN_00e85210(0,0,0,*(undefined4 *)(param_2 + 0x48),uVar10,uVar10 >> 0x20,uVar15,
                       *(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x44));
  uVar8 = FUN_00e85210(0,0,0,*(undefined4 *)(param_2 + 0x4c),uVar10,uVar10 >> 0x20,uVar15,
                       *(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x44));
  uVar4 = FUN_00fbfce0(0,0,*(ulong *)(param_2 + 0x60),*(ulong *)(param_2 + 0x60) >> 0x20,
                       *(ulong *)(param_2 + 0x68) & 0xffffffff,*(undefined4 *)(param_2 + 0x4c),
                       *(undefined8 *)(param_1 + 0x78),uVar4,uVar5,uVar6,0,0,uVar7,0,uVar8);
  lVar11 = *(long *)(param_1 + 0x78);
  iVar1 = *(int *)(lVar11 + 0x20);
  iVar2 = *(int *)(lVar11 + 0x30);
  iVar3 = *(int *)(lVar11 + 0x28);
  *(undefined1 *)(lVar11 + 0x46) = 1;
  FUN_00fc0120(lVar11,4,uVar4);
  uVar4 = FUN_00dae710(lVar11,(iVar1 - iVar2) + iVar3);
  lVar11 = *(long *)(param_1 + 0x78);
  iVar1 = *(int *)(lVar11 + 0x20);
  iVar2 = *(int *)(lVar11 + 0x30);
  iVar3 = *(int *)(lVar11 + 0x28);
  *(undefined1 *)(lVar11 + 0x46) = 1;
  FUN_00fc02e0(lVar11,4,uVar4);
  uVar10 = FUN_00dae710(lVar11,(iVar1 - iVar2) + iVar3);
  lVar11 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar11 + 0x30) +
         (ulong)(uint)((*(int *)(lVar11 + 0x20) - (int)*(long *)(lVar11 + 0x30)) +
                      *(int *)(lVar11 + 0x28))) - (uVar10 & 0xffffffff);
}


