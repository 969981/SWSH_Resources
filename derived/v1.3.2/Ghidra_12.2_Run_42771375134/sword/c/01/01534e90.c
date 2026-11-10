/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534e90; name: FUN_01534e90
 */


void FUN_01534e90(undefined8 param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2a8);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar1 = 0;
  do {
    if ((&DAT_02172e18)[uVar1] == param_2) {
LAB_01534f28:
      lVar2 = (uVar1 >> 5 & 0x7ffffff) * 4;
      *(uint *)(lVar4 + 0xf0 + lVar2) =
           *(uint *)(lVar4 + 0xf0 + lVar2) | 1 << (ulong)((uint)uVar1 & 0x1f);
      return;
    }
    if ((&DAT_02172e1c)[uVar1] == param_2) {
      uVar1 = uVar1 + 1;
      goto LAB_01534f28;
    }
    uVar1 = uVar1 + 2;
    if (0x4f < uVar1) {
      return;
    }
  } while( true );
}


