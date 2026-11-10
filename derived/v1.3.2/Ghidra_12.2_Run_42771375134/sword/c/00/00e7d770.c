/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7d770; name: FUN_00e7d770
 */


long FUN_00e7d770(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 *in_x4;
  undefined8 *in_x5;
  undefined8 *in_x6;
  long in_x7;
  ulong *puVar8;
  ushort uVar9;
  char *__s;
  long lVar10;
  undefined8 uVar11;
  
  uVar4 = FUN_00e84680(*in_x4,(int)((ulong)*in_x4 >> 0x20),(int)in_x4[1],*in_x5,
                       (int)((ulong)*in_x5 >> 0x20),(int)in_x5[1],*in_x6,
                       (int)((ulong)*in_x6 >> 0x20),*(undefined8 *)(param_1 + 0x78));
  __s = *(char **)(in_x7 + 8);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  sVar6 = strlen(__s);
  uVar5 = FUN_00daeda0(uVar11,__s,sVar6);
  lVar10 = *(long *)(param_1 + 0x78);
  *(undefined1 *)(lVar10 + 0x46) = 1;
  iVar1 = *(int *)(lVar10 + 0x20);
  iVar2 = *(int *)(lVar10 + 0x30);
  iVar3 = *(int *)(lVar10 + 0x28);
  if (*(char *)(lVar10 + 0x50) != '\0') {
    uVar7 = FUN_00daec30(lVar10,0);
    puVar8 = *(ulong **)(lVar10 + 0x38);
    if ((ulong)(*(long *)(lVar10 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(lVar10,8);
      puVar8 = *(ulong **)(lVar10 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x800000000;
    *(long *)(lVar10 + 0x38) = *(long *)(lVar10 + 0x38) + 8;
    uVar9 = *(ushort *)(lVar10 + 0x44);
    *(int *)(lVar10 + 0x40) = *(int *)(lVar10 + 0x40) + 1;
    if (uVar9 < 9) {
      uVar9 = 8;
    }
    *(ushort *)(lVar10 + 0x44) = uVar9;
  }
  FUN_00daea70(lVar10,6,uVar5);
  FUN_00e84a80(lVar10,4,uVar4);
  uVar7 = FUN_00dae710(lVar10,(iVar1 - iVar2) + iVar3);
  lVar10 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar10 + 0x30) +
         (ulong)(uint)((*(int *)(lVar10 + 0x20) - (int)*(long *)(lVar10 + 0x30)) +
                      *(int *)(lVar10 + 0x28))) - (uVar7 & 0xffffffff);
}


