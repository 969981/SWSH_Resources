/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef2270; name: FUN_00ef2270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef2270(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x90);
  lVar4 = _DAT_00000060;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = *(long *)(lVar2 + 0x60);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((lVar4 == 0) || (uVar1 = FUN_016b1890(*(undefined8 *)(lVar4 + 0x630),0), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_016b1790(*(undefined8 *)(lVar4 + 0x630),0,0);
  return;
}


