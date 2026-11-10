/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011724b0; name: FUN_011724b0
 */


undefined8 FUN_011724b0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02724f60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02724f60), iVar1 != 0)) {
      uVar5 = FUN_009b7e90();
      *(undefined8 *)PTR_DAT_02724f68 = uVar5;
      __cxa_guard_release(PTR_DAT_02724f60);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02724f68) {
        plVar2 = *(long **)(param_1 + 0x80);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,400,0x10);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0xb8))(plVar2);
        }
        FUN_009fe380(lVar4,*(undefined8 *)(param_1 + 0x80));
        *(long **)(lVar4 + 8) = plVar2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 400;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        FUN_009fe680(lVar4,puVar6 + 7);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar3 = *(long *)(param_1 + 0xa0);
        *(long *)(param_1 + 0xa0) = lVar4;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        return 1;
      }
    }
  }
  return 0;
}


