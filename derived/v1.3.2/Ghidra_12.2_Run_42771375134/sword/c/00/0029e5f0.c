/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029e5f0; name: FUN_0029e5f0
 */


long * FUN_0029e5f0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  *(undefined2 *)((long)plVar7 + 10) = 2;
  *(undefined4 *)(plVar7 + 3) = 1;
  puVar1 = PTR_DAT_02711f80 + 0x10;
  plVar7[2] = (long)(PTR_DAT_02711f80 + 0xb8);
  uVar4 = *(uint *)(plVar7 + 0xd);
  *plVar7 = (long)puVar1;
  *(uint *)(plVar7 + 0xd) = uVar4 | 0x80000000;
  *param_1 = plVar7 + 0x15;
  uVar5 = *(ushort *)((long)plVar7 + 0x44);
  iVar3 = 0;
  if ((short)uVar5 < 0) {
    iVar3 = (uVar5 & 0x7fff) << 2;
  }
  uVar4 = (uVar4 & 0x7fffffff) + (uint)*(byte *)((long)plVar7 + 0x47) * 0x14 +
          (uint)*(byte *)((long)plVar7 + 0x46) * 0xf + (uVar5 & 0x7fff) * 2 + iVar3;
  iVar3 = 0;
  if ((uVar4 & 3) != 0) {
    iVar3 = 4 - (uVar4 & 3);
  }
  uVar6 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
  lVar2 = uVar6 + (iVar3 + uVar4);
  *(long *)(param_2 + 8) = lVar2;
  plVar7[9] = uVar6;
  if (plVar7[0xe] != 0) {
    uVar6 = lVar2 + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar6 + 0x30;
    plVar7[0xe] = uVar6;
    FUN_0029f4f0();
    plVar7[10] = plVar7[0xe];
  }
  return plVar7;
}


