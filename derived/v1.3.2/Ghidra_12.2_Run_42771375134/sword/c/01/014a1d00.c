/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a1d00; name: FUN_014a1d00
 */


void FUN_014a1d00(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_02729fc0 + 0x28);
  plVar4 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x3d0,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_01712ba0(lVar2,uVar5,1,param_2 & 1,param_3 & 1);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x3d0;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar2;
  pcVar3 = *(code **)(lVar2 + 0x348);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x350) = 0;
    *(undefined8 *)(lVar2 + 0x358) = 0;
    *(undefined8 *)(lVar2 + 0x340) = 0;
    *(undefined8 *)(lVar2 + 0x348) = 0;
    (*pcVar3)(lVar2 + 0x360);
  }
  *(long *)(lVar2 + 0x360) = param_1;
  *(undefined1 **)(lVar2 + 0x340) = &LAB_014a2540;
  *(undefined1 **)(lVar2 + 0x348) = &LAB_014a25c0;
  *(undefined1 **)(lVar2 + 0x350) = &LAB_014a25d0;
  *(undefined1 **)(lVar2 + 0x358) = &LAB_014a25e0;
  return;
}


