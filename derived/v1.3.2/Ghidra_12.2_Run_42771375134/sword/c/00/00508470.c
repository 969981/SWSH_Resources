/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00508470; name: FUN_00508470
 */


undefined8 FUN_00508470(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  void *__s;
  ulong uVar7;
  
  uVar7 = *(ulong *)*param_3;
  bVar4 = *(byte *)(param_3 + 1);
  uVar3 = *(uint *)(PTR_DAT_02713940 + 0x20);
  uVar1 = bVar4 + 8;
  uVar6 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  iVar2 = (uVar3 & (uint)(uVar7 >> ((ulong)bVar4 & 0x3f))) + 1;
  iVar5 = iVar2 * 0x20;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar6;
  *param_3 = *param_3 + (ulong)uVar6 * 4;
  *(int *)(param_1 + 0x90) = iVar2;
  __s = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,iVar5);
  *(void **)(param_1 + 0xb8) = __s;
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(long)iVar5);
  }
  return 0xffffff7b;
}


