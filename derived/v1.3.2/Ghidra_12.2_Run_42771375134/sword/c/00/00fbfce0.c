/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbfce0; name: FUN_00fbfce0
 */


undefined4
FUN_00fbfce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            byte param_14,undefined4 param_15,undefined4 param_16)

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
  
  *(undefined1 *)(param_7 + 0x46) = 1;
  iVar3 = *(int *)(param_7 + 0x20);
  iVar4 = *(int *)(param_7 + 0x30);
  iVar5 = *(int *)(param_7 + 0x28);
  FUN_00fbff60(param_7,0x20,param_16);
  FUN_00e861f0(param_7,0x1e,param_15);
  FUN_00e861f0(param_7,0x1a,param_13);
  FUN_00dae220(param_6,0,param_7,0x18);
  FUN_00dae220(param_5,0,param_7,0x16);
  FUN_00dae220(param_4,0,param_7,0x14);
  FUN_00dae220(param_3,0,param_7,0x12);
  FUN_00daea70(param_7,0x10,param_12);
  FUN_00daea70(param_7,0xe,param_11);
  FUN_00dae220(param_2,0,param_7,0xc);
  FUN_00dae220(param_1,0,param_7,10);
  FUN_00daea70(param_7,8,param_10);
  FUN_00daea70(param_7,6,param_9);
  FUN_00e84a80(param_7,4,param_8);
  if (((param_14 & 1) == 0) && (*(char *)(param_7 + 0x50) == '\0')) goto LAB_00fbff00;
  if (*(long *)(param_7 + 0x48) == 0) {
    *(undefined8 *)(param_7 + 0x48) = 1;
    lVar7 = *(long *)(param_7 + 0x30);
    if (lVar7 == *(long *)(param_7 + 0x38)) goto LAB_00fbfe80;
  }
  else {
    lVar7 = *(long *)(param_7 + 0x30);
    if (lVar7 == *(long *)(param_7 + 0x38)) {
LAB_00fbfe80:
      FUN_00dae400(param_7,1);
      lVar7 = *(long *)(param_7 + 0x30);
    }
  }
  *(long *)(param_7 + 0x30) = lVar7 + -1;
  *(byte *)(lVar7 + -1) = param_14 & 1;
  lVar7 = *(long *)(param_7 + 0x20);
  lVar2 = *(long *)(param_7 + 0x28);
  lVar1 = *(long *)(param_7 + 0x30);
  puVar8 = *(ulong **)(param_7 + 0x38);
  if ((ulong)(lVar1 - (long)puVar8) < 8) {
    FUN_00dae400(param_7,8);
    puVar8 = *(ulong **)(param_7 + 0x38);
  }
  *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1c00000000;
  *(long *)(param_7 + 0x38) = *(long *)(param_7 + 0x38) + 8;
  uVar9 = *(ushort *)(param_7 + 0x44);
  *(int *)(param_7 + 0x40) = *(int *)(param_7 + 0x40) + 1;
  if (uVar9 < 0x1d) {
    uVar9 = 0x1c;
  }
  *(ushort *)(param_7 + 0x44) = uVar9;
LAB_00fbff00:
  uVar6 = FUN_00dae710(param_7,(iVar3 - iVar4) + iVar5);
  return uVar6;
}


