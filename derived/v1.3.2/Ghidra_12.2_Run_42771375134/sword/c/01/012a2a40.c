/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a2a40; name: FUN_012a2a40
 */


void FUN_012a2a40(long param_1)

{
  size_t __n;
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *__s;
  size_t sVar6;
  undefined8 uVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  long *plVar10;
  long local_58;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    local_58 = 0;
  }
  else {
    FUN_012a3260(&local_58);
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x260);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  __s = (char *)FUN_007ab2c0(*(undefined8 *)PTR_DAT_02716740);
  uVar1 = *(ushort *)(lVar9 + 0x68);
  sVar2 = FUN_008d4270();
  uVar3 = FUN_00884820(*(undefined8 *)(local_58 + 0x68));
  sVar6 = strlen(__s);
  __dest = *(void **)(param_1 + 0x68);
  __n = sVar6 + 1;
  iVar4 = (int)sVar6 + (uVar3 & 0xffff) * 0x148 + 9;
  if (iVar4 != 0) {
    if ((__dest != (void *)0x0) && (*(int *)(param_1 + 0x70) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(int *)(param_1 + 0x70) = iVar4;
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                               (*(long **)(param_1 + 0x60),iVar4,8);
    *(void **)(param_1 + 0x68) = __dest;
  }
  memcpy(__dest,__s,__n);
  *(ushort *)(*(long *)(param_1 + 0x68) + (long)(int)__n) = uVar1 >> 8 | uVar1 << 8;
  lVar8 = __n << 0x20;
  *(short *)(*(long *)(param_1 + 0x68) + (lVar8 + 0x200000000 >> 0x20)) = sVar2 << 8;
  *(undefined2 *)(*(long *)(param_1 + 0x68) + (lVar8 + 0x400000000 >> 0x20)) = 0x100;
  *(ushort *)(*(long *)(param_1 + 0x68) + (lVar8 + 0x600000000 >> 0x20)) =
       (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  plVar10 = *(long **)(local_58 + 0x68);
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x10))();
  }
  iVar4 = FUN_00884820(plVar10);
  if (iVar4 != 0) {
    uVar3 = 0;
    iVar4 = (int)((ulong)(lVar8 + 0x600000000) >> 0x20) + 2;
    do {
      uVar7 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar3);
      thunk_FUN_008787a0(uVar7,*(long *)(param_1 + 0x68) + (long)iVar4);
      iVar4 = iVar4 + 0x148;
      uVar3 = uVar3 + 1;
      uVar5 = FUN_00884820(plVar10);
    } while (uVar3 < uVar5);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


