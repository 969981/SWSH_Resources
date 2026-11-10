/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00daef50; name: FUN_00daef50
 */


undefined4
FUN_00daef50(long param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5,
            undefined4 param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ushort uVar10;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_00daf120(param_1,0xc,param_6);
  if ((param_4 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_1,param_4);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x800000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  FUN_00daea70(param_1,6,param_3);
  FUN_00daea70(param_1,4,param_2);
  if ((param_5 == '\0') && (*(char *)(param_1 + 0x50) == '\0')) goto LAB_00daf0d8;
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 1;
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 == *(long *)(param_1 + 0x38)) goto LAB_00daf058;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 == *(long *)(param_1 + 0x38)) {
LAB_00daf058:
      FUN_00dae400(param_1,1);
      lVar9 = *(long *)(param_1 + 0x30);
    }
  }
  *(long *)(param_1 + 0x30) = lVar9 + -1;
  *(char *)(lVar9 + -1) = param_5;
  lVar9 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  puVar8 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar1 - (long)puVar8) < 8) {
    FUN_00dae400(param_1,8);
    puVar8 = *(ulong **)(param_1 + 0x38);
  }
  *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0xa00000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  uVar10 = *(ushort *)(param_1 + 0x44);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (uVar10 < 0xb) {
    uVar10 = 10;
  }
  *(ushort *)(param_1 + 0x44) = uVar10;
LAB_00daf0d8:
  uVar6 = FUN_00dae710(param_1,(iVar3 - iVar4) + iVar5);
  return uVar6;
}


