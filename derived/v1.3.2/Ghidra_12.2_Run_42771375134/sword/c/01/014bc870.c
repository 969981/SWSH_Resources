/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bc870; name: FUN_014bc870
 */


void FUN_014bc870(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x170) == '\0')) &&
      ((*(long *)(param_1 + 0x188) == 0 || (*(char *)(*(long *)(param_1 + 0x188) + 0x170) == '\0')))
      ) || (*(long *)(param_1 + 0x60) != 0)) {
    return;
  }
  uVar4 = *(undefined8 *)(lVar2 + 400);
  plVar3 = *(long **)(param_1 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x1d0,0x10);
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_0077e290(lVar1,uVar4);
  *(long **)(lVar1 + 8) = plVar3;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x1d0;
  *(undefined8 *)(lVar1 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(long *)(param_1 + 0x60) = lVar1;
  FUN_0077ea30(lVar1,param_1 + 0x180);
  return;
}


