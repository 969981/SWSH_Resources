/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e853e0; name: FUN_00e853e0
 */


undefined4
FUN_00e853e0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,byte param_7,undefined8 param_8,undefined4 param_9
            )

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong *puVar8;
  ushort uVar9;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_00e84810(param_1,0x10,param_8,0);
  FUN_00e84810(param_1,10,param_5,0);
  FUN_00e84810(param_1,8,param_4,0);
  FUN_00e84810(param_1,6,param_3,0);
  FUN_00e861f0(param_1,0x12,param_9);
  FUN_00e861f0(param_1,0xc,param_6);
  FUN_00e84a80(param_1,4,param_2);
  if (((param_7 & 1) == 0) && (*(char *)(param_1 + 0x50) == '\0')) goto LAB_00e85558;
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 1;
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == *(long *)(param_1 + 0x38)) goto LAB_00e854d8;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == *(long *)(param_1 + 0x38)) {
LAB_00e854d8:
      FUN_00dae400(param_1,1);
      lVar7 = *(long *)(param_1 + 0x30);
    }
  }
  *(long *)(param_1 + 0x30) = lVar7 + -1;
  *(byte *)(lVar7 + -1) = param_7 & 1;
  lVar7 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  puVar8 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar1 - (long)puVar8) < 8) {
    FUN_00dae400(param_1,8);
    puVar8 = *(ulong **)(param_1 + 0x38);
  }
  *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0xe00000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  uVar9 = *(ushort *)(param_1 + 0x44);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (uVar9 < 0xf) {
    uVar9 = 0xe;
  }
  *(ushort *)(param_1 + 0x44) = uVar9;
LAB_00e85558:
  uVar6 = FUN_00dae710(param_1,(iVar3 - iVar4) + iVar5);
  return uVar6;
}


