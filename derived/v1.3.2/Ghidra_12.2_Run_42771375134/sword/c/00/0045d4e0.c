/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045d4e0; name: FUN_0045d4e0
 */


void FUN_0045d4e0(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  
  FUN_0048b110();
  puVar3 = PTR_DAT_02713078;
  *param_1 = (long)(PTR_DAT_02713078 + 0x10);
  param_1[2] = (long)(puVar3 + 0xf0);
  param_1[3] = (long)(puVar3 + 0x108);
  lVar4 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  param_1[0x58] = lVar4;
  if (lVar4 != 0) {
    FUN_0045b670();
  }
  *(undefined4 *)((long)param_1 + 0x30c) = 0;
  bVar2 = *(byte *)(param_1 + 100);
  plVar5 = *(long **)(param_2 + 8);
  param_1[0x62] = (long)plVar5;
  param_1[99] = 0;
  *(byte *)(param_1 + 100) = bVar2 & 0xf0;
  *(byte *)(param_1 + 100) = bVar2 & 0x80 | (*(byte *)(param_2 + 0x188) >> 1 & 1) << 4;
  (**(code **)(*plVar5 + 0x10))();
  *(undefined4 *)((long)param_1 + 0x284) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 0x20);
  if (param_1[0x3c] == 0) {
    param_1[0x3c] = **(long **)(param_2 + 0x88);
    **(undefined8 **)(param_2 + 0x88) = 0;
    lVar4 = param_1[0x3d];
  }
  else {
    lVar4 = param_1[0x3d];
  }
  if (lVar4 == 0) {
    param_1[0x3d] = *(long *)(*(long *)(param_2 + 0x88) + 8);
    *(undefined8 *)(*(long *)(param_2 + 0x88) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x59) = 0;
  memcpy(param_1 + 0x59,(void *)(param_2 + 0x38),0x44);
  uVar1 = *(uint *)(param_2 + 0x7c);
  iVar6 = (int)param_1[0x59];
  *(uint *)((long)param_1 + 0x30c) = uVar1;
  if (iVar6 != 0) {
    uVar7 = (ulong)(iVar6 - 1);
    do {
      if (((uint)uVar7 < 0x20) && ((1L << (uVar7 & 0x3f) & (ulong)uVar1) != 0)) {
        return;
      }
      *(uint *)(param_1 + 0x59) = (uint)uVar7;
      uVar7 = uVar7 - 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


