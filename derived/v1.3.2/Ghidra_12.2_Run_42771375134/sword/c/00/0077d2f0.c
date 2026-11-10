/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d2f0; name: FUN_0077d2f0
 */


void FUN_0077d2f0(long param_1,long param_2)

{
  ushort uVar1;
  void *__s;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_2 + 0x7a);
  uVar1 = *(ushort *)(param_2 + 0x78);
  plVar4 = *(long **)(param_1 + 8);
  *(ushort *)(param_1 + 0x78) = uVar1;
  __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)uVar1 << 1,2);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  lVar3 = *(long *)(lVar2 + 0x80);
  *(long *)(lVar2 + 0x80) = lVar3 + 1;
  if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)uVar1 << 1);
  }
  *(long *)(lVar2 + 0x80) = lVar3;
  lVar2 = *(long *)(param_1 + 0x58);
  *(void **)(param_1 + 0x58) = __s;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),lVar2,*(undefined8 *)(param_1 + 0x68),
               *(undefined8 *)(param_1 + 0x70));
    __s = *(void **)(param_1 + 0x58);
  }
  *(long **)(param_1 + 0x60) = plVar4;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 2;
  if (__s != (void *)0x0) {
    FUN_0077d7e0(__s,*(undefined8 *)(param_2 + 0x58),*(undefined2 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  return;
}


