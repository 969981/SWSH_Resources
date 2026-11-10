/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083bbc0; name: FUN_0083bbc0
 */


undefined8 FUN_0083bbc0(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_008344d0(*(long *)(param_1 + 8),param_3,"ReleaseMessage",
                 "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) == 3) {
    FUN_008344d0(*(undefined8 *)(param_1 + 8),param_3,"ReleaseMessage",
                 "Field is repeated; the method requires a singular field.");
  }
  if (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_3 + 0x3c) * 4) == 10) {
    if (param_4 == 0) goto LAB_0083bc94;
LAB_0083bc4c:
    cVar2 = *(char *)(param_3 + 0x44);
  }
  else {
    FUN_00836040(*(undefined8 *)(param_1 + 8),param_3,"ReleaseMessage",10);
    if (param_4 != 0) goto LAB_0083bc4c;
LAB_0083bc94:
    param_4 = *(long *)(param_1 + 0x50);
    cVar2 = *(char *)(param_3 + 0x44);
  }
  if (cVar2 != '\0') {
    uVar4 = FUN_0083f700(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    uVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
    uVar1 = uVar3 + 0x1f;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    lVar8 = param_2 + *(int *)(param_1 + 0x28);
    uVar7 = -(ulong)((uint)((int)uVar1 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)((int)uVar1 >> 5) << 2;
    *(uint *)(lVar8 + uVar7) = *(uint *)(lVar8 + uVar7) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar8 = *(long *)(param_3 + 0x58);
  if (lVar8 != 0) {
    lVar9 = lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x40) >> 4;
    uVar7 = lVar9 * -0x5555555555555555;
    lVar8 = param_2 + *(int *)(param_1 + 0x2c);
    if (*(int *)(lVar8 + (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                         lVar9 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      return 0;
    }
    *(undefined4 *)(lVar8 + (long)(int)uVar7 * 4) = 0;
    lVar8 = *(long *)(param_3 + 0x58);
    if (lVar8 != 0) {
      iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
              (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x40)) >> 4) * -0x55555555;
      goto LAB_0083bdc4;
    }
  }
  if (*(char *)(param_3 + 0x44) == '\0') {
    plVar6 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
  }
  else if (*(long *)(param_3 + 0x60) == 0) {
    plVar6 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
  }
  else {
    plVar6 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
  }
  iVar5 = (int)((ulong)(param_3 - *plVar6) >> 4) * 0x38e38e39;
LAB_0083bdc4:
  lVar8 = (long)*(int *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 4);
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  *(undefined8 *)(param_2 + lVar8) = 0;
  return uVar4;
}


