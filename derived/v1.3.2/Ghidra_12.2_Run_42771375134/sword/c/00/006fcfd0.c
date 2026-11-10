/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fcfd0; name: FUN_006fcfd0
 */


undefined8 FUN_006fcfd0(long param_1,char *param_2)

{
  int *piVar1;
  size_t __n;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x198) + 0x78);
  lVar9 = *(long *)(lVar8 + 0x38);
  if (param_2 == (char *)0x0) {
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(param_2);
  }
  uVar6 = (ulong)*(ushort *)(lVar9 + 0xc);
  puVar10 = (uint *)((int *)(lVar9 + 8) + uVar6 * 4);
  uVar3 = *puVar10;
  if (*(int *)(lVar9 + 8) < (int)uVar3) {
    do {
      uVar7 = (long)((ulong)uVar3 << 0x20) >> 0x23;
      if (uVar7 < sVar5) {
        uVar7 = (ulong)((byte)param_2[sVar5 + ~uVar7] >> ((ulong)uVar3 & 7)) & 1;
      }
      else {
        uVar7 = 0;
      }
      piVar1 = (int *)(lVar9 + 8 + uVar6 * 0x10);
      uVar6 = (ulong)*(ushort *)((long)piVar1 + uVar7 * 2 + 4);
      puVar10 = (uint *)(lVar9 + 8 + uVar6 * 0x10);
      uVar3 = *puVar10;
    } while (*piVar1 < (int)uVar3);
  }
  uVar6 = (ulong)**(ushort **)(puVar10 + 2);
  __n = sVar5;
  if (uVar6 <= sVar5) {
    __n = uVar6;
  }
  if (__n == 0) {
    if (sVar5 < uVar6) {
      return 0;
    }
  }
  else {
    iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,param_2,__n);
    iVar2 = iVar4;
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    if (sVar5 < uVar6 || iVar4 != 0) {
      if (iVar2 != 0) {
        return 0;
      }
      goto LAB_006fd0b0;
    }
  }
  if (uVar6 < sVar5) {
    return 0;
  }
LAB_006fd0b0:
  uVar6 = (long)puVar10 - (lVar9 + 0x18);
  if ((uVar6 >> 0x23 & 1) == 0) {
    return *(undefined8 *)(*(long *)(lVar8 + 0x28) + ((long)(uVar6 * 0x10000000) >> 0x1d));
  }
  return 0;
}


