/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3def0; name: FUN_00a3def0
 */


void FUN_00a3def0(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x600) = 0;
  *(long *)(param_1 + 0x5f0) = param_2;
  bVar1 = 1 < *(ulong *)(param_2 + 0x48);
  *(byte *)(*(long *)(param_1 + 0x618) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x618) + 0x58) & 0xfe | bVar1;
  *(byte *)(*(long *)(param_1 + 0x610) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x610) + 0x58) & 0xfe | bVar1;
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x620),bVar1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x628),bVar1);
  if (param_3 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f0) + 0x48);
    if (lVar4 != 0) {
      iVar2 = 0;
      lVar4 = lVar4 << 3;
      piVar3 = (int *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x40) + 4);
      do {
        if ((*piVar3 != 0) && (piVar3[-1] == param_3)) {
          *(int *)(param_1 + 0x600) = iVar2;
          return;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return;
}


