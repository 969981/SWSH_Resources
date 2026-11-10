/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00752e20; name: FUN_00752e20
 */


void FUN_00752e20(undefined1 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  bool bVar4;
  int *piVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_2 + 0x170) == '\0') {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)((long)*(uint **)(param_2 + 400) + (ulong)**(uint **)(param_2 + 400));
  }
  *(undefined8 *)(param_1 + 4) = 2;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar6 = (ushort *)((long)piVar5 - (long)*piVar5);
  uVar3 = *puVar6;
  bVar4 = false;
  if ((ulong)puVar6[2] != 0) {
    bVar4 = *(char *)((long)piVar5 + (ulong)puVar6[2]) != '\0';
  }
  *param_1 = bVar4;
  uVar8 = 0;
  if ((ulong)puVar6[3] != 0) {
    uVar8 = *(undefined4 *)((long)piVar5 + (ulong)puVar6[3]);
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 4) = uVar8;
  uVar8 = 0;
  if ((ulong)puVar6[4] != 0) {
    uVar8 = *(undefined4 *)((long)piVar5 + (ulong)puVar6[4]);
  }
  *(undefined4 *)(param_1 + 8) = uVar8;
  uVar8 = 0;
  if ((ulong)puVar6[5] != 0) {
    uVar8 = *(undefined4 *)((long)piVar5 + (ulong)puVar6[5]);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  uVar8 = 0;
  if ((ulong)puVar6[6] != 0) {
    uVar8 = *(undefined4 *)((long)piVar5 + (ulong)puVar6[6]);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  puVar1 = (undefined4 *)((long)piVar5 + (ulong)puVar6[7]);
  uVar8 = *puVar1;
  puVar2 = (undefined4 *)0x0;
  if (puVar6[7] != 0) {
    puVar2 = puVar1;
  }
  uVar9 = puVar2[1];
  *(ulong *)(param_1 + 0x28) = (ulong)(uint)puVar1[2];
  *(ulong *)(param_1 + 0x20) = CONCAT44(uVar9,uVar8);
  if ((0x10 < uVar3) && ((ulong)puVar6[8] != 0)) {
    uVar7 = *(undefined4 *)((long)piVar5 + (ulong)puVar6[8]);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  return;
}


