/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01171d40; name: FUN_01171d40
 */


bool FUN_01171d40(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((((*(char *)(param_1 + 0x90) != '\0') && (*(long *)(param_1 + 0xa0) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x8c) % 10, uVar1 - 1 < 2)) &&
     ((lVar6 = *(long *)(param_1 + (ulong)(uVar1 & 1) * 8 + 0xb0), lVar6 != 0 &&
      (puVar7 = *(undefined8 **)(lVar6 + 0x60), puVar7 != (undefined8 *)0x0)))) {
    puVar3 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02724f60 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02724f60), iVar2 != 0)) {
      uVar5 = FUN_009b7e90();
      *(undefined8 *)PTR_DAT_02724f68 = uVar5;
      __cxa_guard_release(PTR_DAT_02724f60);
    }
    if (puVar3 != (undefined8 *)0x0) {
      while (puVar3 != (undefined8 *)PTR_DAT_02724f68) {
        puVar3 = (undefined8 *)*puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          return false;
        }
      }
      plVar8 = *(long **)(param_1 + 0x80);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,400,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_009fe380(lVar4,*(undefined8 *)(param_1 + 0x80));
      *(long **)(lVar4 + 8) = plVar8;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 400;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_009fe680(lVar4,puVar7 + 7);
      iVar2 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0xa0),0xc);
      if (lVar4 == 0) {
        return iVar2 == -1;
      }
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      return iVar2 == -1;
    }
  }
  return false;
}


