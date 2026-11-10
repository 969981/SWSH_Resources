/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e62540; name: FUN_00e62540
 */


void FUN_00e62540(long param_1,byte param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xb20) + 0x80);
  if ((lVar4 != 0) && (puVar5 = *(undefined8 **)(lVar4 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715280), iVar1 != 0)) {
      uVar3 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715288 = uVar3;
      __cxa_guard_release(PTR_DAT_02715280);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715288) {
        *(byte *)(param_1 + 0xd6c) = param_2 & 1;
        if ((param_2 & 1) == 0) {
          *(undefined1 *)(puVar5 + 0x2c) = 0;
          *(undefined1 *)(puVar5 + 0x39) = 1;
          return;
        }
        *(undefined1 *)(puVar5 + 0x2c) = 1;
        *(undefined1 *)(puVar5 + 0x39) = 0;
        return;
      }
    }
  }
  return;
}


